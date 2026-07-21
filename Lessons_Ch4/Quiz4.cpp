# include <iostream>

// Question 1: (Solution by learncpp.com makes use of functions)
/*
int main()
{
	double first_num{}; double second_num{};
	std::cout << "Enter the two numbers (separated by space): \n";
	std::cin >> first_num >> second_num;
	char c{};
	std::cout << "Enter the operation of your choice <check comments for operations available>: \n";
	// A-> Add ; S-> Subtract ; M-> Multiply ; D-> Divide (Type in capital letters)
	// All operations are of the form: "firstnumber <operator> secondnumber"
	std::cin >> c;
	if (c=='A')
		std::cout << (first_num + second_num) << '\n';
	else if(c=='S')
		std::cout << (first_num - second_num) << '\n';
	else if(c=='M')
		std::cout << (first_num * second_num) << '\n';
	else if(c=='D')
		std::cout << (first_num / second_num) << '\n';
	else
		std::cout << "Invalid input!" << '\n';
	return 0;
}
*/

//------------------------------------------------------------------------------------------------------------------

// Question 2: (Better than solution code)
/*
void height_above_ground(double original_height,double time)
{
	double distance_left = original_height - (0.5 * 9.8 * time * time);
	if (distance_left < 0) // (Assume that the ground is sticky)
		std::cout << "The ball is on the ground! Thus, 0 metres.\n";
	else
		std::cout << "The ball is at a height: " << distance_left << " m above the ground.\n";
}
double get_original_height()
{
	double orgheight{};
	std::cout << "Enter the original height of the tower (in m): \n";
	std::cin >> orgheight;
	return orgheight;
}
double get_time()
{
	double t{};
	std::cout << "Enter the time after which you want to observe height above ground (in sec): \n";
	std::cin >> t;
	return t;
}
int main()
{	
	double original_height{ get_original_height() };
	double time{ get_time() };
	height_above_ground(original_height, time);
	return 0;
}
*/

//------------------------------------------------------------------------------------------------------------------

// Use this code inside main() function for printing values upto 5 seconds:
/*
	for (int i = 1;i <= 5;i++)
	{
		height_above_ground(original_height, i);
	}
*/
//------------------------------------------------------------------------------------------------------------------
