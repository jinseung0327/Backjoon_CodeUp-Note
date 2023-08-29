#include "iostream"

using namespace std;

int main(void)
{
    int n, m, sum = 0, result = 0;
    cin >> n;
    
    for(int i = 1; i <= 9; i++)
    {
        cin >> m;
        sum += m;
    }
    
    result = n - sum;
    
    cout << result << endl;
    
}
