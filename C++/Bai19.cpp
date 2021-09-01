#include<bits/stdc++.h>
using namespace std;

// Tạo struct Patient với 2 thuộc tính là arrival_time, duration, 1 phương thức input()
// Hoặc dùng map<int, int> patient
struct Patient {
    int arrival_time, duration;
    void input(){
        cin >> arrival_time >> duration;
    }
};
// Lên google đọc STL:sort để tìm cách sort 1 mảng Struct hoặc 1 map

bool comparePatient(Patient P1, Patient P2) {
    return P1.arrival_time < P2.arrival_time;
}

int main(){
    int n, time_stamp = 0;
    cin >> n;
    Patient p[n];
    for(int i = 0; i < n;i ++){
        p[i].input();
    }
    sort(p, p + n, comparePatient);
    for(int i = 0; i < n; i ++){
        time_stamp = max(p[i].arrival_time, time_stamp);
        time_stamp += p[i].duration;
    }
    cout << time_stamp;
}
