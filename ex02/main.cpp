/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:44:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 11:09:46 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringContent = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringContent;
	std::string	&stringREF = stringContent;

	std::cout << &stringContent << " is the address of stringContent" << std::endl;
	std::cout << stringPTR << " is the address of stringPTR" << std::endl;
	std::cout << &stringREF << " is the address of stringREF\n" << std::endl;

	std::cout << stringContent << " is the value of stringContent" << std::endl;
	std::cout << *stringPTR << " is the value of stringPTR" << std::endl;
	std::cout << stringREF << " is the value of stringREF" << std::endl;

	return (0);
}
