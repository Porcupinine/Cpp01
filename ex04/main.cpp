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
#include<bits/stdc++.h>

size_t count_new_lines(std::string str) {
	size_t new_lines = std::count(str.begin(), str.end(), '\n');
	return (new_lines);
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
	size_t s1_new_lines = count_new_lines(argv[2]);
	std::string line;
	std::ifstream infile(fileName);
	std::ofstream outfile(replaceName);
	std::string tem_string;
	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	std::string temp2;
	size_t start;
	if(!infile.is_open()) {
		std::cout<<"can't open infile\n";
		return 1;
	}
	if(!outfile.is_open()) {
		std::cout<<"can't open outfile\n";
		return 2;
	}
	if (infile && outfile) {
		while (std::getline(infile, line)) {
			tem_string.append(line);
			tem_string.append("\n");
			if (count_new_lines(tem_string) == s1_new_lines + 1) {
				start = tem_string.find(to_find);
				if (start != std::string::npos) {
					tem_string.erase(start, to_find.length());
					tem_string.insert(start, to_replace);
					outfile << tem_string;
					tem_string.erase(0, start + to_replace.length()+1);
				}
				else{
					start = tem_string.find('\n');
					if (start != std::string::npos) {
						temp2 = tem_string.substr(0,start);
						tem_string.erase(0, start);
						outfile << temp2;
						tem_string = "";
					}
					else
					{
						outfile << tem_string;
						tem_string = "";
					}
				}
			}
		}
	}
	infile.close();
	outfile.close();
	return 0;
}