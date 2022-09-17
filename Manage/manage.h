#ifndef __MANAGE_H
#define __MANAGE_H

#include "Lib.h"
#include "person.h"
#include "worker.h"
#include "engineer.h"
#include "staff.h"

//is a - has a
class QLDL {
    vector <person*> v;
    int id;
public:
    QLDL() {
        cout << "Quan li du lieu duoc tao!" << endl;
    }
    ~QLDL() {
        if (!v.empty()) {
            for (person* i : v) {
                delete(i);
            }
        }
    }
    void addData();
    void delData(const string& name);
    void findData(const string& name);
    void showList();
    void showMemberData(const unsigned int& index);
    int getSize() {
        return v.size();
    }
};

#endif#
