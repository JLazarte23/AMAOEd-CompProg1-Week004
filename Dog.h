#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Mammal.h"

using namespace std;

class Dog : public Mammal {
    private:
    string mBreed;
    string mSize;
    char mRegister;

    public:

    Dog();
    Dog(string mBreed, string mSize, char mRegister, int mLeg, string mFurColor, bool mTail);
    void setBreed(string breed);
    void setSize(string size);
    void setRegister(char reg);
    void setLeg(int leg);
    void setFur(string fur);
    void setTail(bool tail);

    string getBreed();
    string getSize();
    char getRegister();
    int getLeg();
    string getFur();
    bool getTail();

};
#endif
Dog::Dog(){
    mBreed = "";
    mSize = "";
    mRegister = ' ';
    mLeg = 0;
    mFurColor = "";
    mTail = 0;
}
Dog::Dog(string mBreed, string mSize, char mRegister, int mLeg, string mFurColor, bool mTail){
    this->mBreed = mBreed;
    this->mSize = mSize;
    this->mRegister = mRegister;
}

void Dog::setBreed(string breed) {
    this->mBreed = breed;
}
void Dog::setSize(string size) {
    this->mSize = size;
}
void Dog::setRegister(char reg) {
    this->mRegister = reg;
}

void Dog::setLeg(int leg) {
    this->mLeg = leg;
}
void Dog::setFur(string fur) {
    this->mFurColor = fur;
}
void Dog::setTail(bool tail) {
    this->mTail = tail;
}

string Dog::getBreed(){
    return mBreed;
}
string Dog::getSize(){
    return mSize;
}
char Dog::getRegister(){
    return mRegister;
}
int Dog::getLeg(){
    return mLeg;
}
string Dog::getFur(){
    return mFurColor;
}
bool Dog::getTail(){
    return mTail;
}