#include <bits/stdc++.h>
using namespace std;

int main()
{
    // bitwise and(&)
    // 0 & 0 = 0;
    // 0 & 1 = 0;
    // 1 & 0 = 0;
    // 1 & 1 = 1;
    cout << (3 & 5) << endl;

    //bitwise OR(|)
    // 0 | 0 = 0;
    // 0 | 1 = 1;
    // 1 | 0 = 1;
    // 1 | 1 = 1;
    cout << (3 | 5) << endl;

    //bitwise OR(^
    // 0 ^ 0 = 0;
    // 0 ^ 1 = 1;     same = 0
    // 1 ^ 0 = 1;     diff = 1
    // 1 ^ 1 = 0;
    cout << (3 | 5) << endl;
    return 0;
}