# include <iostream>
// Demonstarting unsigned integer overflow <Turn off Treat warnings like errors>

/*
int main()
{
	unsigned short x{ 65535 }; // Largest unsigned Value for a 16 bit short
	std::cout << "Value of x at 65535: " << x << "\n";
	x = 65536; // Will print 0
	std::cout << "Value of x at 65536: " << x << "\n";
	x = 65540; // Will print 4
	std::cout << "Value of x at 65540: " << x << "\n";
	return 0;
	// The 2 statements would not compile due to compiler that treats "Warnings like errors"
}
*/