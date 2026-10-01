#include <iostream>
using namespace std;

int main(){

    //SO CHAN, SO LE

    int number;
    cout <<"Nhap mot so nguyen : ";
    cin >> number;
    if (number % 2 ==0 )
    {
        cout <<"Day la so chan" <<endl;

    } else {
        cout <<"Day la so le " <<endl;
    }
    
    //SO AM, SO DUONG, BANG 0

    if (number > 0)
    {
        cout <<"Day la so DUONG"<< endl;
    } else if (number < 0)
    {
        cout <<"Day la so AM" << endl;
    } else {
        cout <<"Day la so 0" << endl;
    }
    

    // SO SANH 2 SO

    int num1, num2; 
    cout<<"Nhap so THU NHAT: ";
    cin >> num1;
    cout <<"Nhap so THU HAI: ";
    cin >> num2;
    if (num1 > num2)
    {
        cout <<"So THU NHAT lon hon"<<endl;
    } else if (num1 < num2) 
    {
        cout <<"So THU HAI lon hon"<<endl;
    } else {
        cout <<"Hai so bang nhau"<<endl;
    }

    // TINH TIEN TAXI THEO KM 
    float soKm;
    cout <<"Nhap so Km di chuyen: ";
    cin >> soKm;
    if (soKm >= 21)
    {
        cout <<"Gia tien cua ban la: C/km" << endl;
    } else if (soKm >= 3 && soKm <= 20 )
    {
        cout <<"Gia tien cua ban la: B/km" << endl;
    } else if (soKm <= 2) {
        cout <<"Gia tien cua ban la: A/km" << endl;
    }
    
   //KIEM TRA NAM NHUAN HAY KHONG NHUAN
    int nam;
    cout <<"Nhap nam: ";
    cin >> nam;

    if (nam % 4 == 0){
        if (nam % 100 == 0){
            if (nam % 400 == 0) {
                cout <<"Nam " << nam <<"la nam NHUAN"<<endl; 
            } else {
                cout <<"Nam " << nam <<"la nam KHONG NHUAN"<<endl; 
            }
        } else {
            cout <<"Nam " << nam <<"la nam NHUAN"<< endl;
        }        
    } else {
        cout <<"Nam " << nam <<"la nam KHONG NHUAN"<< endl;
    }





    return 0;
}
