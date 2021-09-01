#include<bits/stdc++.h>
using namespace std;

bool check(int n, int a, int b, int c){
    for(int i = 1; i <= n;i ++){
        if(i % a == 0){
            if(i % b ==0){
                if(i % c ==0){
                    return 0;
                }else return 1 ;
            }else if(i % c ==0){
                return 1 ;
            }
        }else if(i % b != 0 || i % c != 0){
            return 0 ;
        }else if(i % b == 0 && i % c == 0){
            return 1 ;
        }
    }
}

int main() {
    int n, a, b, c,count= 0;
    if(check(n, a, b, c)){
        count++;
    }
    cout << count;
}