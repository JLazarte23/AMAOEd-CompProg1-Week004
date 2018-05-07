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
    void Side(int side);
    void Color(string color);

    int GetSide();
    string GetColor();
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
void Polygon::Side(int side) {
    this->mSide = side;
}
void Polygon::Color(string color) {
    this->mColor = color;
}
int Polygon::GetSide(){
    return mSide;
}
string Polygon::GetColor(){
    return mColor;
}