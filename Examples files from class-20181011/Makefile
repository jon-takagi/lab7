
CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -Werror -std=c++17
OPTFLAGS=-O3
LDFLAGS=$(CXXFLAGS) $(OPTFLAGS)

all:  use_primes

use_primes: primes.o use_primes.o
	$(CXX) $(LDFLAGS) use_primes.o primes.o -o use_primes

primes.o: primes.cc primes.hh
	$(CXX) $(CXXFLAGS) $(OPTFLAGS) -c primes.cc -o primes.o

use_primes.o: use_primes.cc primes.hh
	$(CXX) $(CXXFLAGS) $(OPTFLAGS) -c use_primes.cc -o use_primes.o

clean:
	rm -rf *.o use_primes
