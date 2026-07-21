# include <iostream>

/*
// Showing the use of buffering of std::cin
int main()
{
	char x{};
	std::cout << "Enter the character stream 'abcd' :\n";
	std::cin >> x;
	std::cout << x <<'\n'; // 'a' will be printed here and 'bcd' will be left in 'input' stream
	std::cout << "Enter the character stream 'wxyz' :\n";
	std::cin >> x; // It wont even take the input and will directly take in 'b' from 'bcd'
	std::cout << x << '\n'; // 'b' will be printed out and 'cd' will be left in 'input' stream
	return 0;
}
*/

//Use of std::cin.get()
/*
int main()
{
	std::cout << "Input a keyboard character: "; // assume the user enters "a b" (without quotes)
	char ch{};
	std::cin.get(ch); // extracts a, leaves " b\n" in stream
	std::cout << "You entered: " << ch << '\n';
	std::cin.get(ch); // extracts space, leaves "b\n" in stream
	std::cout << "You entered: " << ch << '\n';
	return 0;
}
*/