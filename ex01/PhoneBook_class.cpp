/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:47:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/23 18:27:05 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook(void) : cur_i(0), MAX_CONTACT(8)
{
	int	j = 0;

	while(j < MAX_CONTACT)
	{
		directory[j]= Contact();
		j++;
	}
}

void PhoneBook::addContact(const Contact &c) 
{
	if (cur_i < MAX_CONTACT)
	{
		PhoneBook::directory[cur_i] = c;
		cur_i++;
	}
	else
	{
		cur_i = 0;
		PhoneBook::directory[cur_i] = c;
		cur_i++;
	}
}

void	PhoneBook::check_input_len(std::string& input)
{
	unsigned int len = input.size();
	unsigned int j = 0;
	if (len < 10 && len != 0)
	{
		while (j++ < 10 - len)
			input.insert(0, " ");
	}
	else if (len > 10)
	{
		input.resize (10);
		input[9] = '.';
	}
}

void PhoneBook::displayContacts(void)
{
	int 		j = 0;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string input;
	int			index = -1;

	std::cout << "     index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "__________|__________|__________|__________" << std::endl;
	while (j < MAX_CONTACT)
	{
		first_name = directory[j].getFirstName();
		last_name = directory[j].getLastName();
		nickname = directory[j].getNickname();
		check_input_len(first_name);
		check_input_len(last_name);
		check_input_len(nickname);
		if (!first_name.empty())
			std::cout << "         " << j << "|" << first_name << "|" << last_name << "|" << nickname << std::endl;
		j++;
	}
	if (!directory[0].getFirstName().empty())
	{
		while (index == -1)
		{
			std::cout << BLUE << "Which index you want to display ? : " << WHITE;
			std::getline(std::cin, input);
			std::istringstream iss(input);
			if (is_digit_in(input) == false || !(iss >> index))
			{
				std::cerr << RED << "Invalid input" << WHITE << std::endl;
				index = -1;
			}
			else if (index > 7 || directory[index].getFirstName().empty())
			{
				std::cerr << RED << "Index doesn't exist" << WHITE << std::endl;
				index = -1;
			}
			else
			{
				std::cout << "First Name: " << directory[index].getFirstName() << std::endl;
				std::cout << "Last Name: " << directory[index].getLastName() << std::endl;
				std::cout << "Nickname: " << directory[index].getNickname() << std::endl;
				std::cout << "Phone number: " << directory[index].getPhoneNumber() << std::endl;
				std::cout << "Darkest secret: " << directory[index].getDarkestSecret() << std::endl;
			}
		}
	}
}

PhoneBook::~PhoneBook(void)
{
/* 	std::cout << "Destructeur phone_book called" << std::endl;
	return ; */
}
