/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh( void ) {

    return ;
}

ASpell  *Fwoosh::clone( void )const {

    return (new Fwoosh());
}
