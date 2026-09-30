#include <iostream>
using namespace std;

int main(){
    float score;
    cout <<"Nhap diem thi cua ban: ";
    cin >> score;

    if (score < 0 || score > 10) 
    {
        cout <<"Loi: diem khong hop le" << endl;
    } else if (score >=8)
    {
        cout << "Hoc luc Gioi" << endl;
    }else if (score >=6.5)
    {
        cout <<"Hoc luc Kha" <<endl;
    }else if (score >=5)
    {
        cout << "Hoc luc trung binh" << endl;
    }else{
        cout<< "Hoc luc kem" <<endl;
    }
    

    return 0;
}
