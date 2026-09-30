#include <iostream>
using namespace std;

int main(){
    int number;
    cout <<"Nhap mot so nguyen: ";
    cin >> number; 

    if (number > 0)
    {
        cout <<"Day la so DUONG"<< endl;
    } else if (number < 0)
    {
        cout <<"Day la so AM" << endl;
    } else {
        cout <<"Day la so 0" << endl;
    }
    
    

    return 0;
}
