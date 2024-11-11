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

int main()
{
	Animal* j[10];
	for (int x = 0; x < 10; x++)
	{
		if (x >= 10/2)
			j[x] = new Dog;
		else
			j[x] = new Cat;
		j[x]->Animal::set_ideas();
		j[x]->makeSound();
		std::cout << j[x]->getType() << " and idea " << j[x]->Animal::get_ideas(29) << std::endl;
	}
	for (int i = 0; i < 10; i++)
		delete j[i];
	return 0 ;
}
