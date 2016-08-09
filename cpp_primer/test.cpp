#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	vector<int> x(begin(a), end(a));
	
	system("pause");
	return 0;
}