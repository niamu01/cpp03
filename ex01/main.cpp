/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:25:58 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 20:35:32 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");
	ScavTrap	c;
	ScavTrap	d(c);
	c=d;

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getDamage());
	
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getDamage());

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamage());

	std::cout << std::endl;
	a.beRepaired(10);
	
	std::cout << std::endl;
	b.guardGuate();
	
	std::cout << std::endl;
	return (0);
}