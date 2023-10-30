// Dylan Chuong
// Vintouka@csu.fullerton.edu
// @Vintouka
// Partners: @kwitecki

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least on number\n";
    return 1;
  };
  bool first{true};
  double sum{0};
  double count{0};
  for (const std::string& num : arguments) {
    if (first == true) {
      first = false;
      continue;
    }
    ++count;
    sum += std::stof(num);
  };
  double average{sum / count};
  std::cout << "average = " << average << "\n";
  return 0;
}
