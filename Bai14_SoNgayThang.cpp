#include <iostream>
using namespace std;
int main(){
    // tim hieu ve cau truc switch ... case
    // kiem tra 1 thang co bao nhieu ngay
    // thang co the thay doi tu 1 den 12
    int month;
    cout <<"Nhap thang: ";
    cin >> month;
    switch(month) {
        case 1: case 3 : case 5 : case 7 : case 8 : case 10 : case 12: //so sanh month == 1 ?
        cout << "31 days";
        break; // dung (khong thuc cau lenh ben duoi) thoat khoi lenh switch
        
        case 2: // so sanh month ==2 ?
        cout << ":28 days" << endl;
        break; // dung (khong thuc cau lenh ben duoi) thoat khoi lenh switch
        
        case 4: case 6 : case 9 : case 11:
        cout <<"30 days" << endl;
        break; // dung (khong thuc cau lenh ben duoi) thoat khoi lenh switch
        
        default: //Khong roi cac truonng ben tren thi mac dinh chay vao day (default)
        cout << "Thang chi ton tai tu 1 den 12, ban nhap ko dung" << endl;
        break; // dung (khong thuc cau lenh ben duoi) thoat khoi lenh switch
    }
    // duyet - chay lan luot tu 1 den 10;
    // anh kiem tra dau la so dau tien chia het cho 3 va in ra ngay (khong can in cac so khac)
    for(int run = 1; run <=10; run++){
        if (run % 3 ==0)
        {
            cout << run << endl;
            break; // thoat khoi chuong trinh mot cah dot ngot
        }
        cout << run << endl; 
        // 1, 2;
        //khong bao gio in ra 4,5,....
    }
    return 0;
}
