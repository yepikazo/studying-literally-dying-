#include <iostream>
#include <cmath>
#include <vector> // untuk vector
using namespace std;


//enum unchangeable value ln135 execute

enum level{ easy = 25, normal, hard}; // normal adalah easy tambah 1 dan hard adalah normal tambah 1, jika tidak diberi nilai pada awal(easy) maka easy bernilai 0

void rimsvek(string nama, string noktp){ //void tidak dapat  mengembalikan nilai
    cout << "omke gams" << endl;
    cout << "=======================\n";
    cout << "nama   : " << nama << endl;
    cout << "no ktp : " << noktp << endl;
}

void suku(string nama = "jawa"){
    cout << nama << endl;
}

int menghitung(int angkanya){
    return 2 + angkanya; // return adalah fungsi untuk mengembalikan nilai
}

int tukarnilai(int &x, int &y){ // & untuk mengakses nilai variabel, digunakan untuk manipulasi nilai yang dipanggil, jika string maka function nya void
    int z = x;
    x = y, y = z;
}

void panggilbilangan(int x[5]){
    for(int i = 0; i < 5; i++){
        cout << x[i] << ",";
    }
    cout << endl;
}

int sum(int k) { //fungsi rekursif
    if (k > 0) {
        return k + sum(k - 1); //memanggil dirinya sendiri dalam fungsi
    } else {
        return 0;
    }
}

int atmin =5; // variabel global

//variabel yang dideklarasikan dalam fungsi disebut variabel lokal
//variabel yang dideklarasikan di luar fungsi disebut variabel global

//oop
class doxing{ //dalam class dapat mendeklarasikan fungsi void,int etc
    public:
        string nama;
        int id;
        int bounty(int nilai);
        void doxx();
};

int doxing::bounty(int nilai){
    return nilai;
}

void doxing::doxx(){ //fungsi void
    cout << "yahaha kedoxxing\n";
}
int main(){
    int bilangan[5] = {5,7,2,1,3};
    int x = 8;
    int y = 6;
    int i = 0;
    int angka = 64;
    double angka2 = 3.4;
    int z = min(x,y);
    cout << z <<endl;
    z = max(x,y);
    cout << z << endl;

    //array

    string biji[3] = {"apalah","apa","lah"};
    string kodenuklir[3] = {"177013","24434","7347248"};
    for(string x : biji){
        cout << x << endl;
    }
    biji[2] = "coba";
    cout << biji[2] << endl;

    vector<string>sungut = {"amba","rusdi","fuad"};
    sungut.push_back("imut"); // menambahkan anggota array
    for(string x : sungut){
        cout << x << endl;
    }

    //ukuran array

    cout << sizeof(bilangan) << endl; //ukuran dalam bentuk byte tiap integer = 4, jadi ukuran array bilangan = 20 karena dikali jumlah anggota array(5)
    cout << sizeof(bilangan)/sizeof(bilangan[0]) << endl; //menghitung jumlah anggota array(20 dibagi 4 = 5)
    //cmath library

    /*sqrt(x) - square root of x
    pow(x,y) - x to the power of y
    abs(x) - absolute value of x
    ceil(x) - smallest integer greater than or equal to x
    floor(x) - largest integer less than or equal to x */

    cout << "akar dari " << angka << " adalah " << sqrt(angka) << endl;
    cout << log(x) << endl;
    cout << "bulat dari "<< angka2 << " adalah " << round(angka2) << endl;

    //boolean

    bool fesnuk = true;
    bool vscode = false;
    cout << fesnuk << "," << vscode <<endl;
    cout << !fesnuk << "," << !vscode <<endl;
    cout << (x > y) << "," << (x < y) << endl;

    //if else, switchcase sama kayak c

    if (x > y){
        cout << "fesnuk adalah pilihan terbaik" << endl;
    }
    else{
        cout << "vscode adalah pilihan terbaik" << endl;
        fesnuk = false;
        vscode = true;
    }

    // ternary(short) if else
    string result = (x > y) ? "fesnuk" : "vscode";
    cout << result << endl;

    // while

    while(i < 5 ){
        printf("pop mie\n");
        i++;
    }

    while(i > 0){
        cout << i-- << ",";
    }
    cout << endl;
    
    // do while 

    do{
        cout << "fesnuk selamanya\n";
        i++;
    } while (i <= 5); //akan terus terulang ketika i <= 5 dan akan berhenti ketika i > 5

    // for loop

    for(int j = 1; j <= 5; j++){
        cout << "vscode selamanya " << j << endl;
    }

    // nested loop

    for(int i= 1; i<=5; i++){
        for(int j = 1; j <= i; j++){
            cout << i << "," << j << endl;
        }
    }

    //foreach loop

    int myNumbers[5] = {10, 20, 30, 40, 50}; //menyebutkan array dengan nama myNumbers
    for (int i : myNumbers) {
    cout << i << "\n";
    }

    //break

    for(int j = 1; j <= 5; j++){
        cout << j << endl;
        if(j == 3){
            break;
        }
    }

    //continue

    for(int j = 1; j <= 5; j++){
        if(j == 3){
            continue;
        }
        cout << j << endl;
    }

    //enum unchangeable value

    enum level nilai = normal;
    cout << nilai << endl;

    //references

    string sepatu = "aliodas";
    string &merek = sepatu;

    cout << merek << endl;
    cout << &merek << endl; //menunjukan alamat dalam bentuk hexadesimal, tujuan untuk memanipulasi data dalam direktori

    //pointer = * menunjukan alamat, 
    // & menunjukan isi alamat
    string* ptr = &sepatu;
    cout << ptr << endl; //menunjukan alamat
    cout << *ptr << endl; // deferesi

    //function
    rimsvek(sungut[0],kodenuklir[0]);
    suku(); //diberi nilai default "jawa"
    suku("sunda");
    cout << menghitung(5) << endl;
    tukarnilai(bilangan[0],bilangan[4]); //mengubah(menukar) nilai dari array bilangan
    cout << bilangan[0] << "," << bilangan[4] << endl;
    panggilbilangan(bilangan);//memanggil bilangan menggunakan function

    cout << sum(10) << endl; //menjumlahkan bilangan dari 10 sampai 1, such as factorial thing

    doxing kobo;
    kobo.nama = "pace";
    kobo.id = 69;
    kobo.doxx();
    cout << kobo.nama <<endl;
    cout << kobo.id << endl;
    cout <<kobo.bounty(500) << endl;

}
