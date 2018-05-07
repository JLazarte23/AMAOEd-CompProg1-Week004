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
    void Name(string name);
    void Address(string address);
    void Gender(string gender);
    void Age(int age);
    void Occupation(string occupation);

    string GetName();
    string GetAddress();
    string GetGender();
    int GetAge();
    string GetOccupation();
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
void Person::Name(string name) {
    this->mName = name;
}
void Person::Address(string address) {
    this->mAddress = address;
}
void Person::Gender(string gender) {
    this->mGender = gender;
}
void Person::Age(int age) {
    this->mAge = age;
}
void Person::Occupation(string occupation) {
    this->mOccupation = occupation;
}
string Person::GetName(){
    return mName;
}
string Person::GetAddress(){
    return mAddress;
}
string Person::GetGender(){
    return mGender;
}
int Person::GetAge(){
    return mAge;
}
string Person::GetOccupation(){
    return mOccupation;
}