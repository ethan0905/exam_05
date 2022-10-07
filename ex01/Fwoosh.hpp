/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fwoosh_HPP
# define Fwoosh_HPP

#include <iostream>
#include "ASpell.hpp"

class   Fwoosh : public ASpell {
    
    public:
        Fwoosh( void );
        ~Fwoosh( void );
        
        virtual ASpell  *clone( void )const;        
};

#endif