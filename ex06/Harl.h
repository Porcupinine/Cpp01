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

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		Harl() = default;
		~Harl() = default;
		void complain(const std::string& level);
};

typedef struct my_pair {
	std::string str;
	void (Harl::*f)();
}harl_pair;

#endif //CPP01_HARL_H
