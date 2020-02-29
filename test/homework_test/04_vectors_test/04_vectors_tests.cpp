#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_max_from_vector")
{
	std::vector<int> numbers{ 3, 8, 1, 99, 1000 };

	get_max_from_vector(numbers);

	REQUIRE(get_max_from_vector(numbers) == 1000);

	std::vector<int> numbers2{ 15, 12, 11, 99, 88 };

	get_max_from_vector(numbers2);

	REQUIRE(get_max_from_vector(numbers2) == 99);

	std::vector<int> numbers3{ 150, 120, 11, 990, 88888 };

	get_max_from_vector(numbers3);

	REQUIRE(get_max_from_vector(numbers3) == 88888);
}

TEST_CASE("Test is_prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);

}

TEST_CASE("Test function vector_of_primes")
{

}