#include <iostream>
#include <algorithm>
#include <string>

bool areAnagrams(std::string str1, std::string str2) {
    // If lengths of both strings are not the same, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    // Compare sorted strings
    return (str1 == str2);
}

int main() {
    std::string str1, str2;

    // Input two strings
    std::cout << "Enter first string: ";
    std::cin >> str1;
    std::cout << "Enter second string: ";
    std::cin >> str2;

    // Check if they are anagrams
    if (areAnagrams(str1, str2)) {
        std::cout << str1 << " and " << str2 << " are anagrams." << std::endl;
    } else {
        std::cout << str1 << " and " << str2 << " are not anagrams." << std::endl;
    }

    return 0;
}

