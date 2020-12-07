/*Corwin Lipkin
	
	Program to determine the longest substring without repeating characters.
*/
#include <iostream>
#include<string>

using std::string;

int longestSub(string s) {
	int count = 0;
	string split;

	if (s.empty()) {
		return count;
	}
	else {
		for (char x : s) {
			if (split.find(x) != string::npos) {
				// add char to string
				split += x;
				// substring from duplicate character
				split = split.substr(split.find(x) + 1);
				// adjust count if new substring is longer
				if (count < split.size()) {
					count = split.size();
				}
			}
			else {
				// add none duplicate char to string
				split += x;
				// adjust count if new substring is longer
				if (count < split.size()) {
					count = split.size();
				}
			}
		}
	}

	return count;

}

int main()
{
	string s;
	std::cout << "Enter string to find longest substring: " << "\n";
	std::cin >> s;

	std::cout <<"The longest substring is " << longestSub(s) << " characters long.\n";
}

