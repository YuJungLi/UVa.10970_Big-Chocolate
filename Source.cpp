#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int m, n;
	while (cin >> m >> n)
		cout << m*n - 1 << endl;
	return 0;
}