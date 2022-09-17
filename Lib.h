#ifndef __LIBRARY
#define __LIBRARY

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
/*Một đơn vị sản xuất gồm có các cán bộ là công nhân, kỹ sư, nhân viên. Mỗi cán bộ cần quản lý các dữ liệu: Họ tên,
tuổi, giới tính(name, nữ, khác), địa chỉ.

Cấp công nhân sẽ có thêm các thuộc tính riêng: Bậc (1 đến 10).
Cấp kỹ sư có thuộc tính riêng: Nghành đào tạo.
Các nhân viên có thuộc tính riêng: công việc.
Yêu cầu 1: Xây dựng các lớp CongNhan, KySu, NhanVien kế thừa từ lớp CanBo.

Yêu cầu 2: Xây dựng lớp QLCB(quản lý cán bộ) cài đặt các phương thức thực hiện các chức năng sau:

Thêm mới cán bộ.
Tìm kiếm theo họ tên.
Hiện thị thông tin về danh sách các cán bộ.
Thoát khỏi chương trình.*/

#define yes 1
#define no 0
typedef enum { cmd_exit, cmd_add, cmd_remove, cmd_find, cmd_showlist }comand;
typedef enum { exit_t, worker_t, engineer_t, staff_t }type_t;

typedef enum {
    male,
    female,
    other
}sexx;

void chuanhoaTen(string&);
bool checkName(string name);

class myException :public exception {
    string msg;
public:
    myException(string mess) {
        msg = mess;
    }
    string what() {
        return msg;
    }
};


#endif