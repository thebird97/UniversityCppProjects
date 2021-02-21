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
Alfa sugárzás hatására a tápanyag mennyisége kettõvel nõ, sugárzás mentes napon a
tápanyag eggyel csökken, delta sugárzás esetén a tápanyag kettõvel csökken
*/
};

class Deltafa : public Plant {
    public :
        Deltafa(const std::string &nev, int tapanyag, bool El_e) : Plant(nev,tapanyag,El_e){}
/*
Alfa sugárzás hatására a tápanyag mennyisége hárommal csökken, sugárzás nélküli napon
a tápanyag eggyel csökken, delta sugárzás hatására a tápanyag néggyel n
*/
};

class Parabokor : public Plant {
    public :
        Parabokor(const std::string &nev, int tapanyag, bool El_e) : Plant(nev,tapanyag,El_e){}
/*
 Akár alfa, akár delta sugárzás hatására a tápanyag mennyisége eggyel nõ.
*/
};


