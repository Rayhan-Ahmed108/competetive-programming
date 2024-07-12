#include <iostream>
using namespace std;

// Function to print spaces
void printSpaces(int n) {
    if (n <= 0)
        return;
    cout << " ";
    printSpaces(n - 1);
}

// Function to print stars
void printStars(int n) {
    if (n <= 0)
        return;
    cout << "* ";
    printStars(n - 1);
}

// Function to print a row of the pyramid
void printRow(int spaces, int stars) {
    if (spaces <= 0 && stars <= 0)
        return;
    printSpaces(spaces);
    printStars(stars);
    cout << endl;
    printRow(spaces - 1, stars + 2);
}

// Function to print the pyramid
void printPyramid(int N) {
    if (N <= 0)
        return;
    printRow(N - 1, 1);
}

int main() {
    int N;
    cout << "Enter the height of the pyramid: ";
    cin >> N;

    cout << "Pyramid of height " << N << ":\n";
    printPyramid(N);

    return 0;
}
