Egy bolygón különböző fajtájú növények élnek, minden növény tápanyagot használ. Ha egy növény
tápanyaga elfogy (a mennyisége 0 lesz), a növény elpusztul. A bolygón háromféle sugárzást
különböztetünk meg: alfa sugárzás, delta sugárzás, nincs sugárzás. A sugárzásra a különböző fajtájú élő
növények eltérő módon reagálnak. A reakció tartalmazza a tápanyag változását, illetve a következő
napi sugárzás befolyásolását. A másnapi sugárzás alakulása: ha az alfa sugárzásra beérkezett igények
összege legalább hárommal meghaladja a delta sugárzás igényeinek összegét, akkor alfa sugárzás lesz;
ha a delta sugárzásra igaz ugyanez, akkor delta sugárzás lesz; ha a két igény közti eltérés háromnál
kisebb, akkor nincs sugárzás. Az első nap sugárzás nélküli.
Minden növény jellemzői: az egyedi neve (sztring), a rendelkezésre álló tápanyag mennyisége (egész),
hogy él-e (logikai). A szimulációban részt vevő növények fajtái a következők: puffancs, deltafa,
parabokor. A következőkben megadjuk, hogy az egyes fajták miként reagálnak a különböző
sugárzásokra. Először a tápanyag változik, és ha a növény ezután él, akkor befolyásolhatja a sugárzást.
Puffancs: Alfa sugárzás hatására a tápanyag mennyisége kettővel nő, sugárzás mentes napon a
tápanyag eggyel csökken, delta sugárzás esetén a tápanyag kettővel csökken. Minden esetben úgy
befolyásolja a másnapi sugárzást, hogy az 10 egységgel növeli az alfa sugárzás igényét. Ez a fajta
akkor is elpusztul, ha a tápanyag mennyisége 10 fölé emelkedik.
Deltafa: Alfa sugárzás hatására a tápanyag mennyisége hárommal csökken, sugárzás nélküli napon
a tápanyag eggyel csökken, delta sugárzás hatására a tápanyag néggyel nő. Ha a tápanyag
mennyisége 5-nél kisebb, akkor 4 egységgel növeli a delta sugárzás igényét, ha 5 és 10 közé esik,
akkor 1 értékben növeli a delta sugárzás igényét, ha 10-nél több, akkor nem befolyásolja a másnapi
sugárzást.
Parabokor: Akár alfa, akár delta sugárzás hatására a tápanyag mennyisége eggyel nő. Sugárzás
nélküli napon a tápanyag eggyel csökken. A másnapi sugárzást nem befolyásolja.
Szimuláljuk a növények viselkedését és adjuk meg, hogy x nap után melyik életben maradt egyed a
legerősebb! Minden lépésben írjuk ki az összes növényt a rájuk jellemző tulajdonságokkal, valamint
az aktuális sugárzást!
A program egy szövegfájlból olvassa be a szimuláció adatait! Az első sorban a növények száma szerepel.
A következő sorok tartalmazzák a növények adatait szóközökkel elválasztva: a növény nevét, a fajtáját
és a kezdetben rendelkezésére álló tápanyag mennyiségét. A fajtát egy karakter azonosít: p - puffancs,
d - deltafa, b - parabokor. A növényeket leíró részt követő sorban a szimuláció napjainak száma adott
egész számként. A program kérje be a fájl nevét, majd jelenítse is meg a tartalmát. (Feltehetjük, hogy
a fájl formátuma helyes.) Egy lehetséges bemenet:
4
Falánk p 7
Sudár d 5
Köpcös b 4
Nyúlánk d 3
10
