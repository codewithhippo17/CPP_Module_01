#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level) {
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int i = 0;
  while (i < 4 && level != levels[i]) {
    i++;
  }
  switch (i) {
  case 0:
    debug();
    // fall through
  case 1:
    info();
    // fall through
  case 2:
    warning();
    // fall through
  case 3:
    error();
    break;
  default:
    std::cout << ERROR << std::endl;
  }
}
