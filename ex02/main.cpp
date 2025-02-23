/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:50:21 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/23 11:50:24 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5); mstack.push(17);
// std::cout << mstack.top() << std::endl; mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3); mstack.push(5); mstack.push(737);
// MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
//     std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack); return 0;
// }
