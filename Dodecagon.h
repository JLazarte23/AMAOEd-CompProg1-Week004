#ifndef DODECAGON_H
#define DODECAGON_H
#include <iostream>
#include <string>
using namespace std;

class Dodecagon : public Polygon{

    int mLength, mWidth, mHeight;
    public:

    Dodecagon();
    Dodecagon(int mSide, string mColor, int mLength, int mWidth, int mHeight);
    void setSide(int side);
    void setColor(string color);
    void setLength(int length);
    void setWidth(int width);
    void setHeight(int height);

    int getSide();
    string getColor();
    int getLength();
    int getWidth();
    int getHeight();
    int getVolume();
};
#endif
Dodecagon::Dodecagon(){
    mLength = 0;
    mWidth = 0;
    mHeight = 0;
    mSide = 0;
    mColor = "";
}
Dodecagon::Dodecagon(int mSide, string mColor, int mLength, int mWidth, int mHeight){
    this->mLength = mLength;
    this->mWidth = mWidth;
    this->mHeight = mHeight;
}

void Dodecagon::setLength(int length){
    this->mLength = length;
}
void Dodecagon::setWidth(int width){
    this->mWidth = width; 
}
void Dodecagon::setHeight(int height){
    this->mHeight = height;
}
void Dodecagon::setSide(int side) {
    this->mSide = side;
}
void Dodecagon::setColor(string color) {
    this->mColor = color;
}

int Dodecagon::getLength(){
    return mLength;
}
int Dodecagon::getWidth(){
    return mWidth;
}
int Dodecagon::getHeight(){
    return mHeight;
}
int Dodecagon::getVolume(){
    return mHeight*mWidth*mLength;
}
int Dodecagon::getSide(){
    return mSide;
}
string Dodecagon::getColor(){
    return mColor;
}