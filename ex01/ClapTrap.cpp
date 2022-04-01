/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:15:46 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 19:15:46 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("name1"), _hit(10), _energy(10), _damage(0) {
	std::cout << YELLOW;
	std::cout << "ClapTrap default constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _damage(0) {
	std::cout << YELLOW;
	std::cout << "ClapTrap string constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ClapTrap::ClapTrap(const ClapTrap & rhs) : _name(rhs._name), _hit(rhs._hit), _energy(rhs._energy), _damage(rhs._damage) {
	std::cout << YELLOW;
	std::cout << "ClapTrap copy constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ClapTrap::~ClapTrap() {
	std::cout << PURPLE;
	std::cout << "ClapTrap destructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_damage = rhs._damage;
	std::cout << YELLOW;
	std::cout << "ClapTrap operator = (" << _name << ") called" << std::endl;
	std::cout << RESET;
	return (*this);
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << GREEN;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	std::cout << _name << "'s energy points is now " << --_energy << std::endl;
	std::cout << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << GREEN;
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage" << std::endl;
	if (amount >= _hit) {
		_hit = 0;
		std::cout << "ClapTrap " << _name << " died" << std::endl;
	}
	else {
		_hit -= amount;
		std::cout << "ClapTrap " << _name << "'s hit points is now " << _hit << std::endl;
	}
	std::cout << RESET;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << GREEN;
	if (!_energy) {
		std::cout << "ClapTrap " << _name << " has no energy. " << _name << " can’t do anything if it has no hit points or energy points left." << std::endl;
	}
	else {
		_hit += amount;
		std::cout << "ClapTrap " << _name << " charged hits points using energy. now " << _name << " has " << _hit << " hit points" << std::endl;
		std::cout << _name << "'s energy points is now " << --_energy << std::endl;
	}
	std::cout << RESET;
}

unsigned int	ClapTrap::getDamage(void) const {
	return (_damage);
}