#include <iostream>
#include <vector>
#include <set>
#include <string>

void printUniqueStrings(const std::vector<std::string>& strings) {
    std::set<std::string> uniqueStrings;
    for (auto it = strings.rbegin(); it != strings.rend(); ++it) {
        if (uniqueStrings.find(*it) == uniqueStrings.end()) {
            std::cout << *it << std::endl;
            uniqueStrings.insert(*it);
        }
    }
}

int main() {
    std::vector<std::string> stringList = {"apple", "banana", "apple", "orange", "banana", "grape"};
    printUniqueStrings(stringList);
    return 0;
}