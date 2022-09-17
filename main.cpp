#include "Lib.h"
#include "person.h"
#include "worker.h"
#include "engineer.h"
#include "staff.h"
#include "manage.h"

//===== MAIN ======//
int main() {
    int a;
    // comand cmd;
    QLDL cs;
    while (true) {
        cout << "===================\n";
        cout << "1-Them moi nhan vien\n2-Xoa nhan vien\n3-Tim kiem\n4-Hien thi danh sach\n0-Thoat\nMoi ban nhap: ";
        cin >> a;
        cout << "===================\n";
        switch (a) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            cs.addData();
            break;
        case cmd_remove: {
            string str;
            cin.ignore();
            do {
                cout << "Nhap ten nhan vien can xoa: ";
                getline(cin, str);
                if (str == "0") break;
            } while (!checkName(str));
            chuanhoaTen(str);
            cs.delData(str);
            break;
        }
        case cmd_find: {
            string str1;
            cin.ignore();
            do {
                cout << "Nhap ten nhan vien can tim kiem: ";
                getline(cin, str1);
                if (str1 == "0") break;
            } while (!checkName(str1));
            chuanhoaTen(str1);
            cs.findData(str1);
            break;
        }
        case cmd_showlist:
            cs.showList();
            break;
        default:
            break;
        }
    }
    // cout <<"Close the program..." << endl;
    // system("cls");
    return 0;
}
