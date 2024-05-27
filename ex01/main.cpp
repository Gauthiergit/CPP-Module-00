/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:11:03 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/27 20:37:08 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"


bool is_digit_in(std::string& str) {
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isdigit(*it)) {
            return false;
        }
    }
    return true;
}

void	check_enter(std::string& input, const std::string request, int flag)
{
	while (input.empty())
	{
		std::cout << BLUE << request << WHITE;
		std::getline(std::cin, input);
		if (input.empty())
			std::cerr << RED << "Input do not be empty" << WHITE << std::endl;
		if (flag == 1)
		{
			if (is_digit_in(input) == false)
			{
				std::cerr << RED << "Invalid input, need only number" << WHITE << std::endl;
				input = "";
			}
		}
	}
}

void	add_new_contact(PhoneBook &phone_book)
{
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string	phone_number = "";
	std::string	darkest_secret = "";

	check_enter(first_name, "Enter first name: ", 0);
	check_enter(last_name, "Enter last name: ", 0);
	check_enter(nickname, "Enter nickname: ", 0);
	check_enter(phone_number, "Enter phone_number: ", 1);
	check_enter(darkest_secret, "Enter darkest secret: ", 0);
	phone_book.addContact(Contact(first_name, last_name, nickname, phone_number, 
		darkest_secret));
	std::cerr << GREEN << "Contact added successfully" << WHITE << std::endl;
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cerr << "Use : ./phonebook" << std::endl;
		return (1);
	}

	PhoneBook	phone_book;
	std::string	command;

	while (1)
	{
		std::cout << BLUE << "Enter command (ADD or SEARCH or EXIT):" << WHITE << std::endl;
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			add_new_contact(phone_book);
		else if (!command.compare("EXIT"))
			return (0);
		else if (!command.compare("SEARCH"))
			phone_book.displayContacts();
	}
	return (0);
}
