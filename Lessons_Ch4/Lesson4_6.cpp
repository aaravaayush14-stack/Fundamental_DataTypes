// Showing usage of fixed width integers 
# include <iostream>
# include <cstdint>
# include <cstddef>

/*
int main()
{
	std::int32_t x{ 32767 }; // This is well included in the 32 bit range
	x += 1;
	std::cout << x <<"\n";
	return 0;
	// If I run the same code using int16_t; the value '32768' wouldn't be printed  (Undefined Behaviour)
}
*/


// Using std::size_t
/*
int main()
{
	std::size_t s{ sizeof(int) };
	std::cout << s << "\n";
	return 0;
}
*/