#VERSION 0
;
HUN POPUP HELP
1 "Ehhez az elemhez nem kapcsolódik súgótémakör.":
10 "Ezzel a mezõvel azonosíthatja, hogy az adott alkatrész melyik rendeléshez tartozik. A rendelések elsõ mûveleténél ez a PARENT értékre, míg a többi mûveletnél az egyedi rendelésszámra vagy -névre van állítva.":
40 "Ezzel a mezõvel azonosíthatja a cikkszámot. A gomb megnyomásakor a termékek adattáblájában szereplõ összes cikkszám megjelenik. Ha kiválaszt egy cikkszámot, a termék neve automatikusan megváltozik.":
41 "Ez a mezõ több különbözõ állapotot tartalmaz, amelyeket a rendelés viszonylatában meghatározhat. A rendszer a Rendelésállapot adattáblából nyeri ki az értékeket, amelybe szükség szerint felveheti az új állapotokat. A Rendelésállapot adattáblában mintát is beállíthat a mûveleti sávokhoz, amelynek segítségével meghatározhatja a rendelés mûveleti sávjának mintáját, amelyet a rendszer akkor használ, ha a rendelés bekerül a sorrendvezérlõbe.":
45 "Ez a mezõ a cikkszám azonosítására szolgál.":
50 "Ez a mezõ a termék nevének azonosítására szolgál. Ha a gomb segítségével kiválasztja a termék nevét, akkor a cikkszám automatikusan megváltozik.":
55 "Ez a mezõ a termék nevének azonosítására szolgál.":
60 "Ez a mezõ a termék rendelésszámának azonosítására szolgál. A rendelésszám lehet belsõ rendelésszám vagy egy, az ügyfél által meghatározott rendelésszám. A rendelésszámnak egyedi értéknek kell lennie.":
70 "Ez a mezõ a rendeléssel kapcsolatos megjegyzések írására szolgál. Ez lehet például a határidõkkel kapcsolatos megjegyzés, vagy egy egyszerû üzenet a gyártócsarnokban dolgozó csomagolók/összeszerelõk számára.":
75 "Megnyit egy párbeszédpanelt, amelyen a mûveletre vonatkozó attribútuminformációk láthatók.":
80 "Ennek a mezõnek a használatával határozhatja meg a feladat prioritását. A sorrendvezérlõ is ezt a sorrendet fogja alkalmazni. Minél kisebb a szám, annál nagyobb a prioritás. Ne feledje, hogy a prioritások negatív értéket is felvehetnek; a negatív prioritás nagyobb prioritást jelent a pozitív prioritásnál. A -100 például nagyobb prioritást jelent a -1-es prioritásnál, a 0 pedig nagyobb prioritást jelent a 10-es prioritásnál.":
90 "Ez a mezõ egy adott feladathoz tartozó mûveletszám megadására szolgál. A sorrendvezérlõ ez alapján határozza meg a feladat sorrendbeli helyét. Az alacsonyabb számú mûveleteket a rendszer a magasabb számú mûveletek elõtt végzi el. Ha egy termékhez két azonos mûveletszámú mûveletet is rendelnek, akkor a rendszer ezeket a mûveleteket mindig a magasabb számú mûveletek elõtt végzi el.":
110 "Ez az elvégzendõ mûvelet leírása vagy neve, azonosítása pedig a mûveletszámmal történik.":
112 "Megnyit egy párbeszédpanelt, amely a mûvelethez rendelt erõforrásadatokkal kapcsolatos információkat tartalmaz.":
120 "A beállítási csoportok a beállítási csoportok adattáblájában vannak meghatározva, például: 1. beállítási csoport, 2. beállítási csoport stb. Ezeket az értékeket a rendszer a sorrendfüggõ beállítási idõk mátrixának tengelyeiként használja. Ez a mátrix a különbözõ beállítási csoportokban (általában az erõforrásadatok táblázatban szereplõ beállítás) lévõ termékek közötti átállási idõ meghatározására szolgál. Az egyes beállítási csoportok a Termékadatok táblában szereplõ termékekhez vannak rendelve, bár ezek alapértelmezett értékét a rendszer felülírhatja a fõ ütemezési fájlban.":
130 "Ez a mezõ azokat az érvényes erõforrásokat azonosítja, amelyek alkalmasak az aktuális mûvelet elvégzésére.":
140 "Szükség esetén ez a mezõ használható annak a konkrét erõforrásnak az azonosítására, amelynek fel kell dolgoznia a mûveletet. Ha a termékadatok táblában ehhez a „Kiválasztás csoportból” lehetõség van beállítva, akkor az Erõforráscsoport mezõben látható bármely erõforrás használható. Ha a mûvelet a csoportban szereplõ adott erõforrással kívánja elvégezni, akkor a legördülõ menüben válassza ki a kívánt erõforrást.":
150 "Ez a mezõ mutatja azt az erõforrást, amely valójában feldolgozza a mûveletet. Ha a rendelés korábban még nem volt beütemezve, akkor a rendszer a „Nincs megadva” értéket állítja be. Ha a mûveletet korábban már betöltötték a tervezõtáblába, akkor a jelenleg betöltendõként beállított erõforrás fog megjelenni.":
180 "Ez a mezõ a feldolgozási sebesség meghatározásához használt mértékegységet jeleníti meg: idõ/köteg, idõ/elem vagy óránkénti mennyiség. Az „idõ/köteg” lehetõség kiválasztása esetén az alábbi mezõben látható idõ a kötegben lévõ összes alkatrész feldolgozásához szükséges idõt jelenti. Az „idõ/elem” lehetõség kiválasztása esetén a feldolgozási idõt az alábbi mezõben lévõ érték és a köteg méretének a szorzata adja meg. Az „óránként mennyiség” kiválasztása esetén a feldolgozási idõ meghatározása közvetlenül az adott órában feldolgozott elemek alapján történik.":
220 "A feldolgozási idõ típusaként jelenleg az „Idõ/elem” lehetõség van kiválasztva. Ebben a mezõben minden egyes tételhez meg kell adnia egy mûveleti idõt.":
230 "A feldolgozási idõ típusaként jelenleg az „Idõ/köteg” lehetõség van kiválasztva. Ebben a mezõben a köteg feldolgozásának teljes mûveleti idejét kell megadnia.":
240 "A feldolgozási idõ típusaként jelenleg az „Óránkénti mennyiség” lehetõség van kiválasztva. Ebben a mezõben az óránként feldolgozható elemek mennyiségét kell megadnia.":
251 "Az ebben a mezõben beállított szín arra utasítja a sorrendvezérlõt, hogy az egy másik színnel jelenítse meg a Gantt-diagram oszlopának egy részét. A rendszer a Köztes kötegmennyiség és a Köztes kötegidõ mezõkben megadott értékek alapján színezi be a sávot.":
260 "Ez a mezõ a rendelés vagy a köteg mennyiségének meghatározására szolgál.":
270 "Ez a mezõ a rendelés vagy a köteg nyereségének meghatározására szolgál, súlyozási szabály alkalmazásakor pedig a sorrendvezérlés befolyásolására is használható.":
280 "Ez a mezõ a rendelésben szereplõ elsõ mûvelet kezdési idejét mutatja, amennyiben a Termelési idõtartam funkció engedélyezve van":
290 "Ez a mezõ a rendelésben szereplõ utolsó mûvelet befejezési idejét mutatja, amennyiben a Termelési idõtartam funkció engedélyezve van":
300 "Ez az érték határozza meg azt a mennyiséget, amelyet mindenképp fel kell dolgozni ahhoz, hogy a következõ mûveletet el lehessen indítani. A „Nincs megadva” érték megakadályozza, hogy a mûveletek fedjék egymást.":
360 "Annak a dátumnak a meghatározására szolgál, amely elõtt a feladat nem indítható el. Ez lehet például az az idõpont, amikor az anyagok elérhetõvé válnak.":
370 "Ez a mezõ a határidõ beállítására szolgál. A „határidõ” lehetõség kijelölése esetén a határidõ a sorrendvezérlõben lévõ késedelmes elemek jelölésére, valamint a feladatok tervezõtáblába való betöltése fontossági sorrendjének meghatározására használható.":
380 "Ezzel a váltókapcsolóval azt jelezheti, hogy az ütemezõben látható kezdési és befejezési idõk ismert, fix értékek-e. Bekapcsolt váltókapcsoló esetén a rendszer megakadályozza, hogy a rendelést eltávolítsák a sorrendvezérlõben lévõ bármely erõforrásból.":
390 "Ezt a mezõt az ütemezõ állítja be a sorrendvezérlés során arra az idõpontra, amikor a feladatnak el kell indítania a beállítási folyamatot.":
400 "A sorrendvezérlés során az ütemezõ arra az idõpontra módosítja ezt a mezõt, amikorra a feladat indítása ütemezve van.":
410 "A sorrendvezérlés során az ütemezõ arra az idõpontra módosítja ezt a mezõt, amikorra a feladat befejezése ütemezve van.":
420 "Akkor kapcsolja be ezt a választókapcsolót, ha nem szeretné, hogy a munkát el lehessen távolítani a sorrendvezérlõben lévõ „Összes feladat kiosztásának visszavonása” lehetõség kiválasztását követõen. Ezzel zárolja a mûveletet. Ez a sorrendvezérlõben található „Zárolt mûveletek kiemelése” lehetõség használatával is elérhetõ. Ehhez vigye az egérkurzort egy mûveletre (ikon vagy sáv az áttekintésben), nyomja le a Shift billentyût, majd kattintson a bal egérgombbal.":
421 "Azok a mûveletek, amelyeknél ez a váltókapcsoló be van kapcsolva, az automatikus ütemezési mûveletek során „nem kiosztott” állapotban maradnak a nem kiosztott mûveletek ablakban.":
430 "Lehetõvé teszi, hogy felhasználó által definiálható jellemzõket (például színt) lehessen a termékekhez rendelni. Egy adott jellemzõn belül az attribútumrekordokhoz prioritási szintek rendelhetõk, például a „fehér” termékek magasabb prioritással rendelkeznek a „sárga” termékeknél. Ezeket az attribútumokat az ütemezõ preferált sorrendvezérlési szabályai használják a Tervezési ablakban lévõ hasonló rendelések összevonásához.":
440 "Adja meg a teljesített mennyiséggel kapcsolatos adatokat, a „Köztes kötegidõ” mezõben pedig adja meg a köteg adott részének teljesítéséhez szükséges idõt. Az ütemezõ ezt követõen automatikusan újraszámolja a mûvelethez tartozó befejezési idõt.":
450 "Adja meg a köteg adott részének teljesítéséhez szükséges idõt, a „Köztes kötegmennyiség” mezõben pedig adja meg az elkészült mennyiséget. Az ütemezõ ezt követõen automatikusan újraszámolja a mûvelethez tartozó befejezési idõt.":
460 "A rendszer a „Tényleges mûveleti idõ” mezõben a „Köztes kötegmennyiség” és a „Köztes kötegidõ” mezõkben megadott értékek segítségével kiszámítja az ezeken alapuló korrigált mûveleti idõt. Fontos megjegyezni, hogy a gyár megfelelõ mûködése érdekében a „Köztes kötegmennyiség” és a „Köztes kötegidõ” mezõkben szereplõ értékeket a sorrendvezérlõben használt szerkesztõ megjelenésekor módosítani kell, ellenkezõ esetben a „Tényleges mûveleti idõ” csak a sorrendvezérlõ következõ megnyitásakor módosul.":
474 "Arra szolgál, hogy meghatározza az elem költségét azon a ponton, amikor az elemet bevezetik a folyamatba. A mezõ az elemenkénti fix költségek rögzítésére szolgál, például külsõ fél által végzett hõkezelés stb.":
476 "Az Elemenkénti anyagköltséget használja a köteg abban a pontban érvényes anyagköltségének meghatározására, ahol az elemenkénti anyagköltséget bevezetik a folyamatba.":
477 "A feladat közvetlen költsége az aktuális folyamatban.":
530 "E funkció segítségével létrehozhat egy idõhorizontot, amelyben feladatkötegek hozhatók létre a termeléshez. Egy, a tervezõtáblán szereplõ mûveletet befejezõ erõforrás ettõl a ponttól tekint elõre a Tervezési ablak által létrehozott idõhorizonton. A rendszer az Erõforrások adattáblában meghatározott preferált sorrendvezérlési feltételek segítségével kiválasztja azokat a feladatokat, amelyek határideje erre az idõhorizontra esik. A Tervezési ablak a Termékek adattáblában minden egyes termékhez külön létrehozható, továbbá lehetõség van a fõ ütemezési fájlban szereplõ egyes megrendelések szerinti módosítására, sõt a Konfiguráció beállítási adatai részben globális szabályként is beállítható.":
540 "Ennek a Termékek adattáblában szereplõ beállításnak a segítségével elérhet egy, a termékkel kapcsolatos adatokat tartalmazó Word-dokumentumot. A dokumentum a fõ ütemezési fájl szerkesztõjébõl is elérhetõ és szerkeszthetõ.":
541 "Ez a mezõ egy adott mûvelet folyamatának leírására szolgál. Négy különbözõ fázis létezik: Nem indult el; Beállítás; Futtatás; Befejezve.":
550 "A termékekhez különbözõ jellemzõket lehet rendelni; az ütemezõben ezeket a jellemzõket az Attribútumadatok táblában találja. Ezeket a táblákat a felhasználók állíthatják be, például az 1. termékattribútum táblát fenntarthatják a színeknek, és az ebben szereplõ rekordoknak a „piros”, „kék”, „zöld” stb. nevet adhatják. A termékattribútumok a Termékadatok tábla „Hasonló elemek párosítása” mezõjében választhatók ki a „Hasonló elemek” beállítási idejének meghatározása érdekében.":
560 "Az 1. termékattribútum adattáblában szereplõ rekordok prioritási sorrendjének meghatározására szolgál, amelyet az APS-szabályok szerinti sorba rendezés alkalmaz.":
570 "A termékekhez különbözõ jellemzõket lehet rendelni; az ütemezõben ezeket a jellemzõket az Attribútumadatok táblában találja. Ezeket a táblákat a felhasználók állíthatják be, például a 2. attribútum táblát fenntarthatják az anyagoknak, és az ebben szereplõ rekordoknak az „acél”, „sárgaréz”, „vörösréz” stb. nevet adhatják. A termékattribútumok a Termékadatok tábla „Hasonló elemek párosítása” mezõjében választhatók ki a „Hasonló elemek” beállítási idejének meghatározása érdekében.":
580 "A 2. termékattribútum adattáblában szereplõ rekordok prioritási sorrendjének meghatározására szolgál, amelyet az APS-szabályok szerinti sorba rendezés alkalmaz.":
590 "A termékekhez különbözõ jellemzõket lehet rendelni; az ütemezõben ezeket a jellemzõket az Attribútumadatok táblában találja. Ezeket a táblákat a felhasználók állíthatják be, például a 3. attribútum táblát fenntarthatják az anyagok szélességének, és az ebben szereplõ rekordoknak a „16 cm”, „18 cm”, „20 cm”, „24 cm” stb. nevet adhatják. A termékattribútumok a Termékadatok tábla „Hasonló elemek párosítása” mezõjében választhatók ki a „Hasonló elemek” beállítási idejének meghatározása érdekében.":
600 "A 3. termékattribútum adattáblában szereplõ rekordok prioritási sorrendjének meghatározására szolgál, amelyet az APS-szabályok szerinti sorba rendezés alkalmaz.":
602 "Ez a mezõ számítja ki a teljes rendelés idõtartamát az elsõ mûvelet beállításának kezdési idõpontja és a rendelésben lévõ utolsó mûvelet befejezési idõpontja között.":
620 "Termékkibocsátási szabály, amely a határidõig hátralévõ idõt a feladat befejezéséig várhatóan eltelt idõvel elosztva meghatároz egy indexszámot. Az 1-es érték alatti szám azt jelzi, hogy a feladat lemaradásban van, míg az 1-nél nagyobb érték azt jelzi, hogy a feladat gyorsabban haladt az ütemtervhez képest.":
815 "Ezzel a lehetõséggel létrehozhatja a beállítási és a mûveleti idõkhöz használható értékeket. Ezenfelül a gyártórendszeren végbemenõ feladatok elõrehaladásának frissítésére is használható.":
1020 "Az erõforráscsoport nevének meghatározására szolgál. A név segítségével azonosíthatók a hasonló funkciók elvégzésére alkalmas erõforráscsoportok.":
1030 "Az erõforráscsoport érvényes erõforrásainak azonosítására szolgál. Az egyes erõforrások egynél több csoportba is tartozhatnak.":
1060 "Bekapcsolásakor ez a váltókapcsoló megjelenít egy, az erõforráscsoportra vonatkozó használati diagramot a sorrendvezérlõ többdiagramos ablakában.":
1070 "Ez a szín jelenik meg a sorrendvezérlõ többdiagramos ablakában látható használati diagramon.":
1080 "A sorrendvezérlõ többdiagramos ablakában látható használati diagram ezzel a színnel jelenik meg, amennyiben a használati órák száma meghaladja az adott erõforrás vagy erõforráscsoport esetén engedélyezett órák számát (ha a „Használat max. órái” mezõ értéke nincs meghatározva). Ha a „Használat max. órái” mezõ ki van töltve, a diagram színe ennek az értéknek az alapján változik meg.":
1090 "A sorrendvezérlõ többdiagramos ablakában látható használati diagram ezt a színt használja a beállítási mûvelet órákban mért hosszát ábrázoló vonal megrajzolásához.":
2020 "Az egyes erõforrások nevének meghatározására szolgál.":
2023 "Az erõforrás használatának óránkénti költsége.":
2024 "A fõ naptárrekordokban meghatározott „Költségtényezõ (%)” alkalmazása az erõforrás óránkénti költségére.":
2030 "Ez a párbeszédpanel az erõforrások vagy az erõforráscsoportok Sorrend áttekintése ablakban és a használati diagramokon használt megjelenítési módjával kapcsolatos információkat tartalmaz.":
2040 "A Látható, Kis méret vagy Letiltva lehetõségek közül választhat. Itt állíthatja be, hogy az erõforrás ablaka a sorrendvezérlõ elindításakor milyen kezdeti állapotban jelenjen meg. Alapértelmezésként a Kis méret lehetõség van beállítva. A Letiltva lehetõség kiválasztása esetén a rendszer nem használja az erõforrást a sorba állításhoz.":
2050 "A sorrendvezérlõben szereplõ Gantt-erõforrásablakok vízszintes tengelyének (idõ) szabályozására szolgál. A lépték a perctõl egészen a hétig terjedhet.":
2070 "Az erõforrás-kapacitásoknál a következõ lehetõségek beállítását teszi lehetõvé: Véges, Végtelen vagy Korlátlan, mûszakmintákkal.":
2071 "Az erõforrás-kapacitásoknál a következõ lehetõségek beállítását teszi lehetõvé: Véges, Végtelen vagy Korlátlan, mûszakmintákkal (korlátlan kapacitású sorrendvezérlõ üzemmód futtatásakor).":
2080 "A sorrendvezérlõ mozaikos erõforrásablakaiban lévõ vízszintes tengely (idõ) beállítására szolgál.":
2100 "Az elsõdleges erõforráson alkalmazandó másodlagos megkötések kiválasztására szolgál. Meghatározza az erõforrás által igényelt megkötések számát, illetve a megkötések elsõdleges erõforráson való alkalmazásának módját.":
2110 "Meghatározza, hogy mikor kell csökkenteni vagy növelni a másodlagos erõforrás használatát, például a „Növelés adott idõtartamig” mezõvel, amely a mûvelet idõtartama során végig használja a másodlagos megkötést, majd a mûvelet befejezésekor megszünteti annak használatát. Ha egy feladatot több mûvelet idejére egy rögzítõelembe helyeznek, az elsõ mûveletre vonatkozó „Növelés az indításkor” és az utolsó mûveletre vonatkozó „Csökkentés a befejezéskor” mezõket kell meghatározni. Ezzel biztosítható, hogy a rögzítõelemet ne lehessen több feladathoz használni, amíg az elsõ feladat egy erõforrásra várakozik.":
2120 "A másodlagos megkötés szükséges mennyiségét határozza meg. Ha a „Mennyiség” értékét választja ki, a szükséges mennyiség egyenlõ lesz a feldolgozás alatt lévõ köteg mennyiségével.":
2130 "A mûveletek egy olyan attribútumát határozza meg, amely megakadályozza, hogy eltérõ mûveleteket párhuzamosan hajtsanak végre egy végtelen kapacitás-erõforráson.":
2150 "APS-termékek esetén azoknak a kritériumoknak a meghatározására szolgál, amelyeket a preferált sorrendvezérlési szabályok a feldolgozandó feladat kiválasztásához használnak.":
2160 "Used in the APS produc, by 'Minimize WIP' scheduling rules, to establish time buffers in which WIP can accumulate, ahead selected resources.":
2180 "A rendszer ez alapján a numerikus érték alapján határozza meg, hogy az erõforrások milyen sorrendben jelenjenek meg az erõforrások adattáblában. Ezenfelül az erõforrások a sorrend áttekintésében használt alapértelmezett sorrendjének a felülírására is használható.":
2181 "Megjeleníti a speciális erõforrásmegkötés-beállítások meghatározására szolgáló párbeszédpanelt.":
2182 "Lehetõvé teszi, hogy a felhasználó kifejezések segítségével definiálja az erõforrások közötti összetett kapcsolatokat. A kifejezések szintaktikájával és létrehozásával kapcsolatos információkat a dokumentációban talál.":
2183 "Lehetõvé teszi, hogy a felhasználó kiválassza egy végtelen kapacitású erõforráshoz tartozó mûvelet egyik attribútumát, amely meghatározza, hogy egy adott idõpontban csak azokat a mûveleteket lehessen beütemezni, amelyeknél ez az attribútum ugyanazt az értéket veszi fel.":
2185 "Annak meghatározására szolgál, hogy megjelenjen-e egy elválasztóvonal a Gantt-diagramon lévõ erõforrás alatt. Ez a csoportokba rendezett erõforrások hatékonyabb megjelenítését teszi lehetõvé.":
2190 "A Sorrend áttekintése ablakban megjelenõ erõforrások megjelenítési módjának meghatározására szolgál. A következõ lehetõségek közül választhat: „Mindig”, „Csak csoport esetén” és „Elrejtés”.":
2191 "Meghatározza, hogy a mûveletek milyen módon jelenjenek meg a Sorrend áttekintése ablakban. A „Halmozott” beállítás használata esetén a mûveletek egy áttekintési soron jelennek meg, a „Lépcsõzetes” beállítás esetén pedig minden mûvelet saját áttekintési sort kap.":
2200 "Sorrendfüggõ beállítási értékek mátrixának létrehozására szolgál, amelyek meghatározzák, hogy mennyi beállítási idõ szükséges ahhoz, hogy a rendszer egy adott attribútumtípusú termékrõl egy más attribútumtípusú termékre váltson.":
2201 "Ez a mezõ határozza meg, hogy a rendszer melyik átállási csoportot rendelje ehhez az erõforráshoz, és ezzel azt is megszabja, hogy a különbözõ attribútumokkal rendelkezõ mûveletekre a rendszer melyik átállási idõket alkalmazza.":
2202 "Meghatározza, hogy a rendszer egyidejûleg vagy összesítve alkalmazza az erõforráshoz tartozó beállítási és átállási idõket.":
2205 "Ha bejelöli ezt a jelölõnégyzetet, a rendszer kivonja az erõforrást az ütemezés teljesítménymetrikáinak számításából.":
2210 "Ezzel a mezõvel választhatja ki, hogy az erõforrás melyik megjelenítõi rendszerhez tartozik. A mezõben a PCO-címtár adattáblából származó ütemezésirendszer-neveket tartalmazza.":
2220 "Ez a gomb egy párbeszédpanelt nyit meg, amely az erõforráshoz rendelt különbözõ attribútumokat tartalmazza.":
2230 "Ez a mezõ karakterláncattribútum-adatok megadását teszi lehetõvé az erõforráshoz.":
2240 "Ez a mezõ valósattribútum-adatok megadását teszi lehetõvé az erõforráshoz.":
2250 "Ez a mezõ idõtartamattribútum-adatok megadását teszi lehetõvé az erõforráshoz.":
2260 "Ez a mezõ határozza meg az erõforrás hatékonyságát. Az alapértelmezett érték 100%, ha a felhasználó ezt 200%-ra módosítja, az erõforrásra ütemezett mûveletek kétszer olyan gyorsan mennek végbe (a normál feldolgozási idõ fele alatt).":
2270 "Ha bekapcsolt állapotra állítja ezt a váltókapcsolót, a rendszer minden olyan mûveletre alkalmazza a Hatékonyság (%) mezõ értékét, amelyhez beállítási idõ tartozik, és a váltókapcsolóhoz tartozó erõforrásra van ütemezve.":
2280 "Bekapcsolásakor ez a váltókapcsoló megjelenít egy, az erõforrásra vonatkozó használati diagramot a sorrendvezérlõ többdiagramos ablakában.":
5035 "Költségtényezõ-szorzó, amely befolyásolja annak az erõforrásnak az üzemeltetési költségét, amelyre alkalmazzák. Ha az érték 100%, az nem jelent változást, a 150% azt jelenti, hogy az üzemeltetési költség 50%-kal nõtt. A fõ naptárfájlokban használt alapértelmezett értékeket a Naptárállapotok adattábla határozza meg.":
6100 "Megjelenít egy párbeszédpanelt, amelyben ki lehet választani, hogy a kiválasztott csoport mely erõforrásai érvényesek, és amely lehetõvé teszi az erõforrás-specifikus adatok hozzárendelését.":
6110 "Ez a mezõ határozza meg, hogy a rendszer kiválasztja-e az erõforrást az automatikus sorrendbe állítás során. Ha nem jelöli be, a mûveletet manuális lehet elhelyezni az erõforrásokon.":
6120 "Ezzel a mezõvel a mûvelet esetében érvényes összes erõforráshoz beállíthat egy egyéni beállítási idõt.":
6130 "Ezzel a mezõvel a mûvelet esetében érvényes összes erõforráshoz beállíthat egy egyéni mûveleti idõt.":
6131 "Ezzel a mezõvel a mûvelet esetében érvényes összes erõforráshoz beállíthat egy egyéni óránkénti mennyiséget.":
6132 "Ezzel a mezõvel a mûvelet esetében érvényes összes erõforráshoz beállíthat egy egyéni kötegidõt.":
6140 "Ezzel a mezõvel határozhatja meg az elsõdleges erõforrás által az aktuális mûvelet során használandó másodlagos erõforrást.":
6150 "Ezzel a mezõvel határozhatja meg a másodlagos megkötés használatának módját a mûvelet során (például Növelés adott idõtartamig, Csak a beállítási idõ növelése stb.).":
6160 "Ezzel a mezõvel adhatja meg, hogy a másodlagos megkötésbõl mennyire van szükség az aktuális mûveletben. Megadhatja például, hogy a mûvelethez egy tokmány szükséges.":
6170 "Az ütemezõ ennyi ideig fog próbálkozni betölteni az aktuális mûveletet az elsõdleges erõforrásba. Ha ez az adott idõn belül nem sikerül, az ütemezõ megpróbálja betölteni a mûveletet a csoport bármely más erõforrására.":
6180 "A „Következõ erõforráscsoport beállítása” létrehozza az adott csoportban lévõ erõforrások „kényszerlistáját”. Ez a funkció arra kényszeríti a késõbb mûveleteket, hogy csak a „kényszerlistában” szereplõ erõforrásokat használják. Ha a feldolgozási útvonal egy késõbbi mûvelete például olyan erõforráscsoportot ír elõ, amelynek egyes elemei nem szerepelnek a listán, a rendszer ezt nem fogja felhasználni a sorba rendezéshez. A „Következõ erõforráscsoport beállítása” egy kumulatív függvény, és a feldolgozási útvonal több mûveleténél is használható.":
6190 "A „Következõ erõforráscsoport alaphelyzetbe állítása” függvény eltávolítja a kiválasztott erõforráscsoportban szereplõ összes erõforrást a „Következõ erõforráscsoport beállítása” parancs által létrehozott „kényszerlistáról”. Ha a felhasználó létrehozott egy „Minden” típusú erõforráscsoportot, amelyben az összes elérhetõ erõforrás szerepelt, a késõbbi mûveletek az eredeti feldolgozási útvonalban beállított erõforrásokat fogják használni.":
6230 "Ezzel a mezõvel létrehozhat egy beállítási idõt, amely egy korábbi termékbõl az aktuális termékhez konvertálható. A Beállítási idõ mezõben szereplõ értékeket a rendszer hozzáadja az erõforráshoz a sorrendfüggõ beállítási idõk mátrixában szereplõ beállítási értékekhez.":
6430 "Válassza ki a kívánt ikon nevét a legördülõ menübõl. A szerkesztési gombbal új ikonokat is létrehozhat.":
6470 "Megjeleníti az „Érvényes másodlagos megkötések” párbeszédpanelt, amelyen az érvényes megkötéseket alkalmazhatja a táblában szereplõ egyes rekordokra. A megkötések használatának jellemzõit is itt módosíthatja.":
6530 "Meghatározza, hogy két egymást követõ mûvelet között legfeljebb mennyi idõ telhessen el. A maximális intervallumot az „Intervallumtípus” mezõ is minõsíti, hiszen ez határozza meg a „Kezdéstõl kezdésig”, „Befejezéstõl befejezésig” stb. kapcsolatokat.":
6540 "Meghatározza az egymást követõ mûveletek közé beilleszthetõ maximális idõtartam (amelyet a „Max. idõtartam a következõ mûveletig” mezõ határoz meg) viszonyát. Ez lehet „Befejezéstõl befejezésig”, „Befejezéstõl kezdésig”, „Kezdéstõl kezdésig” vagy „Kezdéstõl befejezésig”.":
6550 "Azt a maximális, az elméleti feldolgozási idõ százalékos értékében meghatározott idõt határozza meg, amennyi idõt egy mûvelet a sorrendvezérlõ által végzett automatikus sorrendvezérlés esetén igénybe vehet.":
6560 "Egy adott az adott mûvelet és az elõzõ mûvelet közötti ráhagyás beállítására szolgál.":
6565 "Az adott mûvelet és a következõ mûvelet közötti ráhagyás beállítására szolgál.":
6580 "Ebben a mezõben egy, a folyamat sebességére vonatkozó szorzót alkalmazhat a mûvelet hosszára.":
6681 "E mezõ segítségével adhatja meg a rekordnak azt az attribútumát, amelyre az egyik attribútumtábla hivatkozik. Ezekkel befolyásolni lehet a beállítási idõket, az ütemezési sorrendet és a megkötések használatát.":
6682 "Ezzel a mezõvel lehet szabad formátumú karakterlánc típusú attribútumot meghatározni ehhez a rekordhoz. Ezeket megjelenítési beállítások és csoportmûveletek beállítására használhatja.":
6683 "Ezzel a mezõvel lehet numerikus attribútumot meghatározni ehhez a rekordhoz. Ezeket a megjelenítési beállítások és a megkötés használatának beállítására, valamint az ütemezési sorrend befolyásolására használhatja.":
6684 "Ezzel a mezõvel lehet dátum típusú attribútumot meghatározni ehhez a rekordhoz. Ezeket megjelenítési beállítások megadására, valamint az ütemezési sorrend befolyásolására használhatja.":
6685 "Ezzel a mezõvel lehet idõtartam típusú attribútumot meghatározni ehhez a rekordhoz. Ezeket megjelenítési beállítások megadására, valamint az ütemezési sorrend befolyásolására használhatja.":
6690 "A Szállítási puffer mezõben szereplõ idõtartamot a rendszer levonja a határidõbõl, amikor visszafelé irányuló sorba rendezést végez. Így a mûveleteket a rendszer a legutolsó lehetséges idõ elõttre ütemezi. Ennek az a célja, hogy a folyamatban legyen elég idõ a váratlan késésekre.":
7020 "Az aktuális dátum elõtti napok száma, amelyeket szeretne megjeleníteni a Sorrend áttekintése ablakban.":
7030 "Az az idõtartam az aktuális dátum után, amelyeket szeretne megjeleníteni a Sorrend áttekintése ablakot.":
7035 "Megnyit egy konfigurációbeállítási párbeszédpanelt, amelynek segítségével a felhasználó testre szabhatja a Sorrend áttekintése ablakot.":
7040 "Meghatároz egy, a rendelés bevitelétõl számított eltolást, amely elõtt nem szabad elkezdeni a feladatokat. Ha Nincs megadva értékre állítja, a kezdést csak az aktuális dátum korlátozza.":
7050 "Meghatároz egy, a rendelés bevitelétõl számított eltolást, amelyen belül a feladatnak rendelkezésre kell állnia. Nem lehet felülírni.":
7060 "Az az idõtartam, amennyivel a végvonalat eltolták az aktuális dátumtól. A végvonal egyenlõ az aktuális dátummal, ha a végvonal eltolását 0 óra 00 percre állítják.":
7067 "Meghatározza a használandó költségszámítási módot, ami lehet: Sorrendvezérlés közben, Sorrendvezérlés után vagy Soha.":
7120 "A sorrend áttekintésének módját határozza meg.":
7130 "Azt határozza meg, hogy a sorrend áttekintésének kezdõdátuma az aktuális dátumtól hány napra legyen.":
7140 "Azt határozza meg, hogy a sorrend áttekintésének befejezési dátuma az aktuális dátumtól hány napra legyen.":
7320 "Lehetõvé teszi, hogy a rendelések importálásához szükséges parancsprogramot a „Parancsprogramok” adattáblából is ki lehessen választani.":
7330 "Lehetõvé teszi, hogy a rendelések exportálásához szükséges parancsprogramot a „Parancsprogramok” adattáblából is ki lehessen választani.":
7430 "Ezzel a funkcióval bekapcsolhat egy, a sorrendvezérlõ minden mûveleti sávjában megjelenõ kis fekete háromszöget. Így egyszerûbb elhúzni a tervezõtáblán elhelyezett mûveleteket, különösen a kisebb elemeket.":
7450 "Azt határozza meg, hogy mely PESP típusú esemény-parancsprogram fusson, amikor a felhasználó az Adatátvitel menü „Rendelések importálása” gombjára kattint.":
7470 "Azt határozza meg, hogy mely PESP típusú esemény-parancsprogram fusson, amikor a felhasználó az Adatátvitel menü „Rendelések exportálása” gombjára kattint.":
7480 "Azt határozza meg, hogy mely PESP típusú esemény-parancsprogram fusson, amikor a felhasználó az Adatátvitel menü „Ütemezés kibocsátása” gombjára kattint.":
7490 "Meghatározza, hogy melyik legyen az az alapértelmezett PESP típusú esemény-parancsprogram, amelyet a rendszer a sorrendvezérlõben a mûveletek kiosztására használ, ha az APS-szabályok funkció be van kapcsolva.":
8020 "Másodlagos megkötés neve.":
8030 "Ezzel a sorrendvezérlõ felhasználói diagramjának azt a színét választhatja ki, amelyet a rendszer akkor jelenít meg, ha az értékek a magas és az alacsony határértékek közé esnek.":
8040 "A diagramkitöltési minta beállítására szolgál.":
8060 "A diagram kitöltési színe abban az esetben, ha a diagram átlépi a felsõ határértéket.":
8080 "A diagram kitöltési színe abban az esetben, ha a diagram átlépi az alsó határértéket.":
8090 "Azt határozza meg, hogy ez a másodlagos megkötés megkösse-e az ütemezést, ha a felhasználó 300 FCS vagy magasabb értékû terméket használ. Ha nem jelöli be ezt a jelölõnégyzetet, a sorrendvezérlõ nem fog figyelmeztetést megjeleníteni, ha átlépi a másodlagos megkötéshez tartozó határértéket (ez a program összes verziójában így van).":
8091 "Ez a mezõ a korlátlan kapacitású sorrendvezérlõ módban használható. Azt határozza meg, hogy ez a másodlagos megkötés kösse-e meg az ütemezést, ha 300 FCS vagy magasabb értékû terméket használnak.":
8092 "A megkötés mûködésének szabályozásához használható lehetõségek, amennyiben a rendszer végtelen kapacitású módra van állítva.":
8100 "Azt határozza meg, hogy az elsõdleges erõforrásnaptár hatékonysága hogyan befolyásolja a másodlagos megkötés használatát. A következõ lehetõségek közül választhat: „Nincs hatás”, „Hatékonyság használata a feladat kezdetén”, „A hatékonyság változásainak követése”, „100% használata, ha nagyobb mint 0%”":
8101 "Végtelen kapacitású sorrendvezérlõ üzemmód esetén ez a mezõ azt határozza meg, hogy az elsõdleges erõforrásnaptár hatékonysága hogyan befolyásolja a másodlagos megkötés használatát. A következõ lehetõségek közül választhat: „Nincs hatás”, „Hatékonyság használata a feladat kezdetén”, „A hatékonyság változásainak követése”, „100% használata, ha nagyobb mint 0%”":
8120 "Ezzel a gombbal megnyithat egy párbeszédpanelt, amely a másodlagos megkötéshez rendelt különbözõ attribútumokat tartalmazza.":
8130 "Ez a mezõ karakterláncattribútum-adatok megadását teszi lehetõvé a másodlagos megkötéshez.":
8140 "Ez a mezõ valósattribútum-adatok megadását teszi lehetõvé a másodlagos megkötéshez.":
8150 "Ez a mezõ idõtartamattribútum-adatok megadását teszi lehetõvé a másodlagos megkötéshez.":
8160 "Ha bekapcsolt értékre állítják, ez a váltókapcsoló megjelenít egy, a másodlagos megkötésekre vonatkozó használati diagramot a sorrendvezérlõ többdiagramos ablakában.":
9020 "A csoportnevek beállítására szolgál. Ezek adják az Erõforrások adattáblában szereplõ sorrendfüggõ beállítási idõ mátrix X és Y tengelyét.":
12020 "Az 1. termékattribútum adattáblában lévõ attribútumrekord neve.":
13020 "A 2. termékattribútum adattáblában lévõ attribútumrekord neve.":
14020 "A 3. termékattribútum adattáblában lévõ attribútumrekord neve.":
16020 "A Fájlnév alatt mentett képernyõ-megjelenítési konfiguráció leírására szolgáló név. A rendszer ezt a leírást használja a munkaterületen lévõ eszköztár ikonjainak elemleírásaként.":
16030 "A fájlt a mezõtõl balra található gombbal lehet kiválasztani. Az eredeti munkaterület-konfiguráció fájljának (.WPI kiterjesztés) mentéséhez használja a sorrendvezérlõ menüjének Munkaterület részén található Munkaterület mentése parancsot.":
18510 "A rendelést leadó személy vagy szervezet neve.":
18520 "A rendelést leadó szervezet elsõdleges kapcsolattartójának neve.":
18530 "A rendeléssel kapcsolatban használandó telefonszám.":
18540 "A rendeléssel kapcsolatban használandó e-mail-cím.":
21000 "Ebben a mezõben eltérõ „rendelésállapot” adható meg; a rendelésekhez kapcsolódó rendelésállapot az ütemezési fájlban választható ki.":
21020 "Ez a mezõ a „Rendelésállapot neve” mezõben megadott rendelésállapot nevének magyarázatára szolgáló szöveg tárolására szolgál.":
21100 "Az Attribútum adattáblában szereplõ attribútumrekord neve.":
21110 "Az Attribútum adattáblában szereplõ rekordok közötti prioritási rangsor meghatározására szolgál. Az ütemezési szabályok is ezt a rangsort alkalmazzák.":
24000 "Ez a mezõ azt határozza meg, hogy a rekord a szabálykészlet fölé- vagy alárendelt rekordja-e.":
24010 "A szabálykészlet nevét tartalmazza.":
24020 "Ez a váltókapcsoló arra szolgál, hogy törölje azoknak a rendeléseknek az összetûzési hivatkozásait, amelyek a szabálykészlet elsõ meneténél a keresleti várólistában szerepelnek (attól függetlenül, hogy a menet engedélyezve van-e).":
24030 "A szabálymenet egy adott függvényének nevét adja meg.":
24040 "Ha igaz értékre állítja ezt a váltókapcsolót, azzal engedélyezi a szabálymenetet, ha pedig hamis értékre, a rendszer figyelmen kívül hagyja ezt a szabálymenetet a szabálykészlet futtatása során.":
24050 "Ha a váltókapcsoló igaz értékre van állítva, és a felhasználó lefuttatja a szabálykészletet, a rendszer létrehoz egy hibakeresési fájlt a munkakönyvtárban.":
24060 "Ez a mezõ annak a kritériumnak a meghatározására szolgál, amelynek alapján a rendszer képes eldönteni, hogy mely elemek kerüljenek a belsõ ellátási várólistára. A mezõ alapértelmezett beállítása az ÖSSZES, de ez különbözõ kifejezések segítségével bármikor módosítható, pl. (~{$Order Type}~==~Stock~). Ez a várólista a „Munkarendelések” adatbázisban lévõ rekordok szûrésére szolgál.":
24070 "Ez a mezõ a belsõ ellátási várólistán szereplõ elemek rangsorolásához használandó kritériumot tartalmazza. A belsõ ellátási várólistán szereplõ elemeket például határidõ, legkorábbi kezdési dátum vagy prioritás szerint is rangsorolhatja.":
24080 "Ez a mezõ annak a kritériumnak a meghatározására szolgál, amely alapján a rendszer képes eldönteni, hogy mely elemek kerüljenek a keresleti várólistára. A mezõ alapértelmezett beállítása az ÖSSZES, de ez külsõ kifejezések segítségével bármikor módosítható, pl. (~{$Order Type}~==~Stock~). Ez a várólista a „Munkarendelések” adatbázisban lévõ rekordok szûrésére szolgál.":
24090 "Ez a mezõ a keresleti várólistán szereplõ elemek rangsorolásához használható kritériumot tartalmazza. A keresleti várólistán szereplõ elemeket például határidõ, legkorábbi kezdési dátum vagy prioritás szerint is rangsorolhatja.":
24100 "Ez a mezõ azoknak a különbözõ standard összetûzési szabályoknak a listáját tartalmazza, amelyek a rendelések összetûzésére használhatók. Ezenfelül három speciális elemet is tartalmaz – Felhasználó által meghatározott, Felhasználói függvény és PESP-parancsprogram, amelyek segítségével további egyéni szabályok hozhatók létre.":
24110 "Ez a mezõ csak akkor látható, ha a „Szabálytípus” mezõben a „Felhasználó által meghatározott” vagy a „Felhasználói függvény” lehetõség van kiválasztva. A szabályhoz használni kívánt kifejezést ebben a mezõben kell megadni. Példa: (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~). A példában szereplõ kifejezés csak akkor engedélyezi az ellátási és a keresleti rendelések egymáshoz társítását, ha azok „1. termékattribútum” mezõjében ugyanaz az érték szerepel.":
24120 "Ez a mezõ csak akkor látható, ha a „Szabálytípus” mezõben a „PESP-parancsprogram” lehetõség van kiválasztva. A mezõ a szabályként használni kívánt PESP-parancsprogram nevét tartalmazza.":
24130 "Ez a funkció lehetõvé teszi, hogy olyan anyagjegyzéksorokra vonatkozó hivatkozásokat is létrehozzanak, amelyeknél az anyagjegyzék sorában szereplõ mennyiséget nem kötelezõ hiánytalanul teljesíteni. A rendszer azokat az elemeket, amelyekbõl nincs elegendõ, hiánycikként jelöli meg.":
24140 "Ezzel a funkcióval beállíthatja, hogy csak olyan anyagjegyzéksorokra vonatkozó hivatkozások hozzanak létre, amelyeknél az anyagjegyzék sorában szereplõ mennyiség hiánytalanul teljesült. A rendszer azokat az elemeket, amelyekbõl nincs elegendõ, hiánycikként jelöli meg.":
24141 "E beállítás kiválasztása esetén a rendszer felülírja az SMC alapértelmezett mûködését, és visszafelé hivatkozások is létrehozhatók, amennyiben a termelés a felhasználást követõen megy végbe.":
24150 "Ha igaz értékre állítják, a már beütemezett rendeléseknél ismét beállíthatók a hivatkozások.":
24160 "Ha igaz értékre állítják, az „Ellátási várólista rangsora” mezõ aktiválódik, ezzel lehetõvé téve az ellátási rekordok az „Ellátási várólista rangsora” mezõben megadott kritérium szerinti rangsorolását. Ez a lehetõség csak abban az esetben használható, ha minden rekord a „Munkarendelések” adatbázisban található.":
24170 "Ez a mezõ annak a kritériumnak a meghatározására szolgál, amelynek alapján a rendszer képes eldönteni, hogy mely elemek kerüljenek a külsõ ellátási várólistára. A mezõ alapértelmezett beállítása az ÖSSZES, de ez különbözõ kifejezések segítségével bármikor módosítható, pl. (~{$Order Type}~==~Stock~). Ez a várólista a „Kereslet” adatbázisban lévõ rekordok szûrésére szolgál.":
24180 "A rendszer az INHERIT FROM SUPPLY(Mezõ neve) besorolású összes mezõt feldolgozza.":
24190 "A rendszer az INHERIT FROM DEMAND(Mezõ neve) besorolású összes mezõt feldolgozza.":
24200 "Ha a váltókapcsoló be van kapcsolva, a „Keresleti várólista rangsora” mezõ aktiválódik, ami lehetõvé teszi az ellátási rekordok a „Keresleti várólista rangsora” mezõben megadott kritérium szerinti rangsorolását. Ez a lehetõség csak abban az esetben használható, ha minden rekord a „Munkarendelések” adatbázisban található.":
24210 "Ha igaz értékre állítja, a rendszer a létrehozott hivatkozáshoz tartozó mennyiséget a megadott szorzók szerint osztja ki. A szorzót az anyagjegyzékadatok határozzák meg.":
24500 "Ha bejelöli a „Mindig ezt a szabálykészletet használja” jelölõnégyzetet, az ebben a mezõben kiválasztott összetûzési szabálykészlet fog alapértelmezésként futni, amikor a felhasználó a sorrendvezérlõ „Anyagok összetûzése” funkcióját használja.":
24505 "E globális beállítás kiválasztása esetén a rendszer felülírja az SMC alapértelmezett mûködését, és visszafelé hivatkozások is létrehozhatók, amennyiben a termelés a felhasználást követõen megy végbe.":
24510 "Ha bejelöli, a rendszer a „Kiválasztott összetûzési szabálykészlet” mezõben megadott szabályt fogja alapértelmezett szabályként használni, amikor a felhasználó a sorrendvezérlõ „Anyagok összetûzése” elemét választja. Ha nincs bejelölve a „Mindig ezt a szabálykészletet használja” jelölõnégyzet, az „Anyagok összetûzése” funkció alkalmazásakor a rendszer megjeleníti a szabálykiválasztási párbeszédpanelt, amelyben a felhasználó kiválaszthatja a futtatni kívánt szabályt.":
25400 "Ez a mezõ a szállítói rendelések rendelésszámának rögzítésére szolgál.":
25410 "Ez a mezõ azonosítja a rendelés típusát (például Készlet vagy Vásárlás).":
25420 "A rendeléshez anyagokat szállító szervezet neve.":
25430 "A cikkszám, amelyre a rendelés vonatkozik.":
25440 "Az alkatrész leírása, amelyre a rendelés vonatkozik.":
25450 "Az anyagok beszállításának dátuma.":
25500 "Ezzel a mezõvel adja meg, hogy az alkatrész melyik rendeléshez tartozik. A rendelés elsõ sora lesz a fölérendelt rekord, és ebben a mezõben megjelenik a PARENT felirat. A többi rendelési sor alárendelt rekord lesz, ezeknél ebben a mezõben a kapcsolódó rendelés száma szerepel.":
25510 "Ez a mezõ a keresleti rendelések rendelésszámának rögzítésére szolgál.":
25520 "Ez a mezõ azonosítja a rendelés típusát (például biztonsági készlet vagy értékesítési rendelés).":
25530 "A rendelések sorelemeinek egyedi azonosítója.":
25540 "A rendeléshez tartozó anyagokat igénylõ szervezet neve.":
25550 "Az anyagok leszállításának várt dátuma.":
25560 "Az összetûzni kívánt elemek számát határozza meg. Gyakran elõfordul, hogy több azonos elem egy dobozba vagy ládába kerül. Példa: 1 dobozba 12 bödön kerül. Érkezik egy 60 bödönre szóló rendelés. A rendszerben van egy 50 bödönre szóló ellátási rendelés. A Preactor csak 48-at tûz össze az 50 bödönbõl, és a fennmaradó 12 bödönt máshol keresi meg, de ezeket csak akkor tûzi össze, ha pontosan 12 bödönt talál. A funkció használatához be kell kapcsolnia az „Összetûzési szabályok” adatbázis „Csak több elem kiosztása” mezõjét.":
25600 "Az a rendelési szám, amelyhez az anyagjegyzék sora tartozik.":
25605 "Annak a rendelésnek a cikkszáma, amelyhez az anyagjegyzék sora tartozik.":
25610 "Az a mûveletszám, amelyhez az anyagjegyzék sora tartozik.":
25611 "Annak a mûveletnek a neve, amelyhez az anyagjegyzék sora tartozik.":
25615 "Annak a terméknek a cikkszáma, amely a megadott anyagot igényli.":
25620 "Az anyagjegyzékelem cikkszáma.":
25630 "Az anyagjegyzékelembõl várt mennyiség.":
25640 "Ha igaz értékre állítja, a rendszer a rendelés mennyiségét felszorozza az anyagjegyzék szerinti szükséges mennyiséggel.":
25650 "Az összetûzési szabály futtatásakor a rendszer figyelmen kívül hagyja a hiánycikkeket. Lehetõvé teszi a hiánycikkeket tartalmazó rendelések beütemezését.":
25700 "A rendelés száma, amelynek keretében a közös termék gyártása történik.":
25705 "A rendelés cikkszáma, amelynek keretében a közös termék gyártása történik.":
25710 "A mûvelet száma, amelynek keretében a közös termék gyártása történik.":
25715 "A mûvelet neve, amelynek keretében a közös termék gyártása történik.":
25720 "A közös termék neve.":
25730 "A közös termékbõl elõállított mennyiség.":
25740 "Ha igaz értékre állítja, a rendszer a közös termék mennyiségét felszorozza a rendelési mennyiséggel.":
25800 "Ez a mezõ a rendelés típusának azonosítására szolgál, például: Munkarendelés, Megrendelés, Értékesítési rendelés vagy Raktárkészlet.":
25810 "Ha bejelöli, az adott nem ütemezett mûvelet nem fog többé megjelenni a „Nem ütemezett mûveletek” ablakban.":
25820 "Megjelenít egy párbeszédpanelt, amelyen az anyagellenõrzéssel kapcsolatos mezõk találhatók.":
25830 "Ez a mezõ a keresleti rendelés állapotára vonatkozó információkat jelenít meg az anyagok összetûzését követõen. A következõ értékeket tartalmazhatja: „Ismeretlen”, „Teljesítve”, „Minden hiány figyelmen kívül hagyva”, „Hiányok”, „Túltermelés”, „Túltermelés, hiányok”, „Túltermelés, Minden hiány figyelmen kívül hagyva”.":
25840 "Ezt a mezõt a rendszer az anyagok összetûzését követõen tölti ki. Ha megtörtént az összekapcsolás egy, az „Ellátási rendelések” adatbázisban szereplõ ellátási rendeléssel, a rendszer beírja a „Munkarendelések” adatbázis „Kereslet dátuma” mezõjébe az ellátási rendelés „Szállítási dátum” értékét. A Preactor összehasonlítja a „Szállítási dátum” mezõt és a „Legkorábbi kezdési dátum” mezõt, és a két dátum közül a késõbbit fogja használni az ütemezésben.":
25850 "Ezt a mezõt a rendszer az anyagok összetûzését követõen tölti ki. Ha megtörtént az összekapcsolás egy, a „Keresleti rendelések” adatbázisban szereplõ keresleti rendeléssel, a rendszer beírja a „Munkarendelések” adatbázis „Szállítási dátum” mezõjébe a kapcsolódó keresleti rendelés „Kereslet dátuma” értékét. A Preactor összehasonlítja a „Kereslet dátuma” mezõt és a „Határidõ” mezõt, és a két dátum közül a korábbit fogja használni az ütemezésben.":
25900 "Megjelenít egy párbeszédpanelt, amely a mûvelet állapotával kapcsolatos mezõket tartalmaz.":
25910 "Ezt a lehetõséget a felosztott rendeléseknél lehet használni. Lehetõvé teszi, hogy az egyes gyártási tételek önállóan haladjanak végig a gyártási folyamaton (azaz a következõ mûvelet elindulásához nem szükséges az, hogy az összes tétel egy mûveletben menjen végbe).":
25920 "Ez a mezõ határozza meg, hogy a rekord Gantt-diagramjának oszlopa milyen színt használjon.":
26000 "Ez a mezõ határozza meg az átállási csoport nevét.":
26100 "Ez a mezõ határozza meg, hogy a rendszer mennyi átállási idõt állítson be, amikor a megadott attribútum két egymás utáni mûvelet között megváltozik.":
26200 "A felhasználói eszköz megjelenített neve.":
26210 "Az az esemény-parancsprogram, amelyet a felhasználói eszköz kiválasztása esetén futtatni kell.":
26220 "A felhasználói ablak eszközmenüjének neve.":
26230 "A felhasználói ablak kitöltésére használt kódfüggvény.":
26240 "a felhasználó ablak címkéje":
26300 "A menügomb neve. Arra is utal, hogy a gomb hol fog megjelenni a menürendszerben.":
26310 "Ez a mezõ határozza meg, hogy engedélyezve van-e a gomb, és így azt is, hogy a gomb megjelenik-e.":
26320 "Ez a mezõ határozza meg a gombon megjelenõ szöveget.":
26330 "Az az esemény-parancsprogram, amelyet a menügomb kiválasztása esetén futtatni kell.":
;
