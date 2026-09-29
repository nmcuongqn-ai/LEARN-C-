#include <iostream>
using namespace std;

#define MA_CONG_TY "CTY001"

int main(){
    double TAX_RATE = 0.1;                   // thue suat 10%
    double MUC_LUONG_TOI_THIEU = 5000000;    // muc luong toi thieu chiu thue 

    cout <<"Ma Cong Ty: " << MA_CONG_TY <<endl;
    cout <<"Thue suat: " << TAX_RATE <<endl;
    cout <<"Muc luong toi thieu: " << MUC_LUONG_TOI_THIEU <<endl;

    double luong = 15000000;
    double tienThue =0;

    if (luong > MUC_LUONG_TOI_THIEU) {
        tienThue = (luong - MUC_LUONG_TOI_THIEU) * TAX_RATE;
    }

    cout <<"Luong: " << luong << endl;
    cout <<"Tien luong phai nop: " << tienThue << endl;



    return 0;
}
