#include "primes.hh"

bool is_prime(uint32_t n)
{
	if (n < 4) {
		return true;
	}

	for (uint32_t i = 0; i < n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

std::vector<uint32_t> primes_to_n(uint32_t n)
{
	std::vector<uint32_t> ret;

	for (uint32_t i = 1; i < n; ++i) {
		if (is_prime(i)) {
			ret.push_back(i);
		}
	}
	return ret;
}
