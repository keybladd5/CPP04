/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:44:38 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:44:42 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "default_WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy constructor WrongAnimal constructor called" << std::endl;
	*this = src;
}

WrongAnimal&       WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void    WrongAnimal::makeSound(void) const
{
	std::cout << "* * genrical sound * *" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}
