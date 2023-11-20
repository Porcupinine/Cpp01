/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/11 19:31:59 by laura         #+#    #+#                 */
/*   Updated: 2023/11/11 19:31:59 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.h"

int main () {
	Harl harl;
	std::cout<<"---DEBUG---\n";
	harl.complain("DEBUG");
//	harl.complain("debug");
	std::cout<<"\n---DEBUG + INFO---\n";
	harl.complain("INFO");
//	harl.complain("info");
	std::cout<<"\n---DEBUG + INFO + WARNING---\n";
	harl.complain("WARNING");
//	harl.complain("error");
	std::cout<<"\n---DEBUG + INFO + WARNING + ERROR---\n";
	harl.complain("ERROR");
//	harl.complain("warning");
	std::cout<<"\n--SILENCE--\n";
	harl.complain("silence");


	return 0;
}