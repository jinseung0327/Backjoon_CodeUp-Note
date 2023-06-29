#include <iostream>

using namespace std;

int main()
{
	int n, a, b, result = 0, result2 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		cin >> b;
		result = a / b;
		result2 = a % b;
		cout << "You get " << result << " piece(s) and your dad gets " << result2 << " piece(s).\n";
	}
}