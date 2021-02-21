#pragma once
#include <string>
#include <ostream>
#include <stdlib.h>



class Plant
{
    public:
        Plant(const std::string &nev, int tapanyag, bool El_e) : _nev(nev), _tapanyag(tapanyag), _El_e(El_e) {}
        virtual ~Plant();

    std::string nev() const{ return _nev; }
    int tapanyag() const { return _tapanyag; }
    bool El_e() const { return _tapanyag < 0; }
   // void heal() { _health = maxHealth; }

    protected:
         std::string _nev; //noveny neve
        int _tapanyag; //tapanyaga
    private:


        bool _El_e; //ele
};

class Puffancs : public Plant {
    public :
        Puffancs(const std::string &nev, int tapanyag, bool El_e) : Plant(nev,tapanyag,El_e){}
    bool El_e() const { return (_tapanyag < 0 or _tapanyag > 10 ); }
///napi tapanyag valtpzas
/*
Alfa sug�rz�s hat�s�ra a t�panyag mennyis�ge kett�vel n�, sug�rz�s mentes napon a
t�panyag eggyel cs�kken, delta sug�rz�s eset�n a t�panyag kett�vel cs�kken
*/
};

class Deltafa : public Plant {
    public :
        Deltafa(const std::string &nev, int tapanyag, bool El_e) : Plant(nev,tapanyag,El_e){}
/*
Alfa sug�rz�s hat�s�ra a t�panyag mennyis�ge h�rommal cs�kken, sug�rz�s n�lk�li napon
a t�panyag eggyel cs�kken, delta sug�rz�s hat�s�ra a t�panyag n�ggyel n
*/
};

class Parabokor : public Plant {
    public :
        Parabokor(const std::string &nev, int tapanyag, bool El_e) : Plant(nev,tapanyag,El_e){}
/*
 Ak�r alfa, ak�r delta sug�rz�s hat�s�ra a t�panyag mennyis�ge eggyel n�.
*/
};


