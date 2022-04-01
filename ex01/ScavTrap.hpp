/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:26:05 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 20:28:01 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap();
	ScavTrap(ScavTrap const& rhs);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap&	operator=(ScavTrap const& rhs);
	
	void		attack(std::string const& target);
	void		guardGuate();
private:
	bool		_guard_mode;
};

#endif