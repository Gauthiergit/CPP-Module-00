/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:09:35 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/24 11:10:26 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.h"

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