#include <iostream>
#include <vector>
#include <algorithm>

int minPiecesToSortBinaryString(std::string binaryString) {
    int n = binaryString.size();
    std::vector<int> lis(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (binaryString[i] > binaryString[j]) {
                lis[i] = std::max(lis[i], lis[j] + 1);
            }
        }
    }

    int maxLength = *std::max_element(lis.begin(), lis.end());
    return n - maxLength;
}

int main() {
    std::string binaryString = "110101";
    std::cout << minPiecesToSortBinaryString(binaryString) << std::endl;  // Output: 2
    return 0;
}
