#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void rotation();
    virtual void move();
};

class Rectangle : public Shape{
public:
    virtual void rotation();
    virtual void move();
};

class Triangle : public Shape{
public:
    virtual void rotation();
    virtual void move();
};

class Circle : public Shape{
public:

    virtual void rotation();
    virtual void move();
};


#endif
