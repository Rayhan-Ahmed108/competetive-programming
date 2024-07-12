#include<bits/stdc++.h>
#include <string>
#include <vector>

std::vector<std::string> divideString(const std::string& str, int chunkSize) {
    std::vector<std::string> chunks;
    for (size_t i = 0; i < str.length(); i += chunkSize) {
        chunks.push_back(str.substr(i, chunkSize));
    }
    return chunks;
}

int main() {
    string a,b;
    cin>>a>>b;
    int chunkSize = b.size(); // Set your desired chunk size here

    std::vector<std::string> dividedStrings = divideString(a, chunkSize);

    // Print the divided strings
    for (const auto& chunk : dividedStrings) {
        std::cout << chunk << std::endl;
    }

    return 0;
}
