/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:15:51 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/23 14:56:16 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// Constructor
HumanA::HumanA( std::string name, Weapon &weapon_to_set ) : name(name), weapon(weapon_to_set)
{
	// std::cout << "Constructor human A.\n";
}

// Destructor
HumanA::~HumanA()
{
	// std::cout << "Destructor human A.\n";
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
