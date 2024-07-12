#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Directions
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

// Snake structure
struct Snake {
    int x, y;
    Snake(int col, int row) {
        x = col;
        y = row;
    }
    Snake() {
        x = 0;
        y = 0;
    }
};

// Food structure
struct Food {
    int x, y;
    Food(int col, int row) {
        x = col;
        y = row;
    }
    Food() {
        x = 0;
        y = 0;
    }
};

bool gameOver;
const int width = 40;
const int height = 20;
Snake snake;
vector<Snake> snakeBody;
Food food;
int score;

void setup() {
    initscr(); // Start curses mode
    clear();
    noecho();
    cbreak();
    curs_set(0); // Hide the cursor
    keypad(stdscr, TRUE); // Enable keyboard input
    timeout(100); // Set delay for input
    
    // Initialize game state
    gameOver = false;
    dir = STOP;
    snake = Snake(width / 2, height / 2);
    snakeBody.clear();
    snakeBody.push_back(snake);
    food = Food(rand() % width, rand() % height);
    score = 0;
}

void draw() {
    clear();
    
    // Draw the borders
    for (int i = 0; i < width + 2; i++) {
        mvprintw(0, i, "#");
    }
    for (int i = 0; i < height + 2; i++) {
        mvprintw(i, 0, "#");
        mvprintw(i, width + 1, "#");
    }
    for (int i = 0; i < width + 2; i++) {
        mvprintw(height + 1, i, "#");
    }
    
    // Draw the snake
    for (int i = 0; i < snakeBody.size(); i++) {
        mvprintw(snakeBody[i].y + 1, snakeBody[i].x + 1, "o");
    }
    
    // Draw the food
    mvprintw(food.y + 1, food.x + 1, "F");
    
    // Draw the score
    mvprintw(height + 2, 0, "Score: %d", score);
    
    refresh();
}

void input() {
    int ch = getch();
    switch (ch) {
        case KEY_LEFT:
            if (dir != RIGHT) dir = LEFT;
            break;
        case KEY_RIGHT:
            if (dir != LEFT) dir = RIGHT;
            break;
        case KEY_UP:
            if (dir != DOWN) dir = UP;
            break;
        case KEY_DOWN:
            if (dir != UP) dir = DOWN;
            break;
        case 'q':
            gameOver = true;
            break;
    }
}

void logic() {
    switch (dir) {
        case LEFT:
            snake.x--;
            break;
        case RIGHT:
            snake.x++;
            break;
        case UP:
            snake.y--;
            break;
        case DOWN:
            snake.y++;
            break;
        default:
            break;
    }
    
    // Check for collision with the wall
    if (snake.x < 0 || snake.x >= width || snake.y < 0 || snake.y >= height) {
        gameOver = true;
    }
    
    // Check for collision with the body
    for (int i = 1; i < snakeBody.size(); i++) {
        if (snake.x == snakeBody[i].x && snake.y == snakeBody[i].y) {
            gameOver = true;
        }
    }
    
    // Check for collision with the food
    if (snake.x == food.x && snake.y == food.y) {
        score += 10;
        food = Food(rand() % width, rand() % height);
        snakeBody.push_back(Snake());
    }
    
    // Move the snake's body
    for (int i = snakeBody.size() - 1; i > 0; i--) {
        snakeBody[i].x = snakeBody[i - 1].x;
        snakeBody[i].y = snakeBody[i - 1].y;
    }
    if (!snakeBody.empty()) {
        snakeBody[0].x = snake.x;
        snakeBody[0].y = snake.y;
    }
}

int main() {
    srand(time(0));
    setup();
    while (!gameOver) {
        draw();
        input();
        logic();
        usleep(100000); // Sleep for 100ms
    }
    endwin(); // End curses mode
    cout << "Game Over! Your score is " << score << endl;
    return 0;
}
