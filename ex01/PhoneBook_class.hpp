/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:58:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/20 20:41:11 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include <iostream>
#include <string>

class PhoneBook
{
	private:

	int const	MAX_CONTACT = 8;
	Contact 	directory[MAX_CONTACT];
	int			old_i;
	int			i;

	public:

	PhoneBook(void);
	~PhoneBook(void);

    void addContact(const Contact& c);
	void displayContacts(void) const;
};

class Contact
{
	private:

	std::string	first_name;
	std::string	last_name;
	std::sring	nickname;
	std::sring	phone_number;
	std::sring	darkest_secret;

	public:

	Contact(const std::string& f_n, const std::string& l_n, const std::string& n_n,
		const std::string& ph_n, const std::string& d_s);
	~Contact(void);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	void setFirstName(const std::string& f_n);
	void setLastName(const std::string& l_n);
	void setNickname(const std::string& n_n);
	void setPhoneNumber(const std::string& ph_n);
	void setDarkestSecret(const std::string& d_s);
};

#endif