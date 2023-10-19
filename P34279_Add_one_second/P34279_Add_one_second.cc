/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Add_one_second.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 19 10 2023
 * @brief A program that reads a date and add 1 second.
 * @bugs No bugs
 * @see https://jutge.org/problems/P34279_en
 */

#include<iostream>

int main() {
  int hour, minut, second;
  std::cin >> hour >> minut >> second;

  const int kMinTime{1};
  second += kMinTime;
  const int kMaxHour{24}, kMaxMinutSecond{60};
  minut += (hour / kMaxHour) * kMaxMinutSecond;
  hour %= kMaxHour;
  second += (minut / kMaxMinutSecond) * kMaxMinutSecond;
  minut %= kMaxMinutSecond;
  if (second >= kMaxMinutSecond) {
    minut += kMinTime;
    second %= kMaxMinutSecond;
  }
  if (minut == kMaxMinutSecond) {
    hour += kMinTime;
    minut = 0;
  }
  if (hour == kMaxHour) {
    hour = 0;
  }
  const int kMaxFormat{10};
  if (hour < kMaxFormat) {
    std::cout << "0" << hour << ":";
  } else{
    std::cout << hour << ":";
  } 
  if(minut < kMaxFormat) {
    std::cout << "0" << minut << ":";
  } else{
    std::cout << minut << ":";
  } 
  if(second < kMaxFormat) {
    std::cout << "0" << second << std::endl;
  } else{
    std::cout << second << std::endl;
  } 
  return 0;
}