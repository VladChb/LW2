#pragma once
using namespace std;
#include <iostream>
#include <string>

class Point
{
	int x;
	int y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}


    int getX();
    int getY();
    void setX(int val);
    void setY(int val);
    void Print();
    double Calculate();
    void Move(int a, int b);
    void setSk(int k);
    

    void inc() { 
        ++x; ++y; 
    }
    void dec() { 
        --x; --y; 
    }

    bool equal() const { 
        return x == y; 
    }

    Point addSc(int scalar) const {
        return Point(x + scalar, y + scalar);
    }

    string toStr() const {
        return "x=" + to_string(x) + ", y=" + to_string(y);
    }
};