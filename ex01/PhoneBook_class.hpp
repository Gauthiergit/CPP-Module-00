/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:58:01 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/27 20:47:30 by gpeyre           ###   ########.fr       */
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

	void	checkInputLen(std::string& input);
	
	public:

	PhoneBook(void);
	~PhoneBook(void);

    void	addContact(const Contact &c);
	void 	displayContacts(void);
};

#endif