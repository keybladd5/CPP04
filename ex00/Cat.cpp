/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:43 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "default_Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy constructor Cat constructor called" << std::endl;
	*this = src;
}

Cat&       Cat::operator=(Cat const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void    Cat::makeSound(void) const
{
	std::cout << "* * Meoowwwww * *" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
}
