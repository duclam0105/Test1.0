#ifndef __PERSON_H
#define __PERSON_H

#include "Lib.h"


class person {
    string name;
    int old;
    sexx sex;
    string address;
public:
    //int id;
    person() {
        //cout <<"Person created!" << endl;
        name = "";
        old = 0;
        sex = other;
    }
    person(string name, int old, sexx sex) :name(name) {
        this->name = name;
        this->old = old;
        this->sex = sex;
    }
    virtual ~person() {}
    string getName();
    int getOld();
    sexx getGender();
    string getGenderString();
    string getAddress();
    void setName(const string& name);
    void setOld(const int& old);
    void setGender(const sexx& gender);
    void setAddress(const string& address);
    virtual void addData();
    virtual void showData();
    friend void chuanhoaTen(string& a);
    bool operator < (person a);
    // friend istream &operator >> (istream &in, person &a){
    //     cout << "Name: ";
    //     in.ignore();
    //     getline(in, a.name);
    //     chuanhoaTen(a);
    //     cout << "Age: ";
    //     in >> a.old;
    //     cout << "Sex: ";
    //     int x;
    //     in >> x;
    //     a.setGender((sexx)x);
    //     cin.ignore();
    //     return in;
    // }
    // friend ostream &operator << (ostream &out, person a){
    //     cout << "Name: " <<a.getName()<<"   Age: "<<a.getOld()<<
    //         "   Sex: "<< a.getGender()<< endl;
    //     return out;
    // }
};
#endif#
