/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/07 10:52:29 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class   Warlock {
    
    public:
        Warlock( const std::string &name, const std::string &title );
        ~Warlock( void );

        const std::string &getName( void )const ;
        const std::string &getTitle( void )const ;

        void    setTitle( const std::string &title );

        void    introduce( void )const;

        void    learnSpell( ASpell *src );
        void    forgetSpell( std::string name );
        void    launchSpell( std::string name, ATarget const &src );

    private:
        std::string _name;
        std::string _title;
        
        Warlock( void );
        Warlock( Warlock const & src );
        Warlock &operator=( Warlock const & src);

        std::map<std::string, ASpell *> arr;
};

#endif