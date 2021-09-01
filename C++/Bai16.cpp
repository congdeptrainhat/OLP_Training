#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);    
    while(n > 6){
        int sum3 = a[n - 1] + a[n - 2] + a[n - 3];
        if(sum3 < sum - sum3){
            return cout << count, 0;
        }else{
            sum -= a[n-1];
            n --;
            count ++;
        }
    }

    cout << -1;
}
