#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    double avg_min = INT_MAX, avg_max = INT_MIN;
    for(int i = 0; i < n; i++){ 
        for(int j = i + 2; j <= n; j++){
            double sum = 0;
            for(int k = i; k < j; k++){
                sum += a[k];  
            }            
            avg_max = max(sum / (j - i), avg_max);
            avg_min = min(sum / (j - i), avg_min);
        }
    }
    printf("%.3f %.3f", avg_min, avg_max);
}