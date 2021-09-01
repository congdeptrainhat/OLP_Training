#include <bits/stdc++.h>
using namespace std;

// Khai báo 1 mảng 2 chiều thỏa mãn test case lớn nhất của đề bài 
int rect[201][201];

int main(){
    // Input trái dưới phải trên
    int n, x, y, x_, y_;
    cin >> n;
    // Cần đánh dấu toán bộ các ô trong hình chữ nhật này thành số 1
    for(int i = 0; i < n; i++) {
        cin >> x >> y >> x_ >> y_;
    // tịnh tiến các điểm nhập vào theo véc tơ 100
        x += 100, y += 100, x_ += 100, y_ += 100;
        for(int j = x; j < x_; j++){
            for(int k = y; k < y_; k++){
                rect[j][k] = 1;
            }
        }
    }
    // sau khi đánh dấu hết thì duyệt mảng này xem có bao nhiều số 1 thì đấy chính là kết quả
    int area = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            area += rect[i][j];
        }
    }

    cout << area;
}