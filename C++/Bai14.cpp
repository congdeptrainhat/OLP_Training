#include<bits/stdc++.h>
using namespace std;

int Distance(int a , int b, int c, int d){
    int x = abs(a - c);
    int y = abs(b - d);
    return min(x, y)*15 + 10*abs(x - y);
}

int main() {
    int n, k, x, y, mid, power = 0;
    cin >> n >> k;
    mid = n / 2 + 1;
    for(int i = 0; i < k ; i++){
        cin >> x >> y;
        power += Distance(x, y, mid, mid);
    }
    cout << power ;
}