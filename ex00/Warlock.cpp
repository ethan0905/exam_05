#include "Warlock.hpp"

Warlock::Warlock( void ) {

    std::cout << this->getName() << ": This looks like another boring day." << std::endl;

    return ;
}

Warlock::Warlock( Warlock const & src ) {

    std::cout << "Copy constructor called." << std::endl;

    *this = src;
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

const std::string &Warlock::getName( void )const {


    return (this->_name);
}

const std::string &Warlock::getTitle( void )const {


    return (this->_title);
}

void    Warlock::setTitle( const std::string &title ) {

    this->_title = title;

    return ;
}

void    Warlock::introduce( void )const {

    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
    
    return ;
}

Warlock &Warlock::operator=( Warlock const & src) {

    *this = src;

    return (*this);
}

