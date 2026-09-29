#include <iostream>
#include <string>

using namespace std; 

#define BASIC_SALARY 300
// #define: keyword khai bao hang so
// BASIC_SALARY: ten cua hang so
// 300 : gia tri cua hang so
// Hang so : gia tri cua no khong bi doi 

int main(){
    // xu ly code o day
    string full_name = "Nguyen Manh Cuong";
    // khao bao 1 bien luu tru ten
    string my_address = "Quy Nhon";
    // khai bao 1 bien de luu tru dia chi
    int my_age = 18;
    // khai bao 1 bien de luu tru tuoi
    bool checking = true;
    char letter = 'A'; //su dung dau nhay don
    float my_point = 9.5; // so thuc 
    double my_money = 150300;// so thuc 

    cout << full_name << endl; // in ho ten
    cout << my_money << endl; // in so tien 
    cout <<"Luong co ban : "<< BASIC_SALARY << endl;
    // su dung tu khoa constant de khai bao hang so
    const double PI = 3.14; // hang so 
    cout <<"Gia tri cua so PI:" << PI << endl;
    // PI = 3.56; // error : khong duoc phep thay doi gia tri hang so
    // uu tien su dung tu khoa const khai bao hang so (han che dungg #define)

    int number1 = 4; 
    int number2 = 9;
    int result = number2 % number1; // phep chia lay phan du (chi ap dung cho so nguyen)
    cout << result << endl; 
    cout << (number1 + number2) << endl; // phep cong 
    cout << (number2 - number1) << endl; // phep tru
    // = : phep gan gia tri 
    // == : phep so sanh
    bool kiem_tra = number1 == number2 ; // so sanh 2 so 
    cout << kiem_tra << endl; 
    bool kiem_tra2 = number1 != number2; 
    cout << kiem_tra2 << endl; 

    int number3 = 4;
    int number4 = 10;
    bool kiem_tra3 = (number1 > number2) && (number3 < number4); // va 
    bool kiem_tra4 = (number1 > number2) || (number3 < number4); // hoac

    cout << kiem_tra3 <<endl;
    cout << kiem_tra4<< endl;
    return 0;

}
