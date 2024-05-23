/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:58:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/23 17:50:42 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>

#define BLUE "\033[94m"
#define WHITE "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

class Contact
{
	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:

	Contact(void);
	Contact(std::string& f_n, std::string& l_n, std::string& n_n,
		std::string& ph_n, std::string& d_s);
	~Contact(void);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	
	int		getIndex() const;
};

class PhoneBook
{
	private:

	int			cur_i;
	int			MAX_CONTACT;
	Contact		directory[8];

	public:

	PhoneBook(void);
	~PhoneBook(void);

    void	addContact(const Contact &c);
	void	check_input_len(std::string& input);
	void 	displayContacts(void);
};

bool is_digit_in(std::string& str);

#endif