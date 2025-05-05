/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:07:58 by lorey             #+#    #+#             */
/*   Updated: 2025/05/05 14:10:20 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Ice
{
	protected:
//[...]
	public:
		Ice(std::string const & type);
//[...]
		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);
};


#endif //  CURE_HPP
