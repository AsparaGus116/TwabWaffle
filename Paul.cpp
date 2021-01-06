#include "Paul.h"

void Paul::lo_mein()
{
	int x;
	int y;

	std::cout << "Give me a number: ";
	std::cin >> x;

	std::cout << "Give me another number: ";
	std::cin >> y;

	int xy = x + y;
	std::cout << xy;
}