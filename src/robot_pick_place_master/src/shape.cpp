#include "shape.h"

Shape::Shape(int xPos, int yPos, int orien, int mOfIntertia, int a, std::string t, std::string c){
    Shape::setArea(a);
    Shape::setXPosition(xPos);
    Shape::setYPosition(yPos);
    Shape::setOrientation(oirien);;
    Shape::setMomentOfInertia(mOfIntertia);
    Shape::setType(t);
    Shape::setColor(c);
}

Shape::Shape(){
    Shape::setArea(0);
    Shape::setXPosition(-1);
    Shape::setYPosition(-1);
    Shape::setOrientation(0);;
    Shape::setMomentOfInertia(0);
    Shape::setType("");
    Shape::setColor("");
}

Shape::~Shape(){
    //std::cout << "Destructor of Shape called!" << std::endl;
}

int Shape::getArea(){
    return Shape::area
}

int Shape::