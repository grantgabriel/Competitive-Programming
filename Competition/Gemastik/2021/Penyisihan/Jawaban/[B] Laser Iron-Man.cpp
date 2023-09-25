#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Segment {
    Point p1;
    Point p2;
};

int cross_product(Point a, Point b, Point c) {
    int x1 = a.x - b.x;
    int y1 = a.y - b.y;
    int x2 = c.x - b.x;
    int y2 = c.y - b.y;
    return x1*y2 - x2*y1;
}

bool intersect(Segment s1, Segment s2) {
    int c1 = cross_product(s1.p1, s1.p2, s2.p1);
    int c2 = cross_product(s1.p1, s1.p2, s2.p2);
    int c3 = cross_product(s2.p1, s2.p2, s1.p1);
    int c4 = cross_product(s2.p1, s2.p2, s1.p2);
    if ((c1 > 0 && c2 > 0) || (c1 < 0 && c2 < 0) || (c3 > 0 && c4 > 0) || (c3 < 0 && c4 < 0)) {
        return false; // no intersection
    }
    return true; // intersection
}
bool inside_polygon(Point p, vector<Point> polygon) {
    int count = 0;
    int n = polygon.size();
    for (int i = 0; i < n; i++) {
        Segment s = {polygon[i], polygon[(i+1)%n]};
        if (intersect(s, {p, {10000, p.y}})) {
            count++;
        }
    }
    return (count%2 == 1);
}

int main() {
    int x_iron, y_iron, N, K;
    cin >> x_iron >> y_iron >> N;
    vector<Point> robots(N);
    for (int i = 0; i < N; i++) {
        cin >> robots[i].x >> robots[i].y;
    }
    cin >> K;
    vector<Segment> segments(K);
    for (int i = 0; i < K; i++) {
        cin >> segments[i].p1.x >> segments[i].p1.y >> segments[i].p2.x >> segments[i].p2.y;
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        Point robot = robots[i];
        Segment laser = { {x_iron, y_iron}, robot };
        bool hit = true;
        for (int j = 0; j < K; j++) {
            if (intersect(laser, segments[j])) {
                hit = false;
                break;
            }
        }
        if (hit) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
