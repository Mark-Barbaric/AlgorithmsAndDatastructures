#include "../../catch.hpp"
#include "../DynamicProgramming/NumCombinations.h"
#include "../DynamicProgramming/Knapsack.h"

TEST_CASE("Score Combination Tests")
{
	SECTION("Num Combination Tests")
	{
		REQUIRE(num_combinations::numCombinations(12, { 2, 3 ,7 }) == 4);
		REQUIRE(num_combinations::numCombinationsOptimised(12, { 2, 3 ,7 }) == 4);
	}

	SECTION("Score Combination Tests")
	{
		std::vector<std::vector<int>> response = { {1, 1}, {2} };
		std::vector<std::vector<int>> response2 = { {1, 1, 1}, {1, 2}, {3} };
		REQUIRE(num_combinations::combinationsMatrix(2, { 1, 2}) == response);
		REQUIRE(num_combinations::combinationsMatrix(3, { 1, 2, 3 }) == response2);
	}
}

//TEST_CASE("Knapsck Tests")
//{
//	SECTION("Maximum Value Tests")
//	{
//		std::vector<knapsack::Item> items = { {60, 10}, {100, 20}, {120, 30} };
//		const auto maxWeight = 50;
//		REQUIRE(knapsack::maximumValue(maxWeight, items) == 220);
//	}
//}