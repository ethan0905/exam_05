/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 16:34:05 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATarget_HPP
# define ATarget_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class   ATarget {
    
    public:
        ATarget( void );
        ATarget( const std::string &type);
        ATarget( ATarget const & src );
        virtual ~ATarget( void );
        ATarget &operator=( ATarget const & src);

        const std::string &getType( void )const ;

        void    getHitBySpell( ASpell const &src )const;

        virtual ATarget *clone( void )const = 0;

    private:
        std::string _type;
};

#endif