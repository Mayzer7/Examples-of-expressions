/* Примеры выражений */
#include <iostream>
using namespace std;
int main()
{
	float a = 4, x = 1, y = 0, z = 3, t = 5, k = 7;
	cout << (a + 0.12) / 6 << endl;
	cout << (x && y || !z) << endl;
	cout << (t * sin(x) - 1.05e4) / ((2 * k + 2) * (2 * k + 3)) << endl;
	return 0;
}