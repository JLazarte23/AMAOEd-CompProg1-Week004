#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
#include <string>
using namespace std;

class Mammal {
    
    public:
    int mLeg;
    string mFurColor;
    bool mTail;
    
    Mammal();
    Mammal(int mLeg, string mFurColor, bool mTail);
    void setLeg(int leg);
    void setFur(string fur);
    void setTail(bool tail);

    int getLeg();
    string getFur();
    bool getTail();
};
#endif
Mammal::Mammal(){
    mLeg = 0;
    mFurColor = "";
    mTail = 0;
}
Mammal::Mammal(int mLeg, string mFurColor, bool mTail){
    this->mLeg = mLeg;
    this->mFurColor = mFurColor;
    this->mTail = mTail;
}
void Mammal::setLeg(int leg) {
    this->mLeg = leg;
}
void Mammal::setFur(string fur) {
    this->mFurColor = fur;
}
void Mammal::setTail(bool tail) {
    this->mTail = tail;
}

int Mammal::getLeg(){
    return mLeg;
}
string Mammal::getFur(){
    return mFurColor;
}
bool Mammal::getTail(){
    return mTail;
}