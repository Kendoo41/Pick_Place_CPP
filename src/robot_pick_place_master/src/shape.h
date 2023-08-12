#ifndef SHAPE_H
#define SHAPE_H

#include <opencv2/opencv2.hpp>
#include <string>
#include <math.h>
#include <iostream>
#include <sstream>

class Shape {
    public:
    	Shape(int xPos, int yPos, int orien, int mOfInertia, int a, std::string t, std::string c);
        Shape();
        virtual ~Shape(); // look for an example of a virtual destructor
        int getArea();
        void setArea(int a);
        int getXPosition();
        void setXPosition(int xPos);

    private:
        int area;
        int xPosition;
        int yPosition;
        int orientation;
        int setMomentOfInertia;
        std::string type;
        std::string color;
}