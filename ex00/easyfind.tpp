/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:29:12 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/21 16:38:36 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::lower_bound(container.begin(), container.end(), value);
    if (it != container.end() && *it == value)
        return it;
    throw NotFoundException();
}
