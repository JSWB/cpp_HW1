#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <QGraphicsScene>

using namespace std;

class Shape
{
public:
    virtual void rotation();
    virtual void move();
private slots:
    void on_pushButton_cliked();
private:
    QGraphicsItem *getSelectedItem();
    QTimer *timer;
    int rotation_angle;
    QGraphicsScene * scene;
};

class Rectangle : public Shape{
public:
    virtual void rotation();
    virtual void move();
private slots:
    void on_pushButton_cliked();
private:
    QGraphicsRectItem * Rect;
};

class Triangle : public Shape{
public:
    virtual void rotation();
    virtual void move();
private slots:
    void on_pushButton_cliked();
private:
    QGraphicsRectItem * Tri;
};

class Circle : public Shape{
public:

    virtual void rotation();
    virtual void move();
private slots:
    void on_pushButton_cliked();
private:
    QGraphicsRectItem * Cir;
};


#endif
