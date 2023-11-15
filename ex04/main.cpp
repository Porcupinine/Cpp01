/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 16:48:18 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 16:48:18 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//argv[1] -- file name
//argv[2] -- string 1
//argv[3] -- string 2
//open file, create new output file search for s1, if not found, keep copping
//if

#include <iostream>
#include <string>
#include <fstream>

void copy_file(const std::string& fileName, const std::string& replaceName) {
	std::string line;
	std::ifstream infile(fileName);
	std::ofstream outfile(replaceName);
	if(!infile.is_open())
		std::cout<<"can't open infile\n";
	if(!outfile.is_open())
		std::cout<<"can't open outfile\n";
	if (infile && outfile) {
		while (std::getline(infile, line)) {
			outfile << line << "\n";
		}
	}
	else
		std::cout<<"Can't read\n";
	infile.close();
	outfile.close();
}

int main (int argc, char **argv) {
	if (argc != 4)
	{
		std::cout<<"Wrong amount of arguments\n";
		return 1;
	}
	std::string fileName = argv[1];
	std::string replaceName = argv[1];
	replaceName.append(".replace");
	copy_file(fileName, replaceName);
	return 0;
}