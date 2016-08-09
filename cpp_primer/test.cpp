#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	int a[3][4];
	int count = 0;
	for (auto &row : a)
		for (auto &col : row)
			col = count++;
	system("pause");
	return 0;
}