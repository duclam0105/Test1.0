#include "person.h"
//========================PERSON FUNCTION===========================================//
string person::getName()                    { return name; }
int person::getOld()                        { return old; }
sexx person::getGender()                    { return sex; }
void person::setName(const string& name)    { this->name = name; }
void person::setOld(const int& old)         { this->old = old; }
void person::setGender(const sexx& gender)  { this->sex = gender; }
string person::getAddress()                 { return this->address; }
string person::getGenderString() {
    if (sex == male) { return "Male"; }
    else if (sex == female) { return "Female"; }
    else return "Other";
}
void person::addData() {
    string temp;
    cin.ignore();
    do {
        cout << "Name: ";
        getline(cin, temp);
        if (temp == "0") break;
    } while (!checkName(temp));
    chuanhoaTen(temp);
    setName(temp);
    cout << "Age: ";
    cin >> this->old;
    cout << "Sex: ";
    int x;
    cin >> x;
    this->setGender((sexx)x);
    cin.ignore();
    cout << "Address: ";
    cin >> this->address;
}
void person::showData() {
    cout << "Name: " << this->getName() << "   Age: " << this->getOld() <<
        "   Sex: " << this->getGenderString() << "    Address: " << this->getAddress();
}
bool person::operator < (person a) {
    return (this->name) < (a.name);
}