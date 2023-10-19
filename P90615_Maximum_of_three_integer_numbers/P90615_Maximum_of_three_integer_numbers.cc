/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Higger_3_numbers.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief The program reads 3 numbers and prints the higger
 * @bugs No bugs
 * @see https://jutge.org/problems/P90615_en
 */

#include<iostream>

int main() {
  int number1, number2, number3;
  std::cin >> number1 >> number2 >> number3;
  int max_number = number1;

  if(max_number < number2) {
    max_number = number2;
  }
  if(max_number < number3) {
    max_number = number3;
  }
  std::cout << max_number << std::endl;
}