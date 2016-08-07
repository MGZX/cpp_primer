#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "Hello, world!!!";
	string result;
	for (char c : s)
		if (!ispunct(c))
			result += c;
	cout << result;
	system("pause");
	return 0;
}
