/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/09/24 15:09:23 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter 3 arguments.\n";
		return (0);
	}
	std::string		filename = argv[1];
	std::string		outfile_name = filename + ".replace";
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	infile(argv[1]);
	std::ofstream 	outfile(outfile_name.c_str());

	if (s1.empty() || s2.empty())
		return (0);

	// ouvrir infile
	// infile.open(argv[1]);
		// return (ERROR);

	// creer le fichier
	outfile.is_open();
	// boucler pour remplacer
	// outfile << "test";

	std::string		line;
	unsigned long		len = s1.length();
		int					pos = 0;
		unsigned long		cpt = 0;
	std::getline(infile, line);
	while (!line.empty())
	{
		while (line[pos])
		{
			if (!line[pos])
				break;
			cpt = 0;
			if (line[pos] == s1[cpt])
			{
				std::cout << "line [pos] : " << line[pos] << " s1[cpt] : " << s2[cpt] << "\n";
				while (line[pos + cpt] == s1[cpt])
					cpt++;
				std::cout << "cpt : " << cpt << " len : " << len << "\n";
				if (cpt == len)
				{
					std::cout << "EQUIVALENT\n";
					outfile << s2;
					pos+= cpt;
				}
			}
			outfile << line[pos];
			pos++;
		}
		outfile <<  '\n';
		std::getline(infile, line);
	}
	infile.close();
	outfile.close();
	return (0);
}

// https://cplusplus.com/reference/sstream/stringstream/