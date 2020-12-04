/*  Corwin Lipkin

	Palindrome: a word, phrase or sequence that reads the same backward as forward.
	This program determines whether or not an integer is a palindrome.
*/

#include <iostream>

bool isPalindrome(int& x) {
	int number = x;
	int reverseNumber = 0;

	while (number > 0)
	{
		reverseNumber *= 10;
		reverseNumber += (number % 10);
		number /= 10;
	}

	if (reverseNumber == x) {
		return true;
	}

	return false;
}


int main()
{
	std::cout << "Enter an integer to see if it is a palindrome: ";
	int num;
	std::cin >> num;

	if (isPalindrome(num)) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}
}
