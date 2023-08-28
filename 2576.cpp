#include <iostream>

using namespace std;

int main(void)
{
    int a, sum = 0, minOdd = 10001; // 최대값으로 초기화
    
    for(int i = 0; i < 7; i++)
    {
        cin >> a;
        
        if(a % 2 != 0)
        {
            sum += a; // 홀수의 합 계산
            if(a < minOdd)
                minOdd = a; // 현재 홀수가 minOdd보다 작으면 minOdd를 업데이트
        }
    }
    
    if(sum != 0 && minOdd != 10001) // minOdd가 업데이트되지 않았으면 초기값인 10001일 것임
    {
        cout << sum << '\n' << minOdd << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
    return 0;
}
