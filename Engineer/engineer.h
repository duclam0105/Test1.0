#ifndef __ENGINEER_H
#define __ENGINEER_H

#include "Lib.h"
#include "person.h"

class engineer :public person {
    string major;
public:
    engineer() {
        //cout <<"Engineer created!" << endl;
    }
    engineer(string name, int old, sexx sex, string mj) : person(name, old, sex) {
        this->major = mj;
    }
    string getMajor();
    void setMajor(const string& major);
    void addData();
    void showData();
    // friend istream &operator >> (istream &in, engineer &e);
    // friend ostream &operator << (ostream &out, engineer e);
};


#endif#

