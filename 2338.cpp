#include <iostream>

using namespace std;

int main()
{
    int n, m, result = 0;
    cin >> n >> m;

    result = n * 100;
    if (result >= m)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
