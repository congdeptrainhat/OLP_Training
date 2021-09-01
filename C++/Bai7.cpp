#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int sum){
    int temp = 0;
    for (int i = 0; i < n; i++){
        temp += a[i];
        if(sum == temp){
            temp = 0;
        }
    }
    return temp == 0 ? true : false; 
}

int main(){
    int n, sum = 0 ;
    cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = n; i >= 1; i--){
        if(sum % i == 0 && check(a, n, sum/i)){
           cout << i;
           return 0;
        }
    }
}