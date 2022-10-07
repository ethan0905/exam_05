/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:19 by esafar            #+#    #+#             */
/*   Updated: 2022/10/07 11:00:22 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( void ) {

    std::cout << this->getName() << ": This looks like another boring day." << std::endl;

    std::map<std::string, ASpell *>::iterator it_begin = this->arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr.end();

    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    this->arr.clear();

    return ;
}

Warlock::Warlock( const std::string &name, const std::string &title ) : _name(name), _title(title) {

    std::cout << this->getName() << ": This looks like another boring day." << std::endl;

    return ;
}

Warlock::~Warlock( void ) {

    std::cout << this->getName() << ": My job here is done!" << std::endl;

    return ;
}

const std::string &Warlock::getName( void )const { return (this->_name); }
const std::string &Warlock::getTitle( void )const { return (this->_title); }

void    Warlock::setTitle( const std::string &title ) { this->_title = title; }

void    Warlock::introduce( void )const { std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl; }

void    Warlock::learnSpell(ASpell *src) {
    
    if (src)
        arr.insert(std::pair<std::string, ASpell *>(src->getName(), src->clone()));
        
}

void    Warlock::forgetSpell(std::string name) {
    
    std::map<std::string, ASpell *>::iterator it = arr.find(name);
    if (it != arr.end())
        delete it->second;
    arr.erase(name);
}

void    Warlock::launchSpell(std::string name, ATarget const &src) {
    
    ASpell  *spell = arr[name];
    if (spell)
        spell->launch(src);
}