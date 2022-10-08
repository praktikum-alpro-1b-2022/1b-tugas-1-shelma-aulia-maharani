#include <iostream> // input, output stream
using namespace std;

int main (){

    int s = 26, a = 12, m, x, y;

    m = s;
    s = a;
    a = m;

    cout << "Menukarkan variable dengan variable sementara" << endl;
    cout << "S:" << s << endl << "A: " << a << endl;

    x = 8;
    y = 4;

    x = x+y; //12
    y = x-y; //8
    x = x-y; //4

    cout << "Menukarkan dua variable tanpa variable sementara\n";
    cout << "\nX: " << x << endl << "Y: " << y << endl;

    return 0;
}


