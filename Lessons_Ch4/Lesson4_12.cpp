# include <iostream>

// Demonstrating Explicit type conversion
/*
int main()
{
	char x{ 97 };
	std::cout << "The value of x before explicit type conversion: " << x << '\n';
	std::cout << "The value of x after explicit type conversion: " << static_cast<int>(x) << '\n';
	return 0;
}
*/
#include <cstdint>
// Demonstrating fallacies during input
/*
int main()
{
    std::cout << "Enter a number between 0 and 127: "; // Enter 35
    std::int8_t myInt{};
    std::cin >> myInt;
    std::cout << "You entered: " << static_cast<int>(myInt) << '\n';
    // Expected '35' returned '51'
    return 0;
}
*/