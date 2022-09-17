#ifndef __STAFF_H
#define __STAFF_H

#include "Lib.h"
#include "person.h"

class staff :public person {
    string job;
public:
    staff() {
        //cout <<"Staff created!" << endl;
    }
    staff(string name, int old, sexx sex, string job) : person(name, old, sex) {
        this->job = job;
    }
    string getJob();
    void setJob(const string& job);
    void addData();
    void showData();
    // friend istream &operator >> (istream &in, staff &s);
    // friend ostream &operator << (ostream &out, staff s);
};

#endif#
