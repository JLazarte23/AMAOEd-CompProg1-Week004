#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
#include <string>
using namespace std;

class Polygon {

    int mSide;
    string mColor;
    public:

    Polygon();
    Polygon(int mSide, string mColor);
    void setSide(int side);
    void setColor(string color);

    int getSide();
    string getColor();
};
#endif
Polygon::Polygon(){
    mSide = 0;
    mColor = "";
}
Polygon::Polygon(int mSide, string mColor){
    this->mSide = mSide;
    this->mColor = mColor;
}
void Polygon::setSide(int side) {
    this->mSide = side;
}
void Polygon::setColor(string color) {
    this->mColor = color;
}
int Polygon::getSide(){
    return mSide;
}
string Polygon::getColor(){
    return mColor;
}