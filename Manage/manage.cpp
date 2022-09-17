#include "manage.h"

//========================MANAGE FUNCTION===========================================//
void QLDL::addData() {
    int a;
    cout << "1-Worker - 2-Engineer - 3-Staff - 0-Back: ";
    cin >> a;
    switch (a)
    {
    case exit_t:
        return;
    case worker_t: {
        worker* p = new worker;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    case engineer_t: {
        engineer* p = new engineer;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    case staff_t: {
        staff* p = new staff;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    default:
        cout << "Nhap sai! 1-Worker - 2-Engineer - 3-Staff - 0-Back\n";
        break;
    }
    int q;
    cout << "Ban co muon nhap them? 1-Yes/0-No: "; cin >> q;
    if (q == yes)
    {
        QLDL::addData();
    }
}
void QLDL::delData(const string& name) {
    int count = 0;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getName() == name) {
            count++;
            person* tmp = v[i];
            v.erase(v.begin() + i);
            delete(tmp);
            i--;
        }
    }
    if (count == 0) {
        cout << "Can not find person has name " << name << " in list!" << endl;
        return;
    }
    cout << "Delete done!" << endl;
}
void QLDL::showMemberData(const unsigned int& index) {
    if (v.empty()) {
        // cout << "No data in list!"<<endl;
        return;
    }
    if (index < v.size()) {
        worker* pw = dynamic_cast<worker*>(v[index]);
        if (pw != nullptr) {
            pw->showData();
        }
        else {
            engineer* pe = dynamic_cast<engineer*>(v[index]);
            if (pe != nullptr) {
                pe->showData();
            }
            else {
                staff* ps = dynamic_cast<staff*>(v[index]);
                if (ps != nullptr) {
                    ps->showData();
                }
                else return;
            }
        }
    }
}
void QLDL::findData(const string& name) {
    int count = 0;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getName() == name) {
            cout << i + 1 << ". ";
            count++;
            showMemberData(i);
        }
    }
    if (count == 0) {
        cout << "Can not find person has name " << name << " in list!" << endl;
    }
}
void QLDL::showList() {
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << ". ";
        showMemberData(i);
    }
}
