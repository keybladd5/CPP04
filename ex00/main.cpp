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
	const Animal* meta = new(std::nothrow) Animal();
	if(!meta)
		return(1);
	const Animal* j = new(std::nothrow) Dog();
	if(!j)
		return(delete meta, 1);
	const Animal* i = new(std::nothrow) Cat();
	if(!i)
		return(delete meta, delete j, 1);
	const WrongAnimal* x = new(std::nothrow) WrongCat();
	if(!i)
		return(delete meta, delete j, 1);
	const WrongCat c;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	std::cout << c.getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound(); //will output the cat sound!
	i->makeSound();
	x->makeSound();
	c.makeSound();
	delete meta;
	delete j;
	delete i;
	delete x;
	return 0;
}
