/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file first_position.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Write a program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
 * @bugs No bugs
 * @see https://jutge.org/problems/P89078
 */

#include <iostream>

int main() {
  int number, counter = 0;
  while (std::cin >> number) {
    counter++;
    if (number % 2 == 0) {
      std::cout << counter << std::endl;
      return 0;
    }
  }
}
