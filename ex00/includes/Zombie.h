/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 10:51:45 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 10:51:45 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H

#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void	anounce();
		void	get_name(std::string name);

};

Zombie* newZombie( std::string name);
void randomChump(std::string name);

#endif //CPP01_ZOMBIE_H
