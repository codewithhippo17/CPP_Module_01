#include "Harl.hpp"
#include <ostream>

void debug(void) { std::cout << "[DEBUG]" << DEBUG << std::endl; }
void info(void) { std::cout << "[DEBUG]" << DEBUG << std::endl; }
void warning(void) { std::cout << "[WARNING]" << WARNING << std::endl; }

void error(void) {}
