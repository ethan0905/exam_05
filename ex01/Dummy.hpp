/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:22 by esafar            #+#    #+#             */
/*   Updated: 2022/10/06 15:27:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dummy_HPP
# define Dummy_HPP

#include <iostream>
#include "ATarget.hpp"

class   Dummy : ATarget {
    
    public:
        Dummy( void );
        ~Dummy( void );
        
        virtual ATarget  *clone( void )const;        
};

#endif