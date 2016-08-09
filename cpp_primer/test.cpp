#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	string s = "abc";
	const char *c = s.c_str();
	int a[5] = { 1,2,3,4,5 };
	int *beg = begin(a);
	int *pend = end(a);
	int size = pend - beg;
	cout << size << endl
		<< *(pend - 1) << endl
		<< *(pend - 1);
	system("pause");
	return 0;
}