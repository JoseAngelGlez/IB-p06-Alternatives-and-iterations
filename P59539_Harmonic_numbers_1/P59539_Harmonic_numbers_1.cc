 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Harmonic_numbers.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief A program that reads a number and print with 4 decimals, the result of the sum due
 * the interval of harmonic numbres form 0 to that number.
 * @bugs No bugs
 * @see https://jutge.org/problems/P59539_en/statement
 */

#include<iostream>
#include <iomanip>

int main() {
  int number;
  std::cin >> number;

  double result{0.0};
  double divisor{0.0};
  for (double sum{1.0} ; sum <= number; ++sum){
    divisor = 1.0 / sum;
    result += divisor;
  }

  std::cout << std::fixed << std::setprecision(4) << result << std::endl;
}