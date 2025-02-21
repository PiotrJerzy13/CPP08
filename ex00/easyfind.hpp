/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:56:42 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/21 16:40:48 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class NotFoundException : public std::exception
{
public:
	const char* what() const throw();
};

template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp"
