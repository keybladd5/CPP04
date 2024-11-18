/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:46:14 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:46:16 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// In the first scope, it doesn't work because it is an ABSTRACT CLASS.  
// However, in the second scope, it works because 'j' is a ptr, initialized as a Dog or Cat obj.  
// The abstract Animal class is used as an interface to instantiate derived classes.

int main()
{
	{
		//Animal test;
		//test.makeSound();
	}
	{
		Animal* j[10];
		for (int x = 0; x < 10; x++)
		{
			if (x >= 10/2)
				j[x] = new Dog;
			else
				j[x] = new Cat;
			j[x]->makeSound();
			std::cout << j[x]->getType() << " and idea " << std::endl;
		}
		for (int i = 0; i < 10; i++)
			delete j[i];
	}
	{
		Cat kitty;
		kitty.set_ideas(0, "asdsdadgjegadgg");
		Cat copy_kitty = kitty;
		std::cout << kitty.getType() << " cat with idea 0 ->" << kitty.get_ideas(0) << std::endl;
		std::cout << copy_kitty.getType() << " cat with idea 0 ->" << copy_kitty.get_ideas(0) << std::endl;
	}
	{
		Dog kitty;
		kitty.set_ideas(0, "asdsdadgjegadgg");
		Dog copy_kitty = kitty;
		std::cout << kitty.getType() << " Dog with idea 0 ->" << kitty.get_ideas(0) << std::endl;
		std::cout << copy_kitty.getType() << " Dog with idea 0 ->" << copy_kitty.get_ideas(0) << std::endl;
	}
	return 0 ;
}
