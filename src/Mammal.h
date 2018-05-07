#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
#include <string>
using namespace std;

class Mammal {
    int mLeg;
    string mFurColor;
    bool mTail;

    public:

    Mammal();
    Mammal(int mLeg, string mFurColor, bool mTail);
    void Leg(int leg);
    void Fur(string fur);
    void Tail(bool tail);

    int GetLeg();
    string GetFur();
    bool GetTail();
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
void Mammal::Leg(int leg) {
    this->mLeg = leg;
}
void Mammal::Fur(string fur) {
    this->mFurColor = fur;
}
void Mammal::Tail(bool tail) {
    this->mTail = tail;
}

int Mammal::GetLeg(){
    return mLeg;
}
string Mammal::GetFur(){
    return mFurColor;
}
bool Mammal::GetTail(){
    return mTail;
}