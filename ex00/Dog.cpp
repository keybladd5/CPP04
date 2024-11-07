/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:29 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:31 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "default_Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy constructor Dog constructor called" << std::endl;
	*this = src;
}

Dog&       Dog::operator=(Dog const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void    Dog::makeSound(void) const
{
	std::cout << "* * Bark!Bark! * *" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
}
