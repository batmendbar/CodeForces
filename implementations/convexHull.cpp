/* 
Barely edited code from Competitive Programming 4
Originally authored by Steven Halim, Felix Halim, and Suhendry Effend (book authors)
Modified by Batmend Batsaikhan on May 29, 2022
 */

#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;
double DEG_to_RAD(double d) {return d*M_PI/180.0;}
double RAD_to_DEG(double d) {return d*180.0/M_PI;}

//point

struct point {
    double x, y;
    point() {x = y = 0.0;}
    point(double _x, double _y) : x(_x), y(_y) {}

    bool operator < (const point &other) const {
        if (fabs(x-other.x) > EPS) 
            return x < other.x;
        return y < other.y;
    }

    bool operator == (const point &other) const {
        return (fabs(x-other.x) < EPS) && (fabs(y-other.y) < EPS);
    }
};

double dist(const point &p1, const point &p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y); //library function
}

//lines

struct vec {
    double x, y;
    vec(double _x, double _y) : x(_x), y(_y) {}
};

vec toVec(const point &a, const point &b) {
    return vec(b.x-a.x, b.y-a.y);
}

double cross(vec a, vec b) {return a.x * b.y - a.y * b.x;}

bool ccw(point p, point q, point r) {
    return cross(toVec(p, q), toVec(p, r)) > EPS;
}

vector<point> CH_Andrew(vector<point> & P) {
    int n = P.size();
    int k = 0;
    vector<point> H(2*n);
    sort(P.begin(), P.end());
    for (int i = 0; i < n; i++) {
        while ((k >= 2) && !ccw(H[k-2], H[k-1], P[i])) k--;
        H[k++] = P[i];
    }
    for (int i = n-2, t = k+1; i >= 0; i--) {
        while((k >= t) && !ccw(H[k-2], H[k-1], P[i])) k--;
        H[k++] = P[i];
    }
    H.resize(k);
    return H;
}

int main() {
}

