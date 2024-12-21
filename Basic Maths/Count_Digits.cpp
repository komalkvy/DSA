#include <bits/stdc++.h>
using namespace std;
int evenlyDivides(int n)
{
    int cnt = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        if (digit != 0)
        {
            if (n % digit == 0)
            {
                cnt++;
            }
        }
        temp = temp / 10;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int res = evenlyDivides(n);
    cout << res;

    return 0;
}
