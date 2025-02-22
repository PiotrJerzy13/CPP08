#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::list<int> myList;

	testContainer<MutantStack<int>, true>(mstack, "MutantStack");
	testContainer<std::list<int>, false>(myList, "std::list");

	return 0;
}
