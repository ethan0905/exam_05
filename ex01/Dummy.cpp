/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ) : ATarget("Target Practice Dummy") {}

Dummy::~Dummy( void ) {

    return ;
}

ATarget  *Dummy::clone( void )const {

    return (new Dummy());
}
