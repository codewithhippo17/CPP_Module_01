#include "sed.hpp"

std::string ft_sed(std::string line, std::string pattern,
                   std::string replacement) {
  size_t pos = 0;
  while ((pos = line.find(pattern, pos)) != std::string::npos) {
    line.erase(pos, pattern.length());
    line.insert(pos, replacement);
    pos += replacement.length();
  }
  return line;
}

int main(int ac, char *av[]) {

  if (ac != 4) {
    std::cerr << ERR_USAGE << std::endl;
    return 1;
  }
  std::string filename = av[1];
  std::string pattern = av[2];
  std::string replacement = av[3];
  std::string newFilename = filename + ".replace";

  std::ifstream inputFile(filename.c_str());
  if (!inputFile.is_open()) {
    std::cerr << ERR_OPEN << std::endl;
    return 1;
  }

  std::string buffer;
  std::string line;
  std::ofstream outFile(newFilename.c_str());
  if (!outFile.is_open()) {
    std::cerr << ERR_OPEN << std::endl;
    return 1;
  }
  while (std::getline(inputFile, line)) {
    buffer = ft_sed(line, pattern, replacement);
    outFile << buffer;
    if (!inputFile.eof()) {
      outFile << "\n";
    }
  }
  return 0;
}
