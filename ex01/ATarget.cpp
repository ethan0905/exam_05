/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/07 11:09:28 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget( void ) {}
ATarget::ATarget( ATarget const & src ) { *this = src; }
ATarget::ATarget( const std::string &type) : _type(type){}

ATarget &ATarget::operator=( ATarget const & src) {

    *this = src;
    return (*this);
}
ATarget::~ATarget( void ) {}

void    ATarget::getHitBySpell( ASpell const &src )const {
    
    std::cout << this->_type << " has been" << src.getEffect() << "!" << std::endl;
    return ;
}

std::string const &ATarget::getType( void ) const { return (this->_type); }


