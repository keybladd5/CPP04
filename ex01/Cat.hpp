/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:44:07 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:44:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
			
			Brain *_brain;
	public:

			Cat(void);
			Cat(Cat const &);
			Cat& operator=(Cat const &);
			void	set_ideas(void);
			void	set_ideas(unsigned int, std::string);
			std::string get_ideas(int i);
			void	makeSound(void) const;
			~Cat(void);
};

#endif
