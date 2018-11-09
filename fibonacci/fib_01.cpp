// fib-01 - Generate the first n Fibonacci numbers
#include <iostream>
#include <vector>

// Recursive Fibonacci version 1
int fib(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  else {
    return fib(n - 1) + fib(n - 2);
  }
}


std::vector<int> fibonacci(int n) {
  std::vector<int> F(n);

  for (int i = 0; i < n; ++i) {
    F[i] = fib(i);
  }

  return F;
}

int main() {
  int n = 2;
  std::cout << "How many Fibonacci numbers you want to generate?\n";
  std::cout << "n = ";
  std::cin >> n;

  if (n < 0) {
    std::cerr << "Error! Expecting an integer >= 0\n";
    exit(1);
  }

  auto F = fibonacci(n);

  for (const auto &el : F) {
    std::cout << el << ' ';
  }
  std::cout << '\n';
}
