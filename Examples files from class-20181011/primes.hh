/*
 * Utilities for prime number computations
 */

#include <vector>
#include <cstdint>

// Is a given positive integer prime?
bool is_prime(uint32_t n);

// Return a list of all the prime numbers from 1 to n:
std::vector<uint32_t> primes_to_n(uint32_t n);

