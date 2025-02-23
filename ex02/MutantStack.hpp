/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:50:11 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/23 12:08:10 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <stack>
#include <deque>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	using std::stack<T>::stack;

	using iterator = typename std::deque<T>::iterator;
	using const_iterator = typename std::deque<T>::const_iterator;
	using reverse_iterator = typename std::deque<T>::reverse_iterator;
	using const_reverse_iterator = typename std::deque<T>::const_reverse_iterator;

	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;

	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator rbegin() const;
	const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"
#include "TestCointainer.tpp"
