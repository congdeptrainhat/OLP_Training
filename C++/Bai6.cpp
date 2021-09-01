#include<bits/stdc++.h>
using namespace std;

// Xóa phần tử ở vị trí thứ s tính từ vị trí start, khi nào còn 1 phần tử thì trả về phần tử đó
int Josephus(vector<int> v, int s, int start){
    while(v.size() > 1){
        int del = (start + s - 1) % v.size();
        v.erase(v.begin() + del);
        // đặt lại vị trí start
        start = del % v.size();
    }
    return v[0];
}

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> JosephusA, JosephusB;
    for(int i = 1; i <= n; i++){
        JosephusA.push_back(i);
        JosephusB.insert(JosephusB.begin(), i);
    }
    cout << Josephus(JosephusA, s, 0) << endl;
    cout << Josephus(JosephusB, s, n - k);
}