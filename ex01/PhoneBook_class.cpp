/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:47:52 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/17 18:14:42 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructeur called" << std::endl;
	this->foo = 42;
	std::cout << "Variable foo = "<< this->foo << std::endl;
	this->bar();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructeur called" << std::endl;
	return ;
}

void	PhoneBook::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}