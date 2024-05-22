/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:38 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/22 18:32:19 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv) 
{
	std::string sentence;
	size_t		i;

	i = 0;
	if (argc != 2)
	{
		std::cerr << "Use: " << argv[0] << " <text_to_convert>" << std::endl;
		return (1);
	}
	else
		sentence = argv[1];
	while (i < sentence.length())
	{
		sentence[i] = std::toupper(sentence[i]);
		i++;
	}
	std::cout << sentence << std::endl;
    return (0);
}
