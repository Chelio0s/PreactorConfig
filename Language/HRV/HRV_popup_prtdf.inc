#VERSION 0
;
HRV POPUP HELP
1 "Nema uputa poveznih s ovom stavkom.":
10 "Polje služi za identifikaciju naloga kojem dio pripada. U prvoj operaciji naloga ovo polje ima vrijednost 'nadreðeni zapis' (parent), a u ostalim operacijama je postavljeno na jedinstveni broj ili ime naloga.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Ovo polje sadrži listu razlièitih statusa koji se mogu definirati za nalog. Vrijednosti su uzete iz tablice statusa naloga, gdje se prema potrebi može dodati novi status. Uzorak (šrafura) trake operacije, postavljen u tablici statusa naloga za svaki status, može se koristiti za definiranje uzorka trake operacije kad je operacija rasporeðena u sekvenceru.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "Ovo polje sadrži broj naloga ovog proizvoda. Broj naloga može biti interni ili klijentov broj naloga. Broj naloga mora biti jedinstven.":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Ovo polje definira prioritet posla koji æe biti korišteni u sekvenceru. Što je manji broj, to je veæi prioritet.Prioriteti mogu biti negativni; negativni prioritet je veæi nego pozitivan. Npr. -100 je veæi prioritet od -1, a 0 je veæi prioritet od 10.":
90 "Polje postavlja broj operacije. To se koristi za zadavanje redoslijeda poslova u sekvenceru. Operacije s manjim brojem æe biti završene prije poèetka operacija s veæim brojem. Ako postoje dvije operacije proizvoda s istim brojem, tada æe obje biti završene prije poèetka operacija s veæim brojem.":
110 "Ovo je pisani opis ili ime operacije koja se izvodi (takoðer identificirano i brojem operacije).":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Grupe pripreme su definirane u tablici Grupe pripreme (npr. Grupa pripreme 1, Grupa pripreme 2 itd.). Ove vrijednosti se koriste kao osi jedne od matrica sa pripremnim vremenima koja su ovisna o rasporedu. Ove matrice definiraju vremena promjene izmeðu proizvoda razlièitih grupa pripreme (obièno odreðene u tablici resursa). Pojedine grupe pripreme se dodjeljuju proizvodima u tablici proizvoda, ali ova uobièajena vrijednost može biti prepisana u datoteci glavnog rasporeda. ":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Ako je potrebno, ovo polje se može koristiti za identifikaciju specifiènog resursa koji treba izvršiti operaciju. Ako je u tablici proizvoda ovo polje postavljeno na 'Odaberi iz grupe' tada se može koristiti bilo koji resurs iz grupe. Ako se želi prisiliti operaciju na specifièni resurs, tada je iz padajuæe liste potrebno odabrati zahtjevani resurs.":
150 "Ovo polje æe prikazati stvarni resurs na kojem æe se izvršiti operacija. Ako nalog prethodno nije bio rasporeðen, ovo polje æe biti postavljeno na 'Nespecificirano'. Ako je operacija veæ uèitana na plansku tablu, tada æe biti prikazan resurs na kojem æe se izvršiti operacija.":
180 "Ovo polje se koristi za utvrðivanje je li obradno vrijeme izraèunato kao vrijeme po seriji, kao vrijeme po komadu ili kao broj komada na sat. Ako je odabrano 'vrijeme po seriji', tada je vrijeme prikazano u polju ispod vrijeme potrebno za obradu svih komada u seriji serije. Ako je odabrano 'vrijeme po komadu' tada se vrijeme obrade u polju ispod množi s velièinom serije. Ako je odabrano 'komada na sat', tada æe vrijeme obrade biti izraèunato direktno iz broja u seriji.":
220 "Trenutno je odabran tip procesnog vremena 'Vrijeme po komadu'. Za svaku stavku u ovom polju potrebno je upisati vrijeme operacije.":
230 "Trenutno je odabran tip procesnog vremena 'Vrijeme po seriji'. U ovo polje se mora upisati ukupno vrijeme operacije za seriju.":
240 "Trenutno je odabran tip procesnog vremena 'Cijena po satu'. U ovo polja se mora upisati kolièina koja se može proizvesti u satu.":
251 "Boja u ovom polju odreðuje sekvenceru prikaz sekcije trake gantograma u drukèijoj boji. Boja oznaèava traku ovisno o vrijednosti unešenoj u polja Kolièina meðušarže i Vrijeme meðušarže.":
260 "Ovo polje specificira kolièinu naloga ili serije.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "Koristi se za zadavanje datuma prije kojeg izrada ne može poèeti. To npr. može biti vrijeme kad æe materijal biti dostupan.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Odaberite ovaj prekidaè kako bi rasporeðivaèu ukazali da koristi vrijednosti poèetka i kraja kao fiksno zadane vrijednosti. Kad je postavljen, ovaj prekidaè sprjeèava da se nalog ukloni s rasporeda. Zapravo, nalog je trajno fiksiran na planskoj tabli.":
390 "Tijekom rasporeðivanja, rasporeðivaè postavlja ovo polje na vrijeme poèetka pripreme zadatka.":
400 "Tijekom rasporeðivanja u ovo polje se upisuje planirano vrijeme poèetka zadatka.":
410 "Tijekom rasporeðivanja rasporeðivaè u ovo polje upisuje planirano vrijeme završetka zadatka.":
420 "Set this toggle if you do not wish this job to be unallocated after selecting Unallocate All Jobs in the sequencer. This will lock the operation. This can also be achieved when using 'Highlight Locked Operations' locate mode in the Sequencer by pointing with the mouse at an operation (icon or bar in the overview), depressing the shift key on the keyboard and clicking with the left mouse button.":
421 "Operacije koje imaju ukljuèen ovaj prekidaè biti æe (prilikom automatskog rasporeðivanja operacija) ostavljene nerasporeðene u prozoru nerasporeðenih operacija.":
430 "Omoguæava pridjeljivanje korisnièki definiranih svojstava proizvodu, npr. boja. U okviru specifiènih karakteristika, zapisima atributa se dodjeljuju prioriteti, npr. 'bijeli' proizvodi mogu imati veæi prioritet nego 'žuti'. Te atribute koristi pravilo rasporeðivanja po preferiranom redosljedu, uzimajuæi u obzir sliène naloge koji slijede unutar zadanog perioda.":
440 "Unesi se podatak o završenoj kolièini, a u polje 'Vrijeme meðušarže' unosi se vrijeme kada je završen dio serije. Rasporeðivaè æe automatski reizraèunati novo vrijeme završetka preostalog dijela operacije.":
450 "Unosi se vrijeme kada je završena meðušarža, a u polje 'Kolièina meðušarže' se unosi do tada završena kolièina. Rasporeðivaè æe automatski reizraèunati novo vrijeme završetka preostalog dijela operacije.":
460 "Efektivno vrijeme op. je polje koje koristi podatke 'Kol. izmeðu šarži' i 'Vrijeme izmeðu šarži' za izraèun revidiranog vremena operacije baziranog na ovim informacijama. Za ispravan rad, 'Vrijeme izmeðu šarži' i 'Kolièina izmeðu šarži' treba promijeniti u ureðivaèu prikazanom u sekvenceru. U suprotnom, 'Efektivno vrijeme op.' æe se promijeniti samo kod slijedeæeg pokretanja sekvencera.":
474 "Koristi se za bilježenje troška stavke u trenutku ulaska u proces. Polje se može koristiti za bilježenje fiksnih troškova po stavci, kao npr. trošak podizvoðaèa i sl.":
476 "Koristi 'Trošak materijala po stavci' za odreðivanje materijalnih troškova šarže na mjestu gdje trošak po stavci ulazi u proces.":
477 "Direktni trošak izrade u tekuæem procesu.":
530 "Odreðuje vremenski horizont u kojem zadaci mogu biti grupirani za proizvodnju. Resurs koji završava operaciju na planskoj tabli æe od ove toèke gledati onoliko unaprijed koliko je zadano u 'prozoru pogleda unaprijed'. Preferirani kriterij rasporeda, postavljen u tablici resursa, primjenjuje se za odabir zadataka èiji rok ulazi u taj vremeski horizont. Prozor pogleda unaprijed može se postaviti prema pojedinim proizvodima u tablici proizvoda i može se modificirati za pojedine naloge u glavnom rasporedu ili može biti definirana kao globalna ruta u informacijama postavki konfiguracije.":
540 "Upisano u tablicu proizvoda, omoguæava pristup Word dokumentu koji sadrži informacije vezane uz proizvod. Dokumentu se takoðer može pristupiti te se dokument može ureðivati preko ureðivaèa datoteke glavnog rasporeda.":
541 "Ovo polje opisuje napredak pojedine operacije. Postoje èetiri razlièita stanja napretka: Nije zapoèeta, Priprema, U tijeku, Završena":
550 "Proizvodi mogu imati odreðene karakteristike, koje su u rasporedu smještene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut proizvoda 1 može biti rezervirana za boju pri èemu se u pojedini red upisuju imena - crvena, zelena, itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovarajuæih sliènosti (Like To Like Match) kako bi se definirala slièna pripremna vremena.":
560 "Koristi se za rangiranje prioriteta izmeðu zapisa tablice atributa proizvoda 1, koji koristi odabir APS pravila redoslijeda.":
570 "Proizvodi mogu imati odreðene karakteristike, koje su u rasporedu smještene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut 2 može biti rezervirana za materijale i u kojoj se u pojedini red upisuju imena - èelik, bronca, bakar, itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovarajuæih sliènosti (Like To Like Match) kako bi se definirala slièna pripremna vremena.":
580 "Koristi se za rangiranje prioriteta izmeðu zapisa tablice atributa proizvoda 2, koji koristi odabir APS pravila redoslijeda.":
590 "Proizvodi mogu imati odreðene karakteristike, koje su u rasporedu smještene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut 3 može biti rezervirana za visine materijale i u kojoj se u pojedini red upisuju dimenzije - 16', 18', 20', 24', itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovarajuæih sliènosti (Like To Like Match) kako bi se definirala slièna pripremna vremena.":
600 "Koristi se za rangiranje prioriteta izmeðu zapisa tablice atributa proizvoda 3, koji koristi odabir APS pravila redoslijeda.":
602 "Polje raèuna trajanje kompletnog naloga, od pripreme prve operacije do kraja posljednje operacije naloga. ":
620 "Pravilo otpremanja po kojem se raèuna indeks koji je omjer preostalog vremena do roka isporuke i oèekivanog vremena potrebnog za završetak posla. Omjer manji od 1 govori da posao kasni, a veæi od 1 da æe proizvod biti gotov prije planiranog vremena.":
815 "Ova opcija omoguæava postavljanje vrijednosti pripremnog vremena i vremena operacije. Ujedno se koristi za ažuriranje napretka posla kroz proizvodni sustav.":
1020 "Specificira ime grupe resursa. Koristiti æe se za identifikaciju specifiènih grupa resursa, sposobnih za izvoðenje sliènih funkcija.":
1030 "Identificira važeæe resurse u grupi resursa. Resurs može biti èlan više grupa.":
1060 "Kad je ukljuèen, ovaj prekidaè æe prikazati dijagram korištenja za grupu resursa u prozoru dijagrama.":
1070 "Ova boja æe se prikazati u dijagramu korištenja vidljivom u prozoru dijagrama.":
1080 "Dijagram korištenja, prikazan u prozoru dijagrama sekvencera, pokazati æe ovu boju kad korištenje prelazi dostupni broj sati resursa ili grupe resursa (ako je Max. sati iskorištenja postavljeno na nespecificirano). Ako se u polje Max. sati iskorištenja unese vrijednost, tada æe dijagram promijeniti boju sukladno toj vrijednosti.":
1090 "Dijagram korištenja, u prozoru dijagrama sekvencera, æe koristiti ovu boju za crtanje linije koja oznaèava upotrebu pripremnog vremena u satima.":
2020 "Specificira ime pojedinog resursa.":
2023 "Trošak po satu rada resursa.":
2024 "Na trošak po satu resursa primjenjuje vrijednosti 'Faktor troška %' iz zapisa glavnog kalendara (Master Calendar Records).":
2030 "Ovaj dijaloški okvir nosi informacije o naèinu prikaza resursa ili grupe resursa na pregledu sekvencera i u dijagramima korištenja.":
2040 "Može se postaviti na Vidljivo, Minimizirano ili Iskljuèeno. Koristi se kontrolu inicijalnog stanja prozora resursa prilikom pokretanja sekvencera. Obièno je postavljeno na Minimizirano. Ako je Iskljuèeno, resurs se neæe koristiti u rasporeðivanju.":
2050 "Kontrolira vodoravnu (vremensku) skalu gantograma prozora resursa u sekvenceru. Može varirati od minuta do tjedana po jedinici.":
2070 "Omoguæava postavljanje kapaciteta resursa na Konaèni, Beskonaèni ili Beskonaèni sa smjenskim uzorkom.":
2071 "Omoguæava postavljanje kapaciteta resursa na Konaèni, Beskonaèni ili Beskonaèni sa smjenskim uzorkom kada sekvencer radi u modu beskonaènih kapaciteta.":
2080 "Kontrolira vodoravnu (vremensku) skalu stupèasto rasporeðenih prozora prikaza resursa u sekvenceru.":
2100 "Odabire sekundarno ogranièenje koje æe se primijeniti na primarni resurs. Odreðuje se kolièina ogranièenja koja je potrebna za izvršenje operacije na primarnom resursu i naèin na koji se ogranièenje primjenjuje na primarni resurs.":
2110 "Odreðuje kad æe se korištenje sekundarnog resursa poveæati ili smanjiti, npr. 'Poveæanje za vrijeme trajanja' koje koristi sekundarno ogranièenje tijekom tijekom trajanja operacije i oslobaða ga završetkom operacije.   Ako se više operacija nekog naloga obavlja kontinuirano koristeæi sekundatni resurs (npr. kalup), za prvu operaciju se može odabrati 'Poveæanje na poèetku', a za zadnju 'Smanji na kraju'. To æe osigurati da taj sekundatrni resurs (nar. kalup) ne može koristiti za druge operacije dok se ovaj niz operacija ne završi (bez obzira što u nizu meðu operacijama ima vremenskog razmaka).":
2120 "Specificira potrebnu kolièinu sekundarnog ogranièenja. Ako je odabrana 'Kolièina', potrebna kolièina je jednaka kolièini serije koja se obraðuje.":
2130 "Definira atribut operacije koji æe sprijeèiti istovremeno izvoðenje operacija koje nisu sliène (u smislu atributa) na beskonaènom kapacitetu resursa.":
2150 "Koristi se u APS proizvodima, za utvrðivanje kriterija koji æe se koristiti za željena pravila redoslijeda u odabiru posla za obradu.":
2160 "Koristi se u APS proizvodima (pravilo rasporeda 'Minimiziraj proizvodnju u tijeku'), za utvrðivanje vremenskih bafera u kojima se može akumulirati proizvodnja u tijeku, ispred odabranog resursa.":
2180 "Brojèana vrijednost koja se koristi za sortiranje resursa prikazani u tablici resursa. Takoðer se može koristiti kako bi se pregazio uobièajeni redoslijed po kojem su resursi prikazani u pregledu sekvencera.":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Odreðuje naèin na koji æe se resursi prikazati u pregledu sekvencera. Opcije su 'Uvijek', 'Samo u grupi' i 'Sakrij'.":
2191 "Odreðuje se prikaz operacija u sekvenceru. Opcije su 'Slijedno' gdje su operacije prikazane u jednoj liniji, i 'Kaskadno' gdje svaka operacija ima svoju liniju prikaza.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "Ukljuèivanjem ove opcije resurs se iskljuèuje iz izraèuna performansi rasporeda.":
2210 "Ovo polje služi za odabir Preactor Viewer sustava kojem resurs pripada. Polje sadrži listu Preactor sustavskih imena rasporeðivaèa koji je uzet iz tablice PCO adresara.":
2220 "Ovaj gumb otvara dijaloški okvir s razlièitim svojstvima resursa.":
2230 "Ovo polje omoguæava u resurs upis podatka atributa alfanumerièkog tipa.":
2240 "Ovo polje omoguæava u resurs upis podatka atributa tipa realan broj.":
2250 "Ovo polje omoguæava u resurs upis podatka atributa tipa trajanje.":
2260 "Ovo polje oznaèava uèinkovitost resursa. Zadana vrijednost je 100%. Ako se zada uèinkovitost npr. 200%, onda se bilo koja operacija rasporeðena na ovaj resurs izvršava dvostruko brže (pola redovnog vremena trajanja).":
2270 "Ovo polje je prekidaè koji æe, ako je ukljuèen, primijeniti vrijednost polja Efikasnost % na sve operacije koje imaju pripremna vremena i rasporeðena su na resurs na kojem je prekidaè ukljuèen.":
2280 "Kad je ukljuèen, ovaj prekidaè æe prikazati dijagram korištenja za resurs u prozoru dijagama (multi plot window) u sekvenceru.":
5035 "Multiplikator faktora troška, koji utjeèe na tekuæe troškove resursa na koji se primjenjuje. Vrijednost 100% znaèi da nema poveæanja, vrijednost 150% poveæava tekuæe troškove za 50%. Podatak je u upisan u tablicu stanja kalendara te predstavlja uobièajenu vrijednost korištenu u datoteci glavnog kalendara.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Ovo polje specificira kako se koristi sekudnarno ogranièenje tijekom operacije, npr. Poveæanje trajanja, Samo prirast pripremnog vremena, itd.":
6160 "Ovo polje definira kolièinu sekundarnog ogranièenja potebnu na trenutnoj operaciji. Npr., može se specificirati da operacija treba jedan alat za obradu.":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "'Slijedeæa grupa resursa' formira 'forsiranu listu' resursa, npr. onih koji su specificirani u odabranoj grupi. Time se 'forsira' operacije koje slijede na korištenje samo onih resursa koji se nalaze na toj 'forsiranoj listi'. Dakle, ako ruta procesa koristi grupu resursa na operacijama koje slijede i koje trebaju neke resurse koji nisu èlanovi liste, to se neæe koristiti prilikom rasporeðivanja. 'Slijedeæa grupa resursa' je kumulativna funkcija i može se koristiti za više operacija u ruti, dodavajuæi resurse na 'forsiranu listu'.":
6190 "'Resetiraj slijedeæu grupu resursa' mièe resurse sadržane u odabranoj grupi resursa s 'forsirane liste' postavljene komandom Postavi slijedeæe grupe resursa. Ako je oformljena konceptualna grupa resursa, 'Svi', u kojoj su svi raspoloživi resursi, resursi koji se koriste u slijedeæim operacijama æe se postaviti u originalnu rutu procesa.":
6230 "Ovo polje omoguæava zadavanje pripremnog vremena (prebacivanje sa proizvodnje  prethodnog proizvoda na trenutni). Vrijednosti u polju 'Pripremno vrijeme' biti æe dodane na vrijednost pripreme zadane za resurs u matrici 'Pripremna vremena ovisna o redoslijedu'.":
6430 "Odaberite ime ikone iz padajuæe liste. Gumb Uredi omoguæava kreiranje nove ikone. ":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Definira maksimalni vremenski interval dozvoljen izmeðu dvije rasporeðene operacije. Znaèenje ovdje zadanog intervala odreðeno je poljem 'Tip intervala' koje definira relacije ('Od poèetka do poèetka' i 'Od kraja do kraja' itd.)":
6540 "Definira znaèenje maksimalnog vremenskog intervala izmeðu dvije slijedne operacije koje je zadano u polju 'Max. vrijeme prije slijedeæe op.'. Može biti 'Od kraja do kraja', 'Od kraja do poèetka', 'Od poèetka do poèekta' ili 'Od poèetka do kraja' relacija.":
6550 "Specificira max. kolièinu vremena, prikazanu kao postotak teoretskog proizvodnog vremena, za koliko se operacija može produžiti prilikom automatskog rasporeðivanja.":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Polje zaštitnog vremena isporuke sadrži zaštitno vrijeme koje se oduzima od roka isporuke prilikom rasporeðivanja unatrag tako da su operacije planirane ranije od zadnjeg moguæeg vremena. Time se omoguæava da nepredviðena kašnjenja u procesu ne remete plan.":
7020 "Broj dana prije trenutnog vremena koji se prikazuju u pregledu sekvencera.":
7030 "Vremenski period nakon trenutnog vremena koji se prikazuje u pregledu sekvencera.":
7035 "Otvara dijaloški okvir postavki koji omoguæava prilagodbu pregleda sekvencera.":
7040 "Specificira vremenski pomak, od vremena unosa naloga, prije kojeg nije moguæe zapoèeti rad na nalogu. Ako je postavljeno na Nespecificiranom, tada nema drugih ogranièenja osim trenutnog vremena.":
7050 "Specificira vremenski pomak, od vremena unosa naloga, do kojeg posao treba biti dostupan. Može se prepisati drugim podatkom.":
7060 "Kolièina vremena za koliko je pomaknut graniènik u odnosu na trenutno vrijeme. Graniènik predstavlja trenutno vrijeme ako je pomak graniènika 0 sati 00 min.":
7067 "Postavlja opcije kalkulacije troškova. Može biti: Tijekom rasporeðivanja, Nakon rasporeðivanja ili Nikad.":
7120 "Postavlja mod pregleda sekvencera.":
7130 "Broj dana od danas do poèetka pregleda sekvencera.":
7140 "Broj dana od danas do kraja pregleda sekvencera.":
7320 "Omoguæava odabir skripte (iz tablice 'Skripte') potrebne za uvoz naloga ":
7330 "Omoguæava odabir skripte (iz tablice 'Skripte') potrebne za izvoz naloga.":
7430 "Ovaj prekidaè ukljuèuje mali crni trokut na svakoj traci operacije sekvencera. Time se olakšava pomicanje operacija po planskoj tabli, pogotovo malih (kratkih) operacija.":
7450 "Specificira uobièajenu PESP skriptu dogaðaja koja æe se pokrenuti prilikom uvoza naloga preko gumba 'Uvezi naloge' na izborniku razmjene podataka.":
7470 "Specificira uobièajenu PESP skriptu dogaðaja koja æe se pokrenuti prilikom izvoza naloga preko gumba 'Izvezi naloge' na izborniku razmjene podataka.":
7480 "Specificira uobièajenu PESP skriptu dogaðaja koja æe se pokrenuti prilikom puštanja rasporeda preko gumba 'Pusti raspored' na izborniku razmjene podataka.":
7490 "Specificira uobièajenu PESP skriptu dogaðaja koja æe se pokrenuti prilikom alociranja operacija u sekvenceru s ukljuèenom opcijom APS pravila.":
8020 "Ime sekundarnog ogranièenja.":
8030 "Omoguæava izbor boje sekvencerovog dijagrama iskorištenja kad su vrijednosti unutar gornje i donje granice.":
8040 "Definira uzorke ispune dijagrama.":
8060 "Boja ispune dijagrama ako dijagram prelazi gornji limit.":
8080 "Boja ispune dijagrama ako dijagram prelazi ispod donjeg limita.":
8090 "Specificira da li æe ovo sekundarno ogranièenje ogranièiti raspored kad se koristi verzija 300 FCS ili viša verzija. U svim verzijama, ako ova opcija nije odabrana to æe sprijeèiti izdavanje upozorenja ako su limiti sekundarnog ogranièenja prekoraèeni.":
8091 "Kada sekvencer radi u modu beskonaènih kapaciteta, ovo polje odreðuje kako efikasnost kalendara primarnog resursa utjeèe na upotrebu ovog sekundarnog ogranièenja. Opcije su: bez utjecaja, poèetna efikasnost, prati promjene efikasnosti, upotreba 100% ako je veæe od 0%.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Odreðuje kako efikasnost kalendare primarnog resursa utjeèe na korištenje sekundarnog ogranièenja. Opcije su: Ne utjeèe, Efikasnost na poèetku posla; Prati promjene efikasnosti; Koristi 100% ako je veæe od 0%":
8101 "When in Infinite Capacity Sequencer Mode, this field will determine how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8120 "Ovaj gumb otvara dijaloški okvir koji pokazuje razlièite atribute vezane uz sekundarna ogranièenja.":
8130 "Ovo polje omoguæava unos tekstualnih atributa za sekundarno ogranièenje.":
8140 "Ovo polje omoguæava unos brojèanog atributa za sekundarno ogranièenje.":
8150 "Ovo polje omoguæava unos atributa trajanja za sekundarno ogranièenje.":
8160 "Kad je ukljuèen, ovaj prekidaè æe pokazati dijagram korištenja za sekundarno ogranièenje u prozoru dijagrama.":
9020 "Imena Grupa pripreme, koje formiraju X i Y osi matrice pripremnih vremena koje su ovisne o rasporedu (definirano u tablici resursa).":
12020 "Ime zapisa atributa u tablici Artibuti proizvoda 1.":
13020 "Ime zapisa atributa u tablici Atributi proizvoda 2.":
14020 "Ime zapisa atributa u tablici Atributi proizvoda 3.":
16020 "Ime koje se koristi kao opis konfiguracije ekranskog prikaza spremljene u Ime datoteke. Ovaj opis se ujedno koristi kao obavijest (tip) za ikone alatne trake radnog prostora.":
16030 "Datoteka je odabrana odabirom datoteke iz ponuðenih opcija preko gumba s lijeve strane polja. Originalna datoteka konfiguracije radnog prostrora je spremljena s .WPI ekstenzijom, korištenjem naredbe Spremi radni prostor izbornika Radni prostor u sekvenceru.":
18510 "Ime osobe ili organizacije koja plasira nalog.":
18520 "Ime osobe za primarni kontakt u organizaciji na koju glasi nalog.":
18530 "Broj telefona kontakta u svezi naloga.":
18540 "Email adresa kontakta u svezi naloga.":
21000 "Ovo polje omoguæava upis razlièitih 'statusa naloga'. Status naloga upisuje se svakom nalogu u datoteci rasporeda.":
21020 "U ovom polju se nalazi opis znaèenja imena statusa naloga koje je unešeno u polje 'Ime statusa naloga'.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Ovo polje odreðuje da li je zapis nadreðeni ili podreðeni zapis seta pravila.":
24010 "Sadrži ime seta pravila.":
24020 "Ovaj prekidaè se koristi za èišæenje poveznica samo za naloge koji iskazuju potrebe u prvom prolazu seta pravila (bili omoguæeni ili ne).":
24030 "Sadrži ime pojedinih funkcija unutar skupa pravila za pridruživanje materijala. ":
24040 "Prekidaè koji, kad je ukljuèen, omoguæava izvršavanje pravila. Kad nije ukljuèen, ovo odreðeno pravilo se neæe izvršiti prilikom pokretanja seta pravila.":
24050 "Kad je ovaj prekidaè ukljuèen i pravilo je postavljeno za pokretanje, u radnoj mapi æe se kreirati datoteka debugiranja.":
24060 "Ovo polje se koristi za zadavanje kriterija koji se može koristiti za ogranièavanje stavaka koje æe biti u redu èekanja interne nabave. Uobièajena vrijednost ovog polja je postavljena na Svi (ALL), no to se može promijeniti unosom izraza, npr, (~{$Order Type}~==~Stock~).  Ovaj red èekanja filtrira zapise iz baze podataka radnih naloga.":
24070 "Ovo polje je kriterij koji se može koristiti za rangiranje stavki u redu èekanja interne nabave. Npr., može se rangirati po Roku isporuke, Najranijem datumu poèetka ili Prioritetu.":
24080 "Ovo polje se koristi za specifikaciju kriterija koji se koristi za ogranièenje kriterija smještenih na red èekanja zahtjeva. Uobièajena vrijednost je Svi (ALL), ali se to može promijeniti unosom izraza, npr. (~{$Order Type}~==~Stock~).  Ovaj red èekanja filtrira zapise iz baze podataka radnih naloga.":
24090 "Ovo polje je kriterij koji se može koristiti za rangiranje stavki reda èekanja internih zahtjeva. Npr., može se rangirati po Roku isporuke, Najranijem datumu poèetka ili Prioritetu.":
24100 "Ovo polje sadrži listu razlièitih standardnih pravila povezivanja koja se mogu koristiti za povezivanje naloga. Takoðer sadrži tri specijalne stavke - Korisnièki definirano, Korisnièka funkcija i PESP skripta, što omoguæava kreiranje korisnièkih pravila.":
24110 "Ovo polje je vidljivo samo kad je 'Tip pravila' postavljen na 'Korisnièki definirano' ili 'Korisnièka funkcija'. U polje se unosi izraz koji se koristi za ovo pravilo. Primjer može izgledati ovako: (~{+:$Atribut proizvoda 1}~==~{-:$Atribut proizvoda 1}~) što omoguæava povezivanje narudžbi i zahtjeva samo ako polja 'Atribut proizvoda 1' imaju istu vrijednost.":
24120 "Ovo polje je vidljivo samo kad je 'Tip pravila' postavljen na 'PESP skripta'. U ovom polju je upisano ime PESP skripte koja se koristi kao pravilo.":
24130 "Ova opcija omoguæava kreiranje poveznica na stavke sastavnice gdje kolièina stavke ne mora biti u potpunosti zadovoljena da bi poveznica bila kreirana. Stavke gdje æe biti nedostataka, biti æe istaknute kao nedostatak.":
24140 "Ova opcija omoguæava kreiranje poveznica na stavke sastavnice gdje kolièina stavke mora biti u potpunosti zadovoljena. Stavke gdje æe biti nedostataka æe biti istaknute kao nedostatak.":
24141 "Kad je ukljuèena ova opcija, uobièajeno SMC ponašanje je pregaženo, omoguæavajuæi kreiranje poveznica unatrag kad se proizvodnja dogodi nakon potrošnje.":
24150 "Kad je postavljeno, nalozi koji su veæ rasporeðeni se mogu ponovno povezati.":
24160 "Kad je postavljen ovaj prekidaè, omoguæeno je polje 'Rangiranje reda èekanja nabave'. Time je omoguæeno zadavanje polja po kojima se rangiraju zapisi. Ova opcija se može koristiti samo ako su svi zapisi pohranjeni u bazi radnih naloga.":
24170 " Ovo polje se koristi za zadavanje kriterija koji se može koristiti za ogranièavanje stavki koje æe se naæi u redu èekanja vanjske nabave. Uobièajena vrijednost ovog polja je postavljena na Svi (ALL), no to se može promijeniti unosom izraza, npr, (~{$Order Type}~==~Stock~).  Ovaj red èekanja filtrira zapise iz baze potražnje.":
24180 "Obradit æe se svako polje s klasifikacijom NASLJEÐENO IZ NABAVE (Ime polja).":
24190 "Obradit æe se svako polje s klasifikacijom NASLJEÐENO IZ POTRAŽNJE (Ime polja).":
24200 "Kad je postavljen ovaj prekidaè, omoguæeno je polje 'Rangiranje reda èekanja zahtjeva'. Time je omoguæeno zadavanje polja po kojima se rangiraju zapisi. Ova opcija se može koristiti samo ako su svi zapisi u bazi radnih naloga.":
24210 "Kad je ovaj prekidaè postavljen, kolièina kreirane poveznice æe biti višekratnik broja koji je zadan u sastavnici.":
24500 "Kad je ukljuèen prekidaè 'Uvijek koristi ovaj set pravila', set pravila povezivanja koji je odabran u ovom polju æe biti set pravila koji æe se uobièajeno izvršavati kad se u sekvenceru odabere opcija 'Poveži materijale'.":
24505 "Kad je oznaèena ova globalna opcija, uobièajeno ponašanje SMC-a æe biti pregaženo  tako da æe biti omoguæeno kreiranje poveznica unatrag, odnosno i u sluèaju kad se proizvodnja dogodi poslije potrošnje.":
24510 "Kad je ukljuèen ovaj prekidaè, koristiti æe se pravilo odabrano u polju 'Odabrani set pravila povezivanja' kao uobièajeno pravilo koje æe se pokretati kad se u sekvenceru odabere opcija 'Poveži materijale'. Ako nije oznaèena opcija 'Uvijek koristi ovaj set pravila', kad se u sekvenceru odabere opcija 'Poveži materijale' pojavit æe se dijaloški okvir odabira koji æe omoguæiti odabir pravila koje æe se koristiti u tom trenutku.":
25400 "Ovo polje sadrži broj naloga nabave.":
25410 "Ovo polje identificira tip naloga, npr. Zaliha ili Nabava.":
25420 "Ime dobavljaèa materijala za nalog.":
25430 "Broj ili šifra artikla na nalogu.":
25440 "Opis artikla na nalogu.":
25450 "Datum dostave materijala.":
25500 "Ovo polje identificira kojem nalogu dio pripada. Prvi red naloga biti æe nadreðeni zapis i u ovom polju æe se prikazati Nadreðeni zapis (PARENT). Svi ostali redovi koji su dio ovog naloga biti æe podreðeni zapisi te æe u ovom polju biti prikazan broj naloga kojem pripada.":
25510 "Ovo polje sadrži broj naloga potražnje (npr. interna narudžba proizvodnji ili narudžba kupca)":
25520 "Ovo polje identificira tip naloga, npr. proizvodnja za zalihu ili prodajni nalog.":
25530 "Jedinstveno identificira liniju stavke naloga.":
25540 "Ime kupca koji potražuje proizvode s naloga.":
25550 "Datum kad je proizvod potreban.":
25560 "Odreðuje višekratnik kolièine koja mora biti povezana. Primjer: 12 limenki èini 1 pakiranje. Pristigla je narudžba za 60 limenki. Postoji nabavni nalog za 50 limenki. Preactor æe povezati samo 48 od 50 ulaznih limenki. Tada æe potražiti na drugom ulazu preostalih 12 limenki (od ukupno 60 potrebnih). Poveznicu æe kreirati samo ako pronaðe tih 12 limenki. Ako se želi koristiti ova osobina, u bazi 'Pravila povezivanja' trebalo bi biti postavljeno polje 'Dodijeli samo višestruke'.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "Broj ili šifra artikla stavke sastavnice (materijal ili poluproizvod).":
25630 "Potrebna kolièina stavke sastavnice.":
25640 "Kad je postavljeno, ovo polje izaziva množenje kolièine naloga s potrebnom kolièinom sastavnice.":
25650 "Uzrokuje zanemarivanje nedostataka prilikom izvršavanja pravila povezivanja materijala. Omoguæava rasporeðivanje i onih naloga koji imaju nedostak materijala.":
25700 "Broj naloga po kojem je nusproizvod proizveden.":
25705 "Part number of the order that co-product is produced in.":
25710 "Broj operacije na kojoj se proizvodi nusproizvod.":
25715 "Operation name that produces co-product.":
25720 "Ime nusproizvoda.":
25730 "Proizvedena kolièina nusproizvoda.":
25740 "Kad je postavljeno, ovo polje uzrokuje množenje kolièine nusproizvoda kolièinom naloga.":
25800 "Ovo polje identificira tip naloga, npr.: Radni nalog, Nalog za nabavu, Nalog za prodaju ili Zaliha.":
25810 "Kad je oznaèeno, sve nerasporeðene operacije se više neæe prikazivati u prozoru 'Nerasporeðene operacije'.":
25820 "Prikazuje dijaloški okvir koji prikazuje polja vezana uz kontrolu materijala.":
25830 "Ovo polje daje informaciju o statusu zahtjeva nakon povezivanja materijala. Sadržavat æe jednu od slijedeæih vrijednosti: 'Nepoznato', 'Zadovoljeno', 'Svi nedostaci zanemareni', 'Nedostaci', 'Više isporuèeno', 'Više isporuèeno, Nedostaci', 'Više isporuèeno, Svi nedostaci zanemareni'.":
25840 "Ovo polje je popunjeno nakon što su materijali povezani. Kad se napravi poveznica na nalog nabavi (u bazi naloga nabavi), polje Datum zahtjeva u radnom nalogu se popunjava s datumom isporuke naloga za nabavu. Preactor æe usporediti datum isporuke i najraniji datum poèetka te æe koristiti kasniji od ta dva datuma prilikom odluèivanja koji datum treba koristiti prilikom rasporeðivanja.":
25850 "Ovo polje je popunjeno nakon što su materijali povezani. Kad se napravi poveznica na nalog potražnje, polje Datum dostave u radnom nalogu se popunjava s datumom potražnje na koju je povezan. Preactor æe usporediti datum zahtjeva i rok te æe koristiti kasniji od ta dva datuma prilikom odluèivanja koji datum treba koristiti za rasporeðivanje.":
25900 "Prikazuje dijaloški okvir s poljima vezanim uz status operacije.":
25910 "Ova opcija se može odabrati kad je nalog podijeljen. Omoguæava nezavisni tijek svake proizvodne šarže kroz proces proizvodnje, npr. ne mora biti završena jedna operacija za sve šarže da bi mogla zapoèeti sljedeæa operacija na nekim šaržama.":
25920 "This field specifies the color used on the bar in the gantt chart for this record.":
26000 "This field defines the name of the changeover group":
26100 "This field sets the amount of changeover time that is incured when the attribute specified changes between operations scheduled next to one another.":
26200 "The display name of the user tool":
26210 "The event script which the user tool will run when selected":
26220 "the tool menu name of the user window":
26230 "The code function to poluate the user window contents":
26240 "the label of the user window":
26300 "The name of the menu button.  This gives an indication where the button will appear in the menu system":
26310 "This field controls whether the button is enabled and thefore whether it appears":
26320 "This field controls the text that will appear on the button":
26330 "The event script which the menu button will run when selected":
;
