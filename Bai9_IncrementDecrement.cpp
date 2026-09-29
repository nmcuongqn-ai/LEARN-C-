#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout <<"Nhap so thu nhat: ";
    cin >> a;
    cout <<"Nhap so thu hai: ";
    cin >> b;

    cout <<"KET QUA ++a" <<endl; //tang truoc
    cout <<"ket qua ++a in ra" << ++a << endl;
    cout <<"ket qua sau do" << a << endl;

    cout <<"KET QUA b++ " << endl; //tang sau
    cout <<"Ket qua b++ in ra"<< b++ << endl;
    cout <<"ket qua sau do" << b <<endl;

    cout <<"KET QUA --a va b--" << endl; //giam truoc va giam sau
    cout << "Ket qua --a in ra" << --a << endl;
    cout << "Ket qua b-- in ra" << b-- << endl;
    cout << "Ket qua --a sau cung b-- la: " << a <<",b=" << b << endl;
    
    cout<< "THU THACH BIEU THUC" << endl;
    cout << "Truoc thu thach: a=" << a << ",b=" << b <<endl;
    int tong = a++ + ++b;
    cout << "int tong = a++ + ++b;" << endl;
    cout << "Ket qua tong = " << tong << endl;
    cout << "Sau do: a= " << a << " ,b= " << b << endl;




    return 0;
}
