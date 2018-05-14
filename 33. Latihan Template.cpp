#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
    T rataan (int n, T a[]){
        T x=0;
        for (int j=0; j<n; j++)
            x+=a[j];
        return x/n;}

int main ()
{
    int n;
    long double q[1001], w[1001];
    cin >> n;
    for (int j=0;j<n;j++){
        cin >> q[j] >> w[j];
    }
    cout << fixed << setprecision(2) << rataan(n,q) << " ";
    cout << fixed << setprecision(2) << rataan(n,w) << endl;
}
