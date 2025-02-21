/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwojnaro <pwojnaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:57:23 by pwojnaro          #+#    #+#             */
/*   Updated: 2025/02/21 16:43:46 by pwojnaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
    std::vector<int> vec = {1, 3, 5, 7, 9};
    std::sort(vec.begin(), vec.end());

    try
    {
        auto it = easyfind(vec, 5);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const NotFoundException& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

