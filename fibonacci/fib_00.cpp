// Generate the first n Fibonacci numbers
#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n) {
  std::vector<int> F(n);

  if (n == 1) {
    F[0] = 0;
  }
  else if (n >= 2) {
    F[0] = 0;
    F[1] = 1;
  }

  for (int i = 2; i < n; ++i) {
    F[i] = F[i - 1] + F[i - 2];
  }

  return F;
}

int main() {
  int n = 0;
  std::cout << "How many Fibonacci numbers you want to generate?\n";
  std::cout << "n = ";
  std::cin >> n;

  if (n < 0) {
    std::cerr << "Error! Expecting an integer >= 0 \n";
    exit(1);
  }

  auto F = fibonacci(n);

  for (const auto &e : F) {
    std::cout << e << ' ';
  }
  std::cout << '\n';
}
