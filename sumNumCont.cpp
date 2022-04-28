// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April 2022
// This program calculate the sum
// how numbers based on user's choice.


#include <iostream>

int main() {
       while (true) {
              // Declaring variables
              int counter = 0;
              int totalSum = 0;
              int userInputAsInt;
              int userNumAsInt;
              std::string userInput;
              std::string userNum;


              // Ask user how much number they want to add up
              std::cout << "How many numbers would you like to enter?: ";
              std::cin >> userInput;

              try {
                     // Casting to int
                     userInputAsInt = std::stoi(userInput);

                     if (userNumAsInt <= 0) {
                            std::cout << "Invalid number.";
                            std::cout << "You cannot input a";
                            std::cout << "negative number nor 0.\n";
                            break;
                     } else {
                     while (counter < userInputAsInt) {
                            // input
                            std::cout << "Enter a number : ";
                            std::cin >> userNum;
                            try {
                                   // Casting to int
                                   userNumAsInt = std::stoi(userNum);
                                   if (userNumAsInt <= 0) {
                                          std::cout << "Invalid number.";
                                          std::cout << " You cannot input a ";
                                          std::cout << "negative number";
                                          std::cout << " nor 0.\n";
                                          continue;
                                   }
                                   totalSum += userNumAsInt;
                                   counter += 1;
                            } catch (std::invalid_argument) {
                                   // The user did not enter a number
                                   std::cout << "Invalid input.\n";
                                   std::cout << "Please input a";
                                   std::cout << "positive number.\n";
                                   continue;
                     }
                     }
              }
              // Displaying the total sum
              std::cout << "The total sum is " << totalSum << ".\n";
              break;
              } catch (std::invalid_argument) {
                     // The user did not enter a number
                     std::cout << "Invalid number.";
                     std::cout << " You cannot input a ";
                     std::cout << "negative number nor 0.\n";
                     break;
              }
       }
}
