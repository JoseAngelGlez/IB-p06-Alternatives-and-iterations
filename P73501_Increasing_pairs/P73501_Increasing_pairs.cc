/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file first_position.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
 * @bugs No bugs
 * @see https://jutge.org/problems/P73501_en/
 */

#include <iostream>
#include <vector>

int main() {
  int iterations, number0, number1, counter{0};
  std::cin >> iterations;
  bool first{true};
  while (std::cin >> number0) {
    if (number0 == 0) {
      std::cout << counter << std::endl;
      counter = 0;
      iterations--;
      first = true;
    } else if (first) {
      number1 = number0;
      first = false;
    } else {
      if (number0 > number1) {
        counter++;
      }
    }
    number1 = number0;
    if (iterations == 0) {
      return 0;
    }
  }
}