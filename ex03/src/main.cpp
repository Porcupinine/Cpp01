/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 16:22:23 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 16:22:23 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.h"
#include "../includes/HumanB.h"
#include "../includes/Weapon.h"


int main() {

	{
		Weapon club("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}