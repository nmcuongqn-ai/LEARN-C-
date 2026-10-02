#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout <<"Nhap so thu nhat: ";
    cin >> a;
    cout <<"Nhap so thu hai: ";
    cin >> b;

    int max = (a>b) ? a : b;

    cout <<"Max = " << max << endl;

    return 0;

}
