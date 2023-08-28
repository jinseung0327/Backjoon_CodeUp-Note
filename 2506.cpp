#include "iostream"

using namespace std;

int main(void)
{
    int n, a, sum = 0, k = 1;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(a == 0) k = 1;
        else
        {
            sum = sum + k;
            k++;
        }
    }
    
    cout << sum << endl;
}
