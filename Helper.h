#pragma once
#include <iostream>

namespace Helper
{
	bool inRange(unsigned low, unsigned high, unsigned x)
	{
		return  ((x - low) <= (high - low));
	}

	void isDigit(unsigned value)
	{
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
	}
}