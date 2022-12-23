/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftekdrmi <ftekdrmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:25:51 by ftekdrmi          #+#    #+#             */
/*   Updated: 2022/11/30 17:26:09 by ftekdrmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize( Data* ptr )
{
    uintptr_t tmp = reinterpret_cast<uintptr_t>( ptr );

    return tmp;
}

Data* deserialize( uintptr_t raw )
{
	Data *tmp = reinterpret_cast<Data *>( raw );
	
	return tmp;
}