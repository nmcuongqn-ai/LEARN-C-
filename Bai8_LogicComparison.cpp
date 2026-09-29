#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout <<"Nhap so thu nhap: ";
    cin >> num1;
    cout <<"Nhap so thu hai: ";
    cin >> num2;

    bool bangNhau = (num1 == num2);
    bool khacNhau = (num1 != num2);
    bool lonHon = (num1 > num2);
    bool nhoHon = (num1 < num2);

    cout <<"KET QUA" <<endl;
    cout << num1 <<" == "<< num2 << " la "<< bangNhau <<endl;
    cout << num1 <<" != "<< num2 << " la "<< khacNhau <<endl;
    cout << num1 <<" > "<< num2 << " la "<< lonHon <<endl;
    cout << num1 <<" < "<< num2 << " la "<< nhoHon <<endl;

    bool caHaiDuong = (num1>0) && (num2>0);
    bool coSoAm = (num1<0) || (num2<0);
    bool khongBangNhau = !(bangNhau);

    cout <<"KET QUA LOGIC"<< endl;
    cout <<"Ca hai deu duong" << caHaiDuong <<endl;
    cout <<"Co so am"<< coSoAm<<endl;
    cout <<"Khong bang nhau" << khongBangNhau <<endl;

    cout <<"KET LUAN" << endl;
    if (num1 > num2) {
        cout << "So thu nhat lon hon so thu hai" << endl;
    } else if (num1 < num2) {
        cout << "So thu nhat be hon so thu hai" << endl;
    } else {
        cout <<"Hai so bang nhau" << endl;
    }


    return 0;
}

