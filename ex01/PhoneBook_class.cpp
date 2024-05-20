/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:47:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/20 21:05:45 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook() : i(0)
{}

void PhoneBook::addContact(const Contact& c) 
{
	if (i < MAX_CONTACT)
	{
		diectory[i] = c;
		i++;
	}
	else
	{
		i = 0;
		directory[i] = c;
		i++;
	}
}

void PhoneBook::displayContacts(void) const
{
	int 		j = 0;
	std::string	output = "";

	std::cout << "     index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "__________|__________|__________|__________" << std::endl;
	while (j < i)
	{
		if (directory[i])
		directory[i].
	} 
}
// modifier cette  fonction pour afficher les elements comme demandé

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructeur called" << std::endl;
	return ;
}
