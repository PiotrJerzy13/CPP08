/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:23:11 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/23 11:05:04 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
	std::vector<int> numbers;
	unsigned int maxSize;

public:
	Span(unsigned int N);
	~Span();
	Span(const Span &other);
	Span &operator=(const Span &other);

	void addNumber(int num);
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;
};
