// fib-02 - Generate the first n Fibonacci numbers
#include <iostream>
#include <vector>

// Recursive Fibonacci version 2
int fibonacci(int n, std::vector<int> &F) {
  if (n == 0 || n == 1) {
    return n;
  }
  else {
    if (F[n - 1] == 0) {
      F[n - 1] = fibonacci(n - 1, F);
    }
    if (F[n - 2] == 0) {
      F[n - 2] = fibonacci(n - 2, F);
    }
    return F[n - 1] + F[n - 2];
  }
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

  std::vector<int> F(n);
  fibonacci(n, F);

  for (const auto &el : F) {
    std::cout << el << ' ';
  }
  std::cout << '\n';
}
