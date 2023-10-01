/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/01 17:28:10 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

std::string sed(std::string line, std::string OldWord, std::string NewWord)
{
	size_t			i = 0;
	size_t			pos = 0;
	int				len_Old_Word = OldWord.length();

	while (i < line.length())
	{
		pos = line.find(OldWord, i);
		if (pos != std::string::npos)
		{
			line.erase(pos, len_Old_Word);
			line.insert(pos, NewWord);
			i += pos + len_Old_Word;
		}
		i++;
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter 3 arguments.\n";
		return (0);
	}
	std::ifstream	infile(argv[1]);
	std::string		filename = argv[1];
	std::ofstream	outfile(filename.append(".replace").c_str());
	std::string		line;

	outfile.is_open();
	while (std::getline(infile, line))
	{
		line = sed(line, argv[2], argv[3]);
		outfile << line << "\n";
	}
	infile.close();
	outfile.close();
	return (0);
}
