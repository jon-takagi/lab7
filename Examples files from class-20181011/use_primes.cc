#include "primes.hh"
#include <iostream>

int main()
{
	const auto primes = primes_to_n(100);
	for (auto p : primes) {
		std::cout << p << std::endl;
	}

	return 0;
}
