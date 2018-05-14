#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
class person{
    private:
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
        int hasiltinggi(int hasil){
            hasil+=tinggi;
            return hasil;
        }
        int cek(double rata){
            if (tinggi>=rata) return 1;
            else return 0;
        }
        double getIMT(){
            double x=(tinggi/100.0)*1.0;
            double y=x*x;
            double z=berat/y;
            return z;
        }
        string getStatusGizi(){
            double h=getIMT();
            if (h<17.0) return "sangat kurus";
            else if (h<18.5) return "kurus";
            else if (h<25.0) return "normal";
            else if (h<28.0) return "gemuk";
            else return "sangat gemuk";
        }
        void cetak (){
            cout << nama << " " << usia << " " << tinggi << " " << fixed << setprecision(2)<< berat <<" " << fixed << setprecision(2) << getIMT() << " " << getStatusGizi() << endl;
        }
    };

int main ()
{
    person p[1001];
    string a;
    int b, c, n, cnt=0, sk=0, k=0, m=0, g=0, sg=0;
    double d, rata, hasil=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c >> d;
        p[i].setperson(a,b,c,d);
        hasil=p[i].hasiltinggi(hasil);
        p[i].cetak();
    }
    rata=hasil/n;
    for (int i=0;i<n;i++){
        cnt+=p[i].cek(rata);
    }
    cout << fixed << setprecision(2) << rata << endl;
    cout << cnt << endl;
    for (int i=0;i<n;i++){
        if (p[i].getStatusGizi()=="sangat kurus") sk++;
        else if (p[i].getStatusGizi()=="kurus") k++;
        else if (p[i].getStatusGizi()=="normal") m++;
        else if (p[i].getStatusGizi()=="gemuk") g++;
        else if (p[i].getStatusGizi()=="sangat gemuk") sg++;
    }
    cout << sk << " "<< k << " "<< m <<" "<<g <<" "<< sg <<endl;
    return 0;
}
