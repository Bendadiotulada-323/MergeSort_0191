#include <iostream>
#include <ctime>
using namespace std;

int main ( ){
    int x;

    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"Teknologi Informasi UMY"<<endl;
    for (int i=0;i<4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
}
cout<<endl;
//untuk mendapatkan urutan angka acak yang berbeda
srand(time(0));

//perulangan dengan while 
cout<<"PERULANGAN WHILE"<<endl;
x = 1 + rand( )%10;

while(x<=5){
    cout<<"Bilangan Acak" = "<<x <<endl;
    x = rand( )%10;
    "}
}

x = rand()%10;
    }

    cout<<"Bilangan acak while yang tearkhir ="<<x <<endl;
    cout<<endl;

    //Perulangan dengan DO...WHILE
    cout<<"PERULANGANN DO...WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"Bilangan acak do-while yang terakhir ="<<x <<endl;
    cout<<endl;

}

Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;
