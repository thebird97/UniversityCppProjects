#include <iostream>
#include "Fish.h"

using namespace std;

bool CsakHarcsaLegalabbHarom(const string &name){
                int c=0;
                Fish t(name);
                for( t.First(); !t.End(); t.Next() ){
                    if (t.Current().Harcsacounter>=3 && t.Current().CsakHarcsa == true){
                      //  e.Current() = t.Current();
                        /*e.Current().nev = t.Current().nev;
                        e.Current().versenyazon = t.Current().versenyazon ;
                            */
                            cout << "Versenyzo neve " << t.Current().nev << " Verseny azonosito  " << t.Current().versenyazon << endl;
                            c++;
                            break;
                    }
                }
                    if (c==0){
                            return false;
                    }else {
                        return true;
                    }


}




void Verseny_amin_a_legtobb_horgasz_indult(const string &fajlname){

         Fish l(fajlname);
            int max = l.Current().versenycouner;
            string maxverseny = l.Current().versenyazon;
            for(l.First();!l.End();l.Next()){
                    if (l.Current().versenycouner > max){
                        max = l.Current().versenycouner;
                        maxverseny = l.Current().versenyazon;
                    }
            }

       cout << "A " << maxverseny << " versenyen indult a legtobb horgasz es " << max  << " db horgasz indult ezen a versenyen." << endl;

}


/** Test függvenyek
 * Ezek a függvények a ugyanazok mint a felso függvenyek csak a tesztelésre keszültek az alabbiak
 */


bool TEST_CsakHarcsaLegalabbHarom(const string &name){
                int c=0;
                Fish t(name);
                for( t.First(); !t.End(); t.Next() ){
                    if (t.Current().Harcsacounter>=3 && t.Current().CsakHarcsa == true){
                      //  e.Current() = t.Current();
                        /*e.Current().nev = t.Current().nev;
                        e.Current().versenyazon = t.Current().versenyazon ;
                            */
                            cout << t.Current().nev << " " << t.Current().versenyazon << endl;
                            c++;
                            break;
                    }
                }
                    if (c==0){
                            return false;
                    }else {
                        return true;
                    }


}


void TEST_Verseny_amin_a_legtobb_horgasz_indult(const string &fajlname){

         Fish l(fajlname);
            int max = l.Current().versenycouner;
            string maxverseny = l.Current().versenyazon;
            for(l.First();!l.End();l.Next()){
                    if (l.Current().versenycouner > max){
                        max = l.Current().versenycouner;
                        maxverseny = l.Current().versenyazon;
                    }
            }

       cout << maxverseny;
}


#define NORMAL_MODE
#ifdef NORMAL_MODE

int main()
{
   setlocale(LC_ALL,"hun");
    bool fileError = true;
    do
    {
        try
        {
            cout << "File's name: ";
            string fileName; /// = "input.txt";
            cin >> fileName;
            Fish g(fileName);
            cout << "\n Elso feladat: (csak Harcsa de abbol legalabb 3)" << endl;
                 if (CsakHarcsaLegalabbHarom(fileName) == true ){
                      cout << "van" << endl;
                       //cout << g.Current().nev << " " << g.Current().versenyazon << endl;
                 }else
                  {
                     cout << " Nem volt olyan, horgasz, aki valamelyik versenyen csak harcsat fogott, de abból legalabb harmat " << endl;
                     }
            cout << "\n Masodik feladat: Melyik versenyen indult a legtobb horgasz? " << endl;
               Fish z(fileName);
               Verseny_amin_a_legtobb_horgasz_indult(fileName);

              fileError = false;
            }




        catch (Fish::Errors err)
        {
            cout << "File not found!\n\n";
        }
    } while (fileError);





    return 0;
}


#else
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
///Lineáris keresés első feladat tesztelés
TEST_CASE("first task empty file", "ures.txt") {
   //Fish k(fileName);
    CHECK_FALSE(TEST_CsakHarcsaLegalabbHarom("ures.txt"));
}

TEST_CASE("Elso feleadat van ilyen horgasz, true", "input.txt") {
    Fish t("input.txt");
   // t.Current().nev << " " << t.Current().versenyazon
    CHECK(TEST_CsakHarcsaLegalabbHarom("input.txt"));
    CHECK_FALSE(TEST_CsakHarcsaLegalabbHarom("input.txt") == false);
    REQUIRE(TEST_CsakHarcsaLegalabbHarom("input.txt") == true);
    ///hogy tényleg van-e olyan horgész


}

TEST_CASE("Elso feleadat Nincs ilyen horgasz, false", "inp2.txt") {

    CHECK_FALSE(TEST_CsakHarcsaLegalabbHarom("inp2.txt") == true);
    ///hogy tényleg nincs ilyen horgász


}

TEST_CASE("Elso feleadat van ilyen horgasz es IRENENI hivjak,es a BARACK7878 indult", "input.txt") {


                int c=0;
                Fish t("input.txt");
                for( t.First(); !t.End(); t.Next() ){
                    if (t.Current().Harcsacounter>=3 && t.Current().CsakHarcsa == true){


                            cout << t.Current().nev << " " << t.Current().versenyazon << endl;
                            c++;
                            break;
                    }
                }
        //counting test
        CHECK(t.Current().Harcsacounter >= 3);
        CHECK(t.Current().nev == "IRENNENI");
        CHECK( t.Current().versenyazon == "BARACK7878");
}


///Megszámlálás és max kiválasztás tesztelése
TEST_CASE("Maximum kiv ", "input.txt"){


         Fish l("input.txt");
            int max = l.Current().versenycouner;
            string maxverseny = l.Current().versenyazon;
            for(l.First();!l.End();l.Next()){
                    if (l.Current().versenycouner > max){
                        max = l.Current().versenycouner;
                        maxverseny = l.Current().versenyazon;
                    }
            }

    CHECK(max == 2);
    CHECK(maxverseny == "Kiliti0512");

}

TEST_CASE("Maximum kivalasztas masik esetre ", "inp2.txt"){


         Fish l("inp2.txt");
            int max = l.Current().versenycouner;
            string maxverseny = l.Current().versenyazon;
            for(l.First();!l.End();l.Next()){
                    if (l.Current().versenycouner > max){
                        max = l.Current().versenycouner;
                        maxverseny = l.Current().versenyazon;
                    }
            }

    CHECK(max == 3);
    CHECK(maxverseny == "TISZA555");

}


#endif
