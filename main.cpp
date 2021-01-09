#pragma once

#include <iostream>

#define pass_ (void)0


void exitHandler0() 
{
	pass_;
}

int main()
{
	const auto exitHandle = std::atexit( exitHandler0 );
	if ( exitHandle != 0 )
	{
		std::cerr << "Registration failed\n";
		return exitHandle;
	}

	std::system( "pause" );
	return 0;
}