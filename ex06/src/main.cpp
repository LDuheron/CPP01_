/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 11:46:38 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	find_complain(char *argv)
{
	std::string	level_complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level_complain[i] == argv)
			return (i);
		i++;
	}
	return (4);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
		std::cout << "Please, enter 2 arguments." << std::endl;
	else
	{
		switch (find_complain(argv[1]))
		{
			case (4):
				std::cout << "Nothing to complain about today !" << std::endl;
				break;
			case (0):
				harl.complain("DEBUG");
			case (1):
				harl.complain("INFO");
			case (2):
				harl.complain("WARNING");
			case (3):
				harl.complain("ERROR");
		
		}
	}
	return (0);
}
