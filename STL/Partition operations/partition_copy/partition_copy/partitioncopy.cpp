// partitioncopy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>

int main()
{
	std::array<int, 9> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	auto is_even = [](int i) { return i % 2 == 0; };//is_partition benzeri bir kullanım
	std::partition(v.begin(), v.end(), is_even);

	auto p = std::partition_point(v.begin(), v.end(), is_even);

	std::cout << "Before partition:\n    ";
	std::copy(v.begin(), p, std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\nAfter partition:\n    ";
	std::copy(p, v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cin.get();
	return 0;
}