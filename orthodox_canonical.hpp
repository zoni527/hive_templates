
#pragma once

#ifndef NAME_HPP
# define NAME_HPP

class Name {

public:

// ------------------------------------------------------------ member functions

// ---------------------------------------------------------------- constructors

	Name( void );
	Name( Name const &src );

// ------------------------------------------------------------------ destructor
	~Name( void );
// --------------------------------------------------- member operator overloads

	Name &operator = ( Name const &src );

private:

};

#endif
