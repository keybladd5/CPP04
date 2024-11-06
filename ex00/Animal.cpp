/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:41:26 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:41:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "default_animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
        std::cout << "Copy constructor Animal constructor called" << std::endl;
        *this = src;
}

Animal&       Animal::operator=(Animal const &src)
{
        std::cout << "copy assignment operator called" << std::endl;
        if (this != &src)
			_type = src._type;
        return (*this);
}
