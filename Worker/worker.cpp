#include "worker.h"

//========================WORKER FUNCTION===========================================//
int worker::getLevel() { return this->level; }
void worker::setLevel(int lv) { this->level = lv; }
void worker::lvUp() { this->level++; }
void worker::addData() {
    person::addData();
    cout << "Level: ";
    cin >> this->level;
}
void worker::showData() {
    person::showData();
    cout << "    Level: " << this->level << endl;
}
