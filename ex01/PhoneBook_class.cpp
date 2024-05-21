/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:47:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/21 15:33:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook(void) : i(0), MAX_CONTACT(8) {}

void PhoneBook::addContact(const Contact &c) 
{
	if (i < MAX_CONTACT)
	{
		PhoneBook::directory[i] = c;
		i++;
	}
	else
	{
		i = 0;
		PhoneBook::directory[i] = c;
		i++;
	}
}

void PhoneBook::displayContacts(void) const
{
	int 		j = 0;
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";

	std::cout << "     index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "__________|__________|__________|__________" << std::endl;
	while (i < MAX_CONTACT)
	{
		
	}
}
// modifier cette  fonction pour afficher les elements comme demandé

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructeur called" << std::endl;
	return ;
}
