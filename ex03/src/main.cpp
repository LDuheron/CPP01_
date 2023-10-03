/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 11:27:57 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	{
	Weapon club = Weapon("crude spiked club");

	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon	club = Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	club.setType("some other type of club");	
	jim.attack();
	}
	return (0);
}
