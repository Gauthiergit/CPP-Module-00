/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:08:18 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/27 19:59:02 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define BLUE "\033[94m"
#define WHITE "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

bool is_digit_in(std::string& str);

#endif