/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:58:14 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 21:10:24 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	a("a");
	std::cout << std::endl;
	ScavTrap	b("b");
	std::cout << std::endl;
	ClapTrap	c("c");
	std::cout << std::endl;
	FragTrap	d(a);
	std::cout << std::endl;
	FragTrap	e("e");
	std::cout << std::endl;
	e=a;
	std::cout << std::endl;

	a.attack("b");
	a.takeDamage(6);
	a.beRepaired(4);
	a.takeDamage(3);
	a.highFivesGuys();
	a.beRepaired(8);
	a.takeDamage(17);
	std::cout << std::endl;

	b.attack("c");
	b.takeDamage(6);
	b.beRepaired(4);
	b.takeDamage(3);
	b.guardGate();
	b.beRepaired(8);
	b.takeDamage(17);
	std::cout << std::endl;

	c.attack("a");
	c.takeDamage(6);
	c.beRepaired(4);
	c.takeDamage(3);
	c.beRepaired(8);
	c.takeDamage(17);
	std::cout << std::endl;
}