/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:04:28 by lorey             #+#    #+#             */
/*   Updated: 2025/05/05 15:05:04 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
//[...]
	public:
		AMateria(std::string const & type);
//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
