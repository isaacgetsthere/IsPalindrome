#include <iostream>
#include <string>
#include <algorithm>

std::string getUserInput()
{
    std::string userInput;
    std::cout << "what do you want to test as a palindrome" << std::endl;
    std::getline(std::cin, userInput);
    return userInput;
}

bool isPalindrome(std::string input)
{
    std::string copyOfInput = input;
    std::string reversedInput;
    std::reverse(input.begin(), input.end());

    return(copyOfInput == input);
}

int main()
{
    while (true)
    {
        std::string userInput = getUserInput();
        if (isPalindrome(userInput))
        {
            std::cout << "That is a palindrome" << std::endl;
        }
        else
        {
            std::cout << "\033[3m";
            std::cout << "That is not a palindrome!" << std::endl;
        }
    }
}
