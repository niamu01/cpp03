/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:26:01 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 21:09:28 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _guard_mode(false) {
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << YELLOW;
	std::cout << "ScavTrap default constuctor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs), _guard_mode(rhs._guard_mode) {
	std::cout << YELLOW;
	std::cout << "ScavTrap copy constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guard_mode(false) {
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << YELLOW;
	std::cout << "ScavTrap string counstructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ScavTrap::~ScavTrap() {
	std::cout << PURPLE;
	std::cout << "ScavTrap destructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const& rhs) {
	ClapTrap::operator=(rhs);
	_guard_mode = rhs._guard_mode;
	std::cout << YELLOW;
	std::cout << "ScapTrap operator = (" << _name << ") called" << std::endl;
	std::cout << RESET;
	return (*this);
}

void	ScavTrap::attack(std::string const& target) {
	std::cout << GREEN;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	std::cout << _name << "'s energy points is now " << --_energy << std::endl;
	std::cout << RESET;
}

void	ScavTrap::guardGate() {
	if (_hit) {
		std::cout << "ScavTrap " << _name << " switch to guard mode" << std::endl;
		_guard_mode = true;
	}
	else
		std::cout << "ScavTrap " << _name << " could not switch to guard mode bacause he is dead" << std::endl;
}