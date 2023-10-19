 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Numbers_interval.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief A program that reads 2 numbers and prints the numbers between those
 * @bugs No bugs
 * @see https://jutge.org/problems/P97156_en
 */

#include<iostream>

int main() {
  int number1, number2;
  std::cin >> number1 >> number2;

  if (number1 > number2) {
    std::cout << std::endl;
    return 1;
  } else {
    for (int sum = number1; sum < number2; ++sum) {
      std::cout << sum << ",";
    }
    std::cout << number2 << std::endl;
  }
  return 0;
}