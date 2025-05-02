/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:07:44 by lorey             #+#    #+#             */
/*   Updated: 2025/05/02 20:11:21 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Cure
{
	protected:
//[...]
	public:
		Cure(std::string const & type);
//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
//		virtual void use(ICharacter& target);
};


#endif //  CURE_HPP
