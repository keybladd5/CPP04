/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:41:05 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:41:07 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
			
			std::string _type;
	public:

			Animal(void);
			Animal(Animal const &);
			Animal& operator=(Animal const &);
			std::string getType(void) const;
			virtual void	makeSound(void) const;
			virtual ~Animal(void);
};

#endif
