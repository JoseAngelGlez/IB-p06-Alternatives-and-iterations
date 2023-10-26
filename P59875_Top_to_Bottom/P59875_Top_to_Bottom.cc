/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Top_to_bottom.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Write a program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
 * @bugs No bugs
 * @see https://jutge.org/problems/P59875_en
 */

#include <iostream>

int main () {
  int number1, number2;
  std::cin >> number1 >> number2;
  if (number1 > number2) {
  for (int new_number{number1}; new_number >= number2; --new_number) {
    std::cout << new_number << std::endl;
    }
  }
  else if (number2 > number1) {
    for (int new_number{number2}; new_number >= number1; --new_number) {
      std::cout << new_number << std::endl;
    }
  }
  else {
    std::cout << number1 << std::endl;
  }
  return 0;
}