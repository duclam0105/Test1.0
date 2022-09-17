#include "staff.h"

//========================STAFF FUNCTION===========================================//
string staff::getJob() { return job; }
void staff::setJob(const string& job) { this->job = job; }
void staff::addData() {
    person::addData();
    cout << "Job: ";
    cin >> this->job;
}
void staff::showData() {
    person::showData();
    cout << "    Job: " << this->job << endl;
}
