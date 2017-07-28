#include <iostream>
#include <unordered_set>

struct Point
{
    double x, y;
};

int main() {
    Point pts[3] = { {1, 0}, {2, 0}, {3, 0} };//struct dizisi
    std::unordered_set<Point *> points = { pts, pts + 1, pts + 2 };
    //auto kullanarak iterator tanımı
    for(auto iter = points.begin(); iter != points.end(); ++iter){
        (*iter)->y = ((*iter)->x) * ((*iter)->x);
        std::cout << "(" << (*iter)->x << ", " << (*iter)->y << ") ";
    }
    std::cout << '\n';

    for(Point * i : points)//
    {
        i->y += 10;
        std::cout << "(" << i->x << ", " << i->y << ") ";
    }
}