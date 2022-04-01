/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:40:05 by yeju              #+#    #+#             */
/*   Updated: 2022/04/01 20:55:01 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(FragTrap const & rhs);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap&	operator=( FragTrap const& frag);
	
	void	highFivesGuys(void);
};

#endif