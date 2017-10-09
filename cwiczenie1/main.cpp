#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
struct probka
{
    double t;
    double x;
    probka (double _t, double _x){
    t=_t;
    x=_x;
    }

};
vector <probka> wczytaj (string nazwa)
{
    vector <probka> tab;
    ifstream plik(nazwa);
    {

        string linia;
        while(getline(plik,linia)){
            cout<<linia<<endl;
        }
    }
    plik.close();
    return tab;
}
void zapis (vector <probka> dane,string nazwa)
{
    ofstream zapisanie("nazwa.txt");
    for(int i=0;i<400;i++)
    {

    zapisanie<<dane[i].t<<endl;
    }


}
//vector <probka> tablica;
//tablica push_back(p1);
//cout<<tablica[0];

int main(int argc, char* argv[])
{
    if (argc != 2) { return -1;
}
string nazwa_pliku = argv[1];
vector<probka>dane=wczytaj(argv[1]);
cin.get();

return 0;
}
