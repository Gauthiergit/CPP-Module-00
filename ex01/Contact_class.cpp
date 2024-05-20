/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:48:43 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/20 16:48:43 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

Contact::Contact(const std::string& f_n, const std::string& l_n, const std::string& n_n,
		const std::string& ph_n, const std::string& d_s) :
		first_name(f_n),
		last_name(l_n),
		nickname(n_n),
		phone_number(ph_n),
		darkest_secret(d_s) 
{}

std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNickname() const
{
	return (nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}

void Contact::setFirstName(const std::string& f_n)
{
    first_name = f_n;
}

void Contact::setLastName(const std::string& l_n)
{
    last_name = l_n;
}

void Contact::setNickname(const std::string& n_n)
{
    nickname = n_n;
}

void Contact::setPhoneNumber(const std::string& ph_n)
{
    phone_number = ph_n;
}

void Contact::setDarkestSecret(const std::string& d_s)
{
    darkest_secret = d_s;
}
