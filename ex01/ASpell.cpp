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

ASpell::ASpell( void ) {

    std::cout << this->getName() << ": This looks like another boring day." << std::endl;

    return ;
}

ASpell::ASpell( ASpell const & src ) {

    std::cout << "Copy constructor called." << std::endl;

    *this = src;
    return ;
}

ASpell::ASpell( const std::string &name, const std::string &effect ) : _name(name), _effect(effect) {

    std::cout << this->getName() << ": This looks like another boring day." << std::endl;

    return ;
}

ASpell::~ASpell( void ) {

    std::cout << this->getName() << ": My job here is done!" << std::endl;

    return ;
}

const std::string &ASpell::getName( void )const {


    return (this->_name);
}

const std::string &ASpell::getEffect( void )const {


    return (this->_effect);
}

void    ASpell::setEffect( const std::string &effect ) {

    this->_effect = effect;

    return ;
}

void    ASpell::launch( ATarget const & src) {

    src.getHitBySpell((*this));

    return ;
}


ASpell &ASpell::operator=( ASpell const & src) {

    *this = src;

    return (*this);
}

