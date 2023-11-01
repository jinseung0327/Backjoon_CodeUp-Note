#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int h = 0, n = 0, r = 0;
    cin >> a >> b >> c;

    if(a > b && a > c) h = a;
    else if(b > a && b > c) h = b;
    else if(c > a && c > b) h = c;

    if(a < b && a < c) n = a;
    else if(b < a && b < c) n = b;
    else if(c < a && c < b) n = c;

    if(a != h && a != n) r = a;
    else if(b != h && b != n) r = b;
    else if(c != h && c != n) r = c;

    cout << n << " " << r << " " << h << endl;
}
