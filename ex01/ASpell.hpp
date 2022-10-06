/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASpell_HPP
# define ASpell_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class   ASpell {
    
    public:
        ASpell( const std::string &name, const std::string &effect );
        ASpell( ASpell const & src );
        virtual ~ASpell( void );
        ASpell( void );
        
        ASpell &operator=( ASpell const & src);

        const std::string &getName( void )const ;
        const std::string &getEffect( void )const ;

        void    setEffect( const std::string &effect );

        void    launch( ATarget const &src)const;

        virtual ASpell  *clone( void )const = 0;

    private:
        std::string _name;
        std::string _effect;
};

#endif