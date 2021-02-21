#include "Fish.h"

Fish::Fish(const std::string &FileName)
{
    _x.open(FileName.c_str());
    if(_x.fail()) throw OPEN_ERROR;
}
    std::string tmp = "";
void Fish::Next()
{

/**
    _end = (abnorm==_sx);
    if (!end) {
*/


    std::string line;
    getline(_x , line);
    if( !(_end = _x.fail()) ){
        std::istringstream is(line);
        is >> _nev >> _versenyazon;
         _cur.verseny = _versenyazon;


        if (_versenyazon == tmp){

            _cur.versenycouner += 1;
        }
        if (_versenyazon != tmp) {
            tmp = _versenyazon;
             _cur.versenycouner = 1;
        }
        _cur.Harcsacounter = 0;
         _cur.CsakHarcsa = true;
        std::string fish;
        int size;
        for( is >> fish >> size ; !is.fail(); is >> fish >> size ){
               if(fish != "Harcsa"){
                _cur.CsakHarcsa = false;
               }
                if(fish == "Harcsa") {
                    ++_cur.Harcsacounter;
                    _cur.nev = _nev;
                    _cur.versenyazon = _versenyazon;
                }
            }
        }

}


