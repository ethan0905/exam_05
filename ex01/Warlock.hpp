/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 17:09:53 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class   Warlock {
    
    public:
        Warlock( const std::string &name, const std::string &title );
        Warlock( Warlock const & src );
        ~Warlock( void );

        const std::string &getName( void )const ;
        const std::string &getTitle( void )const ;

        void    setTitle( const std::string &title );

        void    introduce( void )const;

        void    learnSpell( ASpell const *src );

    private:
        Warlock( void );
        Warlock &operator=( Warlock const & src);
        std::string _name;
        std::string _title;
};

#endif