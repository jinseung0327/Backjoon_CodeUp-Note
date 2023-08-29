#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n;
    
    m = n * 2;
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k < i; k++)
        {
            cout << " ";
        }

        for(int j = 1; j <= m - 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
        m = m -2;
    }
}
