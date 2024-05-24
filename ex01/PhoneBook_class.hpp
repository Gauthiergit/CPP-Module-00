/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:58:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/24 11:24:19 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include "Contact_class.hpp"

class PhoneBook
{
	private:

	int			cur_i;
	int	const	MAX_CONTACT;
	Contact		directory[8];

	public:

	PhoneBook(void);
	~PhoneBook(void);

    void	addContact(const Contact &c);
	void	checkInputLen(std::string& input);
	void 	displayContacts(void);
};

#endif