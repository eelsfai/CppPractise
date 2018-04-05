//
//  geometry.hpp
//  HelloWorld
//
//  Created by Faisal El-Shabani on 2017-08-26.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#ifndef geometry_hpp
#define geometry_hpp

#include <stdio.h>
class Point
{
private:
    int x;
    int y;
    
public:
    Point():x(0),y(0) {}

    //    geometry(): x(0), y(0){}
    //Point();
    Point(int a, int b);
    int getX(void) ;
    int getY(void) ;
    void setX(int a);
    void setY(int b);
};


class PointArray
{
private:
    Point *pntArray;
    int size;
    void resize(int n);
public:
    PointArray();
    PointArray(const Point points[],const int sizeToCopy);
    PointArray(const PointArray &points);
    ~PointArray();
    void push_back(const Point &p);
    void insert(const int position, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear(void);
    const Point *get(const int position) const;
    
};





#endif /* geometry_hpp */
