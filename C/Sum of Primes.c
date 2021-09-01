#include<stdio.h>
#include<math.h>
int isPrime(int n) {
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int check(int n){
    
}

//kiểm tra các số nguyên tố 
int main(){
    int a, b[], n,count = 1;
    scanf("%d%d", &a, &n);
    for(int i = 0; i < n; i++){
        // n số nguyên tố ;
        // nếu a < 10 , a == b[i], thì in ra 1;
    if(isPrime(b[i])){
        if(a == )
    }
    }

}