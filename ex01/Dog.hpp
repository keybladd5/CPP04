/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:18 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:21 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:

			Dog(void);
			Dog(Dog const &);
			Dog& operator=(Dog const &);
			void	makeSound(void) const;
			~Dog(void);
};

#endif
