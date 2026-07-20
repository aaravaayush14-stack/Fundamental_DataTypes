#include <iostream>
# include <iomanip>
// Outputs of floating point types
/*
int main()
{
	std::cout << 8.0 << '\n'; // This prints just 8; .0 is dropped
	std::cout << 7.8f << '\n'; // This has floating point precision; prints 7.8
	std::cout << 9956543.21 << '\n'; // Printed in scientific notation 

	return 0;
}
*/

// Showing Precision of std::cout allowing only 6 digit precision
/*
int main()
{
    std::cout << 9.87654321f << '\n'; // 9.87654
    std::cout << 9.87654721f << '\n'; // 9.87655 (rounded up to fit 6 digit precision)
    std::cout << 987.654321f << '\n'; // 987.654
    std::cout << 987654.321f << '\n'; // Exactly 6 points precision; Thus, '987654'
    std::cout << 9876543.21f << '\n'; // Too large >= 7 floating points; Thus, '9.87654e6'
    std::cout << 0.0000987654321f << '\n'; // Too small (<-4); Thus '9.8765se-5'

    return 0;
}
*/

// Use of std::setprecision() and rounding errors
/*
int main()
{
    std::cout << std::setprecision(10);
    std::cout << 3.333333333333333333333333333333f << '\n';
    // The above command returned 3.333333254 which is less than 3.333333333. Therefore there is a rounding error
    std::cout << 3.333333333333333333333333333333 << '\n';
    return 0;
}
*/