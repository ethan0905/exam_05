/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( void ) {}
ASpell::ASpell( ASpell const & src ) {*this = src;}
ASpell::ASpell( const std::string &name, const std::string &effect ) : _name(name), _effect(effect) {}
ASpell::~ASpell( void ) {}

const std::string &ASpell::getName( void )const {return (this->_name);}
const std::string &ASpell::getEffect( void )const {return (this->_effect);}

void    ASpell::setEffect( const std::string &effect ) {this->_effect = effect;}

void    ASpell::launch( ATarget const & src)const {src.getHitBySpell((*this));}

ASpell &ASpell::operator=( ASpell const & src) {

    *this = src;
    return (*this);
}

