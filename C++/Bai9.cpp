#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n], b[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
        b[i] = 0;
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < i;j++){
            if(a[i] < a[j]){
                b[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
}