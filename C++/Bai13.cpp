#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x = 0, y = 0, direction = 1;  string s;
    // Tạo 1 biến direction, mỗi khi thực hiện GLRB thì cập nhật direction
    cin >> n >> s;
    for(char c : s){
        switch(direction){
            case 1:
                switch (c){
                    case 'G':
                        y += 1;
                        direction = 1;
                        break;

                    case 'L':
                        x -= 1;
                        direction = 2;
                        break;
                    
                    case 'R':
                        x += 1;
                        direction = 3;
                        break;
                    
                    case 'B':
                        y -= 1;
                        direction = 4;
                        break;
                }
                break;
            case 2:
                switch (c){
                    case 'G':
                        x -= 1;
                        direction = 2;
                        break;

                    case 'L':
                        y -= 1;
                        direction = 4;
                        break;
                    
                    case 'R':
                        y += 1;
                        direction = 1;
                        break;
                    
                    case 'B':
                        x += 1;
                        direction = 3;
                        break;
                }
                break;
            case 3:
                switch (c){
                    case 'G':
                        x += 1;
                        direction = 3;
                        break;

                    case 'L':
                        y += 1;
                        direction = 1;
                        break;
                    
                    case 'R':
                        y -= 1;
                        direction = 4;
                        break;
                    
                    case 'B':
                        x -= 1;
                        direction = 2;
                        break;
                }
                break;
            case 4:
                switch (c){
                    case 'G':
                        y -= 1;
                        direction = 4;
                        break;

                    case 'L':
                        x += 1;
                        direction = 3;
                        break;
                    
                    case 'R':
                        x -= 1;
                        direction = 2;
                        break;
                    
                    case 'B':
                        y += 1;
                        direction = 1;
                        break;
                }
                break;
        }
    }
    cout << x << " " << y << endl;
}