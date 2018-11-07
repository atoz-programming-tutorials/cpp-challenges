// Sum of the first n natural numbers:
// 1 + 2 + 3 + ... + n
// Pretend you don't know the closed formula n(n+1)/2

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int sum_first_n_natural_numbers(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	return sum;
}

int sum_first_n_natural_numbers_using_algorithms(int n) {
	std::vector<int> v(n);

	// Fill the vector with values
	std::iota(v.begin(), v.end(), 1);

	// Sum the vector elemets
	return std::accumulate(v.begin(), v.end(), 0);
}

int exact_solution(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int n = 0;
	std::cout << "Sum of the first n natural numbers.\n1+2+3+...+n\n";
	std::cout << "n = ";
	std::cin >> n;
	std::cout << "The calculated sum of the first " << n << " natural numbers is: " << sum_first_n_natural_numbers(n) << '\n';
	std::cout << "The calculated sum of the first " << n << " natural numbers using algorithms is: " << sum_first_n_natural_numbers_using_algorithms(n) << '\n';
	std::cout << "The exact sum of the first " << n << " natural numbers is: " << exact_solution(n) << '\n';
}
