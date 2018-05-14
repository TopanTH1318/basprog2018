#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdio>

using namespace std;

class Person{
    public:
        void setPerson(char n[], char ni[], int u, int j, double i){
            strcpy(nama,n);
            strcpy(nim,ni);
            usia = u;
            jk = j;
            ip = i;
        }
        void print(){
            cout << nama << " " << nim << " " << usia << " " << jk << " " << ip << "\n";
        }
        double getip(){
            return ip;
        }
        void printnama(){
            cout << nama << "\n";
        }
    private:
        char nama[256], nim[256];
        int usia, jk;
        float ip;
};

void hapusChar(char str[], char t){
    int i,j;
    i = 0;
    while(i<strlen(str)){
        if (str[i]==t){
            for (j=i; j<strlen(str); j++)
            str[j]=str[j+1];
        } else i++;
    }
}

int main(){
    char nama[256], nim[256];
    int i=0, usia, jk,j;
    double ip, rata=0.0;
    char st[256], x='"';
    char *t;
    Person data[100];
    while( gets(st)){
        t=strtok(st,",");  hapusChar(t,x);
        strcpy(nama,t);
        t=strtok(NULL,","); hapusChar(t,x);
        strcpy(nim,t);
        t=strtok(NULL,","); usia=atoi(t);
        t=strtok(NULL,","); jk=atoi(t);
        t=strtok(NULL,","); ip=atof(t);
        data[i].setPerson(nama,nim,usia,jk,ip);
        i++;
    }
    for(j=0; j<i; j++){
        rata += data[j].getip();
    }
    rata = rata/(i*1.0);
    cout << setprecision(2) << fixed << rata << "\n";
    for(j=0;j<i;j++){
        if (data[j].getip() < rata){
            data[j].printnama();
        }
    }
    return 0;
}
