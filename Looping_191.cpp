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

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

      rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
          case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
          case 2:
            namaJurusan = "Teknik Elektro";
            statusKuota = "Kuota Penuh!";
            break;
          case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}
