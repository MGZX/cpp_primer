#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	vector<int> a{1,2,3,4,5,6,7,8,9,10};
	int target = 0;
	auto begin = a.begin(), end = a.end();
	auto mid = begin + (end - begin) / 2;
	while (begin != end)
	{
		if (*mid > target)
		{
			end = mid;
		}
		else if (*mid < target)
		{
			begin = mid;
		}
		else
			break;
		mid = begin + (end - begin) / 2;
	}
	if (begin == end)
		cout << "not found";
	cout << *mid;
	system("pause");
	return 0;
}