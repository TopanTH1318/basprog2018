#include <iostream>
#include <iomanip>
using namespace std;

class person{
    string nama;
    int usia, tinggi;
    double berat;
public:
    person (){
        nama=""; usia=0; tinggi=0; berat=0.0;
    }
    void setperson(string a, int b, int c, double d){
        nama=a;
        usia=b;
        tinggi=c;
        berat=d;
    }
    void cetak (){
        cout << nama << " " << usia << endl;
    }
    int hasiltinggi(int hasil){
        hasil+=tinggi;
        return hasil;
    }

    int cek(double rata){
        if (tinggi>=rata) return 1;
        else return 0;
    }
};

int main ()
{
    person p[1001];
    string a;
    int b, c, n, cnt=0;
    double d, rata, hasil=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c >> d;
        p[i].setperson(a,b,c,d);
        hasil=p[i].hasiltinggi(hasil);
    }
    rata=hasil/n;
    for (int i=0;i<n;i++){
        p[i].cetak();
        cnt+=p[i].cek(rata);
    }
    cout << fixed << setprecision(2) << rata << endl;
    cout << cnt << endl;
}
