/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:11:03 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/22 18:03:23 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

void	check_enter(std::string& enter, const std::string request)
{
	while (enter == "")
	{
		std::cout << request;
		std::getline(std::cin, enter);
		if (enter == "")
			std::cerr << "Enter do not be empty" << std::endl;
	}
}

void	add_new_contact(PhoneBook *phone_book)
{
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string	phone_number = "";
	std::string	darkest_secret = "";

	check_enter(first_name, "Enter first name:");
	check_enter(last_name, "Enter last name:");
	check_enter(nickname, "Enter nickname:");
	check_enter(phone_number, "Enter phone_number:");
	check_enter(darkest_secret, "Enter darkest secret:");
	phone_book->addContact(Contact(first_name, last_name, nickname, phone_number, 
		darkest_secret));
}

int	main()
{
	PhoneBook	phone_book;
	std::string	command;

	while (1)
	{
		std::cout << "Enter command (ADD or SEARCH or EXIT):" << std::endl;
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			add_new_contact(&phone_book);
		else if (!command.compare("EXIT"))
			return (0);
		else if (!command.compare("SEARCH"))
			phone_book.displayContacts();
	}
	return (0);
}

/* int main ()
{
	int j = 42;
	std::string str ("I like");
	std::cout << str << '\n';

	unsigned sz = str.size();
	unsigned int i = 0;
	while (i++ < 10 - sz)
		str.insert(0, "i");
	std::cout << str << '\n';

	str.resize (10);
	str[9] = '.';
	std::cout << str << '\n';

	std::cout << j << '\n';
	return 0;
} */