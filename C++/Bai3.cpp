#include<bits/stdc++.h>
using namespace std;

// 1. Tính R đi qua tất cả các bộ 3 điểm, lấy R bé nhất
// 2. Tuy nhiên, với trường hợp tam giác tù thì phải lấy 1/2 cạnh lớn nhất làm R

// B1. Tạo struct Point

struct Point{
    int x, y;

    void input(){
        cin >> x >> y;
    }

    float distance(Point p){
        // trả về khoảng các giữa 2 điểm
        return sqrt((pow(p.x - x, 2)) + pow(p.y - y, 2));
    }
};

bool isOptuse(float a, float b, float c){
    // nếu tù trả về 1, nếu không tù trả về 0
    return (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) ? 1 : 0;
}

float S(float a, float b, float c){
    // dùng công thức heron để tính diện tích tam giác
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

float R(Point p1, Point p2, Point p3){
    //Tính độ dài 3 cạnh của tam giác
    float a = p1.distance(p2);
    float b = p2.distance(p3);
    float c = p3.distance(p1);

    // Nếu tù thì trả về 1/2 độ dài cạnh lớn nhất  
    // Nếu ko tù thì trả về R theo công thức R = abc/4S
    return isOptuse(a,b,c) ? (max(max(a, b), c) / 2) : ((a * b * c) / (4 * S(a, b, c)));
}

int main(){
    int n;
    cin >> n;
    Point p[n];
    for(int i = 0; i < n; i++){
        p[i].input();
    }
    float R_max = INT_MIN;
    // Duyệt tất cả các bộ 3 điểm để tính R và lấy ra R lớn nhất 
    for(int i = 0 ; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                R_max = max(R_max, R(p[i], p[j], p[k]));
            }
        }
    }

    printf("%.3f", R_max);
}