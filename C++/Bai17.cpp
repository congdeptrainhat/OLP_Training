#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Y[n];
    for(int i = 0; i < n; i++){
        cin >> Y[i] >> Y[i];
    }

    sort(Y, Y + n);
    int highway = Y[n / 2];
    int sum = 0;
    for(int i : Y){
        sum += abs(i - highway);
    }
    cout << sum;
}