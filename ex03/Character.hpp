/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:05:58 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:06:01 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:

			std::string const _name;
			AMateria *_inv[4];
	
	public:
			
			Character(std::string const);
			Character(Character const&);
			Character&	operator=(Character const &);
			~Character();
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};
#endif