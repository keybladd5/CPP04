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
	private:
			
			Brain *_brain;
	public:

			Dog(void);
			Dog(Dog const &);
			Dog& operator=(Dog const &);
			void	set_ideas(void);
			void	set_ideas(unsigned int , std::string);
			std::string get_ideas(int i);
			void	makeSound(void) const;
			~Dog(void);
};

#endif
