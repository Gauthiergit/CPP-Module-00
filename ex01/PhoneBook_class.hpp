/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:58:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/22 18:43:18 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include <iostream>
#include <string>


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

	void setFirstName(const std::string& f_n);
	void setLastName(const std::string& l_n);
	void setNickname(const std::string& n_n);
	void setPhoneNumber(const std::string& ph_n);
	void setDarkestSecret(const std::string& d_s);
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

#endif