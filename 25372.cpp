#include <iostream>

using namespace std;

int main()
{
    int n = 0, b = 0;
    string a;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        b = a.length();
        if(b >= 6 && b <= 9)
        {
            cout << "yes" << endl;
        }
        else cout << "no" << endl;
    }
    return 0;
}
