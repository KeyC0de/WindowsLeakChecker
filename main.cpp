#pragma once

#include <iostream>

#define pass (void)0

void exitHandler0() 
{
	pass;
}

int main()
{
	const auto exitHandle = std::atexit( exitHandler0 );
	if ( exitHandle != 0 )
	{
		std::wcerr << L"Registration failed\n";
		return exitHandle;
	}

	std::system( "pause" );
	return 0;
}