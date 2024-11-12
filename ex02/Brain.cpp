/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:33:35 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:37 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor Brain constructor called" << std::endl;
	*this = src;
}

Brain&       Brain::operator=(Brain const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
}
