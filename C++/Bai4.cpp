#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
    double d = 0;
    void input(){
        cin >> x >> y;
    }

    double distance(Point p){
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
};

// double distance(Point p1, Point p2){
//     return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2));
// }

int main() {
    int n;
    cin >> n;
    Point p[n];
    for(int i = 0; i < n; i++){
        p[i].input();
    }
    double min_ = INT_MAX;
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            p[i].d += p[i].distance(p[j]);
        }
        if(min_ > p[i].d){
            min_ = p[i].d;
            index = i + 1;
        }
    }
    
    printf("%d %.3f", index, min_);
}