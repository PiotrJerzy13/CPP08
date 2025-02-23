/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:23:26 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/23 11:25:44 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N)
{
	numbers.reserve(N);
}

Span::~Span() {}

Span::Span(const Span &other) : numbers(other.numbers), maxSize(other.maxSize) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		numbers = other.numbers;
		maxSize = other.maxSize;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (numbers.size() >= maxSize)
		throw std::out_of_range("Span is full");
	
	numbers.emplace_back(num);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + numbers.size() > maxSize)
		throw std::out_of_range("Too many numbers to add!");

	numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");

	std::vector<int> sortedNumbers(numbers.begin(), numbers.end());
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = INT_MAX;
	for (size_t i = 0; i < sortedNumbers.size() - 1; i++)
	{
		minSpan = std::min(minSpan, sortedNumbers[i + 1] - sortedNumbers[i]);
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span");

	int minNum = *std::min_element(numbers.begin(), numbers.end());
	int maxNum = *std::max_element(numbers.begin(), numbers.end());

	return maxNum - minNum;
}
