#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
class Balok {
   double panjang, lebar, tinggi;
   public:
      Balok() { panjang=lebar=tinggi=0.0; }
      void set(double p, double l, double t) { panjang=p; lebar=l; tinggi=t; }
      double luas() { return 2*(panjang*lebar+panjang*tinggi+lebar*tinggi); }
      double volume() { return panjang*lebar*tinggi ; }
};
class ListBalok {
   vector<Balok> B;
   Balok x;
   int n;
   double p,l,t ;
   public:
      ListBalok() {
        cin >> n ;
        for(int i=0;i<n;i++){
            cin >> p >> l >> t ;
            x.set(p,l,t);
            B.push_back(x);
        }
      }
      double rataLuas() {
        double rataan = 0;
        for(int i=0;i<n;i++){
            rataan+=B[i].luas();
        }
        return rataan/n;
      }
      double rataVolume() {
        double rataan = 0;
        for(int i=0;i<n;i++){
            rataan+=B[i].volume();
        }
        return rataan/n;
      }
};

int main() {
   ListBalok B;
   cout << fixed << setprecision(2)
        << B.rataLuas() << " " << B.rataVolume() << endl;
   return 0;
}
