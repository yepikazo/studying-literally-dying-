#include <iostream>
#include <string>
using namespace std;

int main(){
    int x = 5;
    int y = 10e3;
    int z = 98;
    string sup= "supaa";
    string nika = "nikaa";
    string supanika = sup + nika;
    string supanika2 = sup.append(nika);
    cout<< supanika<<endl;
    cout<< supanika2<<endl;
    cout<< supanika[0]<<endl;
    cout<< supanika[-1]<<endl;
    supanika[7] = 'g';
    cout << supanika<<endl;
    cout<< "panjang string supanika: "<<supanika.length()<<endl;
    string apalah;
    bool rimsvek = false;
    cout<< x + y <<"\n";
    cout<<"omke gams\n";
    cout << "tes2 :";
    getline(cin,apalah);
    cout << apalah <<"\n";
    int godvlan = (x < y);
    cout << godvlan;
}
