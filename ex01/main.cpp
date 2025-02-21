/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:52:46 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/21 18:37:16 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <random>
#include <ctime>

std::vector<int> generateShuffledUniqueNumbers(int count, int minValue, int maxValue) {
	if (count > (maxValue - minValue + 1))
		throw std::runtime_error("Not enough unique numbers in the range!");

	std::vector<int> numbers;
	for (int i = minValue; i <= maxValue; ++i)
		numbers.push_back(i);

	std::random_device rd;
	std::mt19937 rng(rd());
	std::shuffle(numbers.begin(), numbers.end(), rng);
	return std::vector<int>(numbers.begin(), numbers.begin() + count);
}

int main()
{
	try
	{
		std::cout << "===== Basic Test =====" << std::endl;
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		std::cout << "\n===== Overflow Test =====" << std::endl;
		try
		{
			sp.addNumber(42);
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
		std::cout << "\n===== Single Element Test =====" << std::endl;
		try
		{
			Span single(1);
			single.addNumber(10);
			std::cout << "Shortest Span: " << single.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

		std::cout << "\n===== Using Iterator Range =====" << std::endl;
		Span rangeSpan(4);
		std::vector<int> numbers = {1, 5, 8, 12};
		rangeSpan.addNumbers(numbers.begin(), numbers.end());

		std::cout << "Shortest Span: " << rangeSpan.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << rangeSpan.longestSpan() << std::endl;
		std::cout << "\n===== Large Dataset Test (15,000 Elements) =====" << std::endl;
		
		Span largeSpan(15000);
		std::vector<int> largeNumbers = generateShuffledUniqueNumbers(15000, 1, 100000);
		largeSpan.addNumbers(largeNumbers.begin(), largeNumbers.end());
		std::sort(largeNumbers.begin(), largeNumbers.end());

		std::cout << "First 10 numbers: ";
		for (int i = 0; i < 10; i++)
			std::cout << largeNumbers[i] << " ";
		std::cout << std::endl;

		std::cout << "Shortest Span (Large Dataset): " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Longest Span (Large Dataset): " << largeSpan.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Unexpected Exception: " << e.what() << std::endl;
	}
	return 0;
}
