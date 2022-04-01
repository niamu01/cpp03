/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:50:41 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 21:06:49 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	_hit = 100;
	_energy = 100;
	_damage = 30;
		std::cout << YELLOW;
	std::cout << "FragTrap default constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs) {
	std::cout << YELLOW;
	std::cout << "ClapTrap copy constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << YELLOW;
	std::cout << "FragTrap string constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap::~FragTrap() {
	std::cout << PURPLE;
	std::cout << "ClapTrap destructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

FragTrap &	FragTrap::operator=(FragTrap const& rhs) {
	ClapTrap::operator=(rhs);
	std::cout << YELLOW;
	std::cout << "FragTrap operator = (" << _name << ") called" << std::endl;
	std::cout << RESET;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if(_hit)
		std::cout << "FragTrap " << _name << " asks for a positive high-five" << std::endl;
	else
		std::cout << "FragTrap " << _name << " can't ask for a positive high-five because " << _name << " is dead" << std::endl;

}