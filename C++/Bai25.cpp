#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    return (a * b) / __gcd(a, b);
}

int main()
{
    int n, p, q, r;
    while(cin >> n >> p >> q >> r){
        int count = n / lcm(p, q) + n / lcm(q, r) + n / lcm(p, r) - 3 * (n / lcm(lcm(p, q), r));
        cout << count << endl;
    }
}