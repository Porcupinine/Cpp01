/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/12 21:39:34 by laura         #+#    #+#                 */
/*   Updated: 2023/11/12 21:39:34 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include <iostream>

void Harl::debug() {
	std::cout<<"I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info() {
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put "
		"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::error() {
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::warning() {
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been"
		"coming for years whereas you started working here since last month.\n";
}

void Harl::complain(const std::string& level) {
	bool complained = false;
	harl_pair complains[4];
	complains[0].str = "DEBUG";
	complains[0].f = &Harl::debug;
	complains[1].str = "INFO";
	complains[1].f = &Harl::info;
	complains[2].str = "WARNING";
	complains[2].f = &Harl::warning;
	complains[3].str = "ERROR";
	complains[3].f = &Harl::error;
	Harl harl;
	for(auto & complain : complains) {
		if(complain.str == level) {
			(harl.*(complain.f))();
			complained = true;
			break;
		}
	}
	if (!complained) {
		std::cout<<"Harl doesn't have a complain for this\n";
		std::cout<<"Try \"DEBUG\", \"INFO\",\"ERROR\", or \"WARNING\"\n";
	}
}