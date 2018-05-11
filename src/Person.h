#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

    public:

    Person();
    Person(string mName, string mAddress, string mGender, int mAge, string mOccupation);
    void setName(string name);
    void setAddress(string address);
    void setGender(string gender);
    void setAge(int age);
    void setOccupation(string occupation);

    string getName();
    string getAddress();
    string getGender();
    int getAge();
    string getOccupation();
};
#endif
Person::Person(){
    mName = "";
    mAddress = "";
    mGender = "";
    mAge = 0;
    mOccupation = "";
}
Person::Person(string mName, string mAddress, string mGender, int mAge, string mOccupation){
    this->mName = mName;
    this->mAddress = mAddress;
    this->mGender = mGender;
    this->mAge = mAge;
    this->mOccupation = mOccupation;
}
void Person::setName(string name) {
    this->mName = name;
}
void Person::setAddress(string address) {
    this->mAddress = address;
}
void Person::setGender(string gender) {
    this->mGender = gender;
}
void Person::setAge(int age) {
    this->mAge = age;
}
void Person::setOccupation(string occupation) {
    this->mOccupation = occupation;
}
string Person::getName(){
    return mName;
}
string Person::getAddress(){
    return mAddress;
}
string Person::getGender(){
    return mGender;
}
int Person::getAge(){
    return mAge;
}
string Person::getOccupation(){
    return mOccupation;
}