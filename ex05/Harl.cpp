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

void Harl::complain(std::string level) {
	
}