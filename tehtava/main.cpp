#include <iostream>
#include <ctime>
#include <cstdlib>
int game(int maxnum);
using namespace std;

int main()
{
    cout << "RAMDMAX = " << RAND_MAX << endl;
    cout << "Time = " << time(0) <<endl;
    srand(time(0));

    int maxnum;
    int arvaus;
    cout << "Monesta luvusta haluat arpoa?" << endl;
    cin >> maxnum;
    arvaus = game(maxnum);

    cout << "arvauksella: " << arvaus << endl;


    return 0;
}

int game(int maxnum)
{
    int satunnainenLuku = rand()%maxnum;
    int kayttajanNumero = -1;
    int arvaus = 0;
    cout << "peli alkaa" << endl;
        while(kayttajanNumero != satunnainenLuku)
        {
            arvaus++;
            cout << "Arvaa luku (arvaus numero " << arvaus << ")" << endl;
            cin >> kayttajanNumero;
            cout << "Annoit numeron = " << kayttajanNumero<<endl;
            if (kayttajanNumero > satunnainenLuku){
                cout << "Antamasi numero on liian suuri :(" << endl;
            } else             if (kayttajanNumero < satunnainenLuku){
                cout << "Antamasi numero on liian pieni :(" << endl;
            } else {
                cout << "Voitit pelin :)" << endl;
                return arvaus;
            }
        }

   return 0;
}
