#include "Zombie.hpp"

int main() {

  int N = 10;
  Zombie *horde = zombieHorde(N, "hippo");
  for (int i = 0; i < N; i++) {
    std::cout << "Zombie[" << i + 1 << "] :";
    horde[i].announce();
  }
  delete[] horde;
  return 0;
}
