/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:12 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 17:16:31 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class   Warlock {
    
    public:
        Warlock( Warlock const & src );
        Warlock( const std::string &name, const std::string &title );
        ~Warlock( void );

        const std::string &getName( void )const ;
        const std::string &getTitle( void )const ;

        void    setTitle( const std::string &title );

        void    introduce( void )const;

    private:
        std::string _name;
        std::string _title;
        
        Warlock( void );
        Warlock &operator=( Warlock const & src);
};

#endif