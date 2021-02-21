
#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

struct FisherMan{
    std::string nev;
     std::string verseny;
     int versenycouner=0;

    std::string versenyazon;

    bool  CsakHarcsa;
    int Harcsacounter;


};

enum Status {abnorm, norm};

class Fish
{
    public:
        enum Errors {OPEN_ERROR};
        Fish(const std::string &FileName);
        ~Fish() { _x.close();}
        void First() { Next();}
        void Next();
        FisherMan Current() const {return _cur;}
        bool End() const {return _end;}

    protected:

    private:
        FisherMan _cur;
        Status _sx;
        std::ifstream _x;

        std::string _nev;
        std::string _versenyazon;

        /*
        std::string _hal;
        int _tomeg;

        */
        bool _end;



};


