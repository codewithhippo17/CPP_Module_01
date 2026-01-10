#include "Harl.hpp"

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
  void (Harl::*ptrToMemberFuncs[])(void) = {&Harl::debug, &Harl::info,
                                            &Harl::warning, &Harl::error};
  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*ptrToMemberFuncs[i])();
      return;
    }
  }
  std::cout << ERROR << std::endl;
}
