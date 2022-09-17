#ifndef __WORKER_H
#define __WORKER_H

#include "Lib.h"
#include "person.h"

class worker :public person {
private:
    int level;
public:
    worker() {
        //cout <<"Worker created!" << endl;
    }
    worker(string name, int old, sexx sex, int lv) : person(name, old, sex) {
        this->level = lv;
    }
    int getLevel();
    void setLevel(int lv);
    void lvUp();
    void addData();
    void showData();
    // friend istream &operator >> (istream &in, worker &w);
    // friend ostream &operator << (ostream &out, worker w);
};

#endif#
