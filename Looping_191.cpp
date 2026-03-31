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