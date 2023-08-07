#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

const double EPS = 1e-9;

struct Point
{
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    bool operator<(const Point &p) const
    {
        return x < p.x || (x == p.x && y < p.y);
    }
};

typedef Point Vector;

Vector operator+(const Vector &A, const Vector &B)
{
    return Vector(A.x + B.x, A.y + B.y);
}

Vector operator-(const Point &A, const Point &B)
{
    return Vector(A.x - B.x, A.y - B.y);
}

Vector operator*(const Vector &A, double p)
{
    return Vector(A.x * p, A.y * p);
}

double Dot(const Vector &A, const Vector &B)
{
    return A.x * B.x + A.y * B.y;
}

double Cross(const Vector &A, const Vector &B)
{
    return A.x * B.y - A.y * B.x;
}

double Length(const Vector &A)
{
    return sqrt(Dot(A, A));
}

double Angle(const Vector &A, const Vector &B)
{
    return acos(Dot(A, B) / Length(A) / Length(B));
}

double Area2(const Point &A, const Point &B, const Point &C)
{
    return Cross(B - A, C - A);
}

Vector Rotate(const Vector &A, double rad)
{
    return Vector(A.x * cos(rad) - A.y * sin(rad), A.x * sin(rad) + A.y * cos(rad));
}

Point GetLineIntersection(const Point &P, const Vector &v, const Point &Q, const Vector &w)
{
    Vector u = P - Q;
    double t = Cross(w, u) / Cross(v, w);
    return P + v * t;
}

double DistanceToLine(const Point &P, const Point &A, const Point &B)
{
    Vector v1 = B - A, v2 = P - A;
    return fabs(Cross(v1, v2)) / Length(v1);
}

double DistanceToSegment(const Point &P, const Point &A, const Point &B)
{
    if (A == B)
        return Length(P - A);
    Vector v1 = B - A, v2 = P - A, v3 = P - B;
    if (Dot(v1, v2) < EPS)
        return Length(v2);
    else if (Dot(v1, v3) > EPS)
        return Length(v3);
    else
        return fabs(Cross(v1, v2)) / Length(v1);
}

Point GetLineProjection(const Point &P, const Point &A, const Point &B)
{
    Vector v = B - A;
    return A + v * (Dot(v, P - A) / Dot(v, v));
}

bool SegmentProperIntersection(const Point &a1, const Point &a2, const Point &b1, const Point &b2)
{
    double c1 = Cross(a2 - a1, b1 - a1), c2 = Cross(a2 - a1, b2 - a1),
           c3 = Cross(b2 - b1, a1 - b1), c4 = Cross(b2 - b1, a2 - b1);
    return (c1 * c2 < 0 && c3 * c4 < 0);
}
