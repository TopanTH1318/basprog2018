#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float a, b, hasil;
    cin >> a >> b;
    hasil=(float)a+b;
    cout << setprecision(2)<< fixed << hasil <<endl;
    return 0;
}
