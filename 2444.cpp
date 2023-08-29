#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n;
    
    m = n * 2;
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < (i * 2) + 1; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; b < a; b++)
        {
            cout << " ";
        }

        for(int c = 1; c <= m - 1; c++)
        {
            cout << "*";
        }
        cout << '\n';
        m = m -2;
    }
}
