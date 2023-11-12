/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/12 21:32:47 by laura         #+#    #+#                 */
/*   Updated: 2023/11/12 21:32:47 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_HARL_H
#define CPP01_HARL_H


#include <string>

typedef enum t_leve{
	DEBUG,
	INFO,
	WARNING,
	ERROR
}e_level;

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};


#endif //CPP01_HARL_H
