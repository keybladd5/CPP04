/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:45:26 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:45:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "default_WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "Copy constructor WrongCat constructor called" << std::endl;
	*this = src;
}

WrongCat&       WrongCat::operator=(WrongCat const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void    WrongCat::makeSound(void) const
{
	std::cout << "* * WRONGMeoowwwwWRONG * *" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}
