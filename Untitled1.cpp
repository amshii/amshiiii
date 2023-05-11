#include <iostream>
#include <algorithm>
#include <cctype>

bool is_palindrome(const std::string& word) {
    std::string lowercaseWord = word;
    std::transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);

    return lowercaseWord == std::string(lowercaseWord.rbegin(), lowercaseWord.rend());
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word);

    if (is_palindrome(word)) {
        std::cout << "It's a palindrome!" << std::endl;
    } else {
        std::cout << "It's not a palindrome." << std::endl;
    }

    return 0;
}

