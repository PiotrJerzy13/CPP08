/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestCointainer.tpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:49:45 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/23 11:49:50 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

template <typename T, bool isStack>
void testContainer(T& container, const std::string& containerName)
{
	std::cout << "\nTesting " << containerName << ":\n";

	if constexpr (isStack)
	{
		container.push(5);
		container.push(17);
		std::cout << "Top element: " << container.top() << std::endl;
		container.pop();
	}
	else
	{
		container.push_back(5);
		container.push_back(17);
		std::cout << "Back element: " << container.back() << std::endl;
		container.pop_back();
	}

	std::cout << "Container size after pop: " << container.size() << std::endl;

	if constexpr (isStack)
	{
		container.push(3);
		container.push(5);
		container.push(737);
		container.push(0);
	}
	else
	{
		container.push_back(3);
		container.push_back(5);
		container.push_back(737);
		container.push_back(0);
	}

	std::cout << "Iterating forward:" << std::endl;
	for (auto it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Iterating backward (reverse_iterator):" << std::endl;
	for (auto rit = container.rbegin(); rit != container.rend(); ++rit)
		std::cout << *rit << " ";
	std::cout << std::endl;

	std::cout << "Iterating backwards manually:" << std::endl;
	auto it = container.end();
	while (it != container.begin())
	{
		--it;
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
