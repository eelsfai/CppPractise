//
//  geometry.cpp
//  HelloWorld
//
//  Created by Faisal El-Shabani on 2017-08-26.
//  Copyright © 2017 Faisal El-Shabani. All rights reserved.
//

#include "geometry.hpp"
#include <iostream>
#include <algorithm> 

using namespace std;


int Point::getX() {return x;}
int Point::getY() {return y;}


void Point::setX(int a) {x=a;}
void Point::setY(int b) {x=b;}

PointArray::PointArray()
{
    size = 0;
    pntArray = new Point[0];
    
}
PointArray::PointArray(const Point points[], const int sizeToCopy)
{
    size = sizeToCopy;
    pntArray = new Point[sizeToCopy];
    for (int i=0;i<sizeToCopy;i++)
    {
        *(pntArray+i) = points[i];
        
    }
    
}

PointArray::PointArray(const PointArray & pv)
{
    size = sizeof(pv);
    pntArray = new Point[size];
    for (int i=0;i<size;i++)
    {
        *(pntArray+i) = pv.pntArray[i];
        
    }
   
    
}


PointArray::~PointArray()
{
    delete[] pntArray;
}


void PointArray::resize(int n)
{
    min(1,2);
    size = min(size, n);
    Point *pntArrayNew = new Point[n];
    for (int i=0;i<size;i++)
    {
        *(pntArrayNew+i) = pntArray[i];
    }
    PointArray::~PointArray();
    pntArray = pntArrayNew;
}

void PointArray::push_back(const Point &p)
{
    PointArray::resize(size+1);
    *(pntArray+size-1) = p;
}

void PointArray::insert(const int position, const Point &p)
{
    
    PointArray::resize(size+1);
    for (int i=(size-1);i>(position-1);i--)
    {
        *(pntArray+i+1) = *(pntArray+i);
    }
    *(pntArray+position) = p;
}

void PointArray::remove(const int pos)
{
    for (int i=pos;i<size-1;i++)
    {
        *(pntArray+i) = *(pntArray+i+1);
    }
    PointArray::resize(size-1);
}

const int PointArray::getSize() const
{
    return size;
}


void PointArray::clear()
{
    resize(0);
}

const Point *PointArray::get(const int position) const
{
    if (position>size)
        return NULL;
    else
        return (pntArray+position);
}


