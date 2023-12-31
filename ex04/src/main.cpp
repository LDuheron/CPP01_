/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 11:40:40 by lduheron         ###   ########.fr       */
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
		std::cout << "Error: Please enter 3 arguments." << std::endl;
		return (0);
	}
	std::string		filename = argv[1];
	std::string		line;
	std::ifstream	infile(argv[1]);

	if (!infile.is_open() || infile.fail())
	{
		std::cerr << "Error: cant open file" << argv[1] << "." << std::endl;
		return (0);
	}
	std::ofstream	outfile(filename.append(".replace").c_str());
	if (!outfile.is_open() || outfile.fail())
	{
		std::cerr << "Error: open outfile failed." << std::endl;
		return (0);
	}
	while (std::getline(infile, line))
	{	
		if (argv[2][0])
			line = sed(line, argv[2], argv[3]);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
