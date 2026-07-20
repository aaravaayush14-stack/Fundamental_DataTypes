# include <iostream>

// Usage of std::boolalpha
/*
int main()
{
	std::cout << true << '\n'; // 1
	std::cout << false << '\n'; // 0
	std::cout << std::boolalpha; // Using cout modifier
	std::cout << true << '\n'; // 'true'
	std::cout << false << '\n'; // 'false'

}
*/

// A program to check whether 2 nos are equal or not
/*
bool isEqual(int x, int y)
{
	return x == y;
}
int main()
{
	int x{}; int y{};
	std::cout << "Enter the first number: \n";
	std::cin >> x;
	std::cout << "Enter the second number: \n";
	std::cin >> y;
	std::cout << std::boolalpha;
	std::cout << "Are these two nos equal? " << isEqual(x, y) << '\n';
	return 0;
}
*/