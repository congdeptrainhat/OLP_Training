#include <bits/stdc++.h>
using namespace std;
// Xây dựng hàm lcm return lcm của 3 số abc
int lcm(int a , int b){
    return (a*b)/ __gcd(a,b);
}


 
// tích hai số a và b chia cho ucln thì bằng bcnn
// lcm(a,b,c) = lcm(a,lcm(b,c))
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << lcm(a, lcm(b,c));
//     // Greatest common divisor
//     cout << __gcd(__gcd(3,4),5);
}


