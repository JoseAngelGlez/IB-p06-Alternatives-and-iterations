/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Lowercase_upercase.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief A program that prints aun uppercase letter into lowercase, and
 * reverse.
 * @bugs No bugs
 * @see https://jutge.org/problems/P98960_en
 */

#include <iostream>

int main() {
  char letter;
  std::cin >> letter;
  if (letter >= 97) {
    letter -= 32;
    std::cout << letter << std::endl;
  } else {
    letter += 32;
    std::cout << letter << std::endl;
  }
  return (0);
}