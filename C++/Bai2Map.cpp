#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }  
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        if(a[i] != a[i+1]){
            count ++;
        }
    }
    cout << count << endl;
    map<int, int > b;
    for(int i = 0; i < n; i++){
        b[a[i]] ++;
    }
    for(auto i : b){
        cout << i.first << " " << i.second << endl;
    }
}