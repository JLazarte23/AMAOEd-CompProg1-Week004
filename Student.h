#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person {
    private:
    string mProgram;
    int mYear;
    string mUniversity;

    public:

    Student();
    Student(string mProgram, int mYear, string mUniversity, string mName, string mAddress, string mGender, int mAge, string mOccupation);
    void setProgram(string mProgram);
    void setYear(int mYear);
    void setUniversity(string mUniversity);
    void setName(string name);
    void setAddress(string address);
    void setGender(string gender);
    void setAge(int age);
    void setOccupation(string occupation);

    string getProgram();
    int getYear();
    string getUniversity();
    string getName();
    string getAddress();
    string getGender();
    int getAge();
    string getOccupation();

};
#endif
Student::Student(){
    mProgram = "";
    mYear = 0;
    mUniversity = "";
    mName = "";
    mAddress = "";
    mGender = "";
    mAge = 0;
    mOccupation = "";
}
Student::Student(string mProgram, int mYear, string mUniversity, string mName, string mAddress, string mGender, int mAge, string mOccupation){
    this->mProgram = mProgram;
    this->mYear = mYear;
    this->mUniversity = mUniversity;
}
void setProgram(string program){
    this->mProgram = program;
}
void setYear(int year){
    this->mYear = year;    
}
void setUniversity(string university){
    this->mUniversity = university;
}
void Student::setName(string name) {
    this->mName = name;
}
void Student::setAddress(string address) {
    this->mAddress = address;
}
void Student::setGender(string gender) {
    this->mGender = gender;
}
void Student::setAge(int age) {
    this->mAge = age;
}
void Student::setOccupation(string occupation) {
    this->mOccupation = occupation;
}

string getProgram(){
    return mProgram;
}
int getYear(){
    return mYear;
}
string getUniversity(){
    return mUniversity;
}
string Student::getName(){
    return mName;
}
string Student::getAddress(){
    return mAddress;
}
string Student::getGender(){
    return mGender;
}
int Student::getAge(){
    return mAge;
}
string Student::getOccupation(){
    return mOccupation;
}