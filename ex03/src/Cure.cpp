/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:07:07 by lorey             #+#    #+#             */
/*   Updated: 2025/05/09 02:23:06 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->mat_type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	*this = cure;
}

Cure& Cure::operator=(const Cure &cure)
{
	if (this == &cure)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->mat_type = cure.mat_type;
	return *this;
}

std::string const &Cure::getType() const
{
	return (this->mat_type);
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout	<< "* heals "
				<< target.getName()
				<< " wounds *"
				<< std::endl;
}
