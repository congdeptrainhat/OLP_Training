#include<stdio.h>
double max(double a, double b) {
    return a > b ? a : b;
}

double min(double a, double b) {
    return a < b ? a : b;
}

int main(){
    int n, tbc;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    double avg_min = 99999, avg_max = -99999;
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