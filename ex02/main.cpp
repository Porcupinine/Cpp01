/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 16:07:57 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 16:07:57 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main () {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPtr = &str;
	std::string& stringREF = str;

	std::cout<<"string address:    " << &str <<"\n";
	std::cout<<"stringPtr address: " << stringPtr <<"\n";
	std::cout<<"stringREF address: " << &stringREF <<"\n";

	std::cout<<"string:    " << str <<"\n";
	std::cout<<"stringPtr: " << *stringPtr <<"\n";
	std::cout<<"stringREF: " << stringREF <<"\n";
}