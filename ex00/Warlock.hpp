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

    private:
        Warlock( void );
        Warlock &operator=( Warlock const & src);
        std::string _name;
        std::string _title;
};

#endif