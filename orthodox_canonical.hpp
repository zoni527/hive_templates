
#pragma once

class Name {

public:

// ------------------------------------------------------------ member functions

// ---------------------------------------------------------------- constructors

	Name( void );
	Name( Name const &src );

// ------------------------------------------------------------------ destructor

	~Name( void );

// ---------------------------------------------------------- operator overloads

	Name &operator =( Name const &src );

private:

};
