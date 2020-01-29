#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test square number function")
{
	REQUIRE(square_number(5) == 25); // call function to test if it is true 
	REQUIRE(square_number(4) == 16); // incorrect assertion to test if it works 


}

