#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;

    void input()
    {
        cin >> x >> y;
    }

    float distance(Point p)
    {
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
};

struct Circle
{
    Point center;
    int R;

    void input()
    {
        // Cái này gọi là "Nạp chồng phương thức".
        // Phương thức là một hàm, nhưng hàm này là "thuộc tính" của 1 class hoặc 1 struct
        // Khi có 2 phương thức trùng tên nhau sẽ sinh ra hiện tượng "Nạp chồng phương thức"
        // center.input() -> phương thức input này là của struct Point vì biến center có kiểu là Point
        // Phương thức input trong struct Circle sẽ gọi đến phương thức input trong lớp Point để nhập giá trị cho biến center
        center.input();
        cin >> R;
    }

    bool isIntersect(Circle c)
    {
        float R_distance = center.distance(c.center);
        return (R_distance < (R + c.R)) ? true : false;
    };
};

int main()
{
    int n, x, y, R, count = 0;
    cin >> n;
    Circle C[n];
    for (int i = 0; i < n; i++)
    {
        C[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (C[i].isIntersect(C[j]))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
