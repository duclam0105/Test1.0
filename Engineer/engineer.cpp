#include "engineer.h"

//========================ENGINEER FUNCTION===========================================//
string engineer::getMajor() { return major; }
void engineer::setMajor(const string& major) { this->major = major; }
void engineer::addData() {
    person::addData();
    cout << "Major: ";
    cin >> this->major;
}
void engineer::showData() {
    person::showData();
    cout << "    Major: " << this->major << endl;
}