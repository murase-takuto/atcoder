#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    // 2つの数字取得
    cin >> a >> b;
    if (abs(a - b) >= 3)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
