// Archivo interfaz
//#pragma once
#ifndef CIRCLE_H // evita la duplicación de este archivo
#define CIRCLE_H
#include <iostream>
#include <cassert>
using namespace std;


class Circle {
private:
    double radius;
public:
    Circle (double radius);
    Circle (); 
    Circle (const Circle& circle); 
    ~Circle (); 
    void setRadius (double radius); 
    double getRadius () const; 
    double getArea () const;
    double getPerimeter () const; 
};

#endif