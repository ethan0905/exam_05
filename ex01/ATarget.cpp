/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 16:32:52 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget( void ) {

    std::cout << this->getType() << ": This looks like another boring day." << std::endl;

    return ;
}

ATarget::ATarget( ATarget const & src ) {

    std::cout << "Copy constructor called." << std::endl;

    *this = src;
    return ;
}

ATarget::ATarget( const std::string &type) : _type(type){

    std::cout << this->getType() << ": This looks like another boring day." << std::endl;

    return ;
}

ATarget::~ATarget( void ) {

    std::cout << this->getType() << ": My job here is done!" << std::endl;

    return ;
}

void    ATarget::getHitBySpell( ASpell const &src ) {
    
    std::cout << this->_type << " has been" << src.getEffect() << "!" << std::endl;
    return ;
}


const std::string &ATarget::getType( void )const {


    return (this->_type);
}

ATarget &ATarget::operator=( ATarget const & src) {

    *this = src;

    return (*this);
}

