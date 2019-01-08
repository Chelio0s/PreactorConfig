#VERSION 0
;
PLK POPUP HELP
1 "Z tym elementem nie jest skojarzony ¿aden temat pomocy.":
10 "To pole jest u¿ywane do identyfikacji do którego zlecenia nale¿y ten produkt. W pierwszej operacji zlecenia jest ustawione jako PARENT, w innych operacjach jest ustawione na unikalny numer lub nazwê.":
40 "To pole jest u¿ywane do identyfikacji numeru indeksu produktu. W rozwijanej liœcie zostan¹ wyœwietlone wszystkie numery produktów w tabeli danych produktów. Wybór numeru produktu automatycznie zmieni nazwê produktu.":
41 "To pole zawiera listê ró¿nych statusów, które mog¹ byæ zdefiniowane przy zamówieniu. Wartoœci s¹ pobierane z danych tabeli Order Status, gdzie nowy status mo¿na dodaæ w razie potrzeby. Wzór paska operacji, okreœlony jest w tabeli Order Status dla ka¿dego rodzaju status, i mo¿e byæ u¿ywane do okreœlenia wzoru pasku operacji w zamówieniu, kiedy zamówienie jest zaplanowane w Generatorze Harmonogramu.":
45 "Pole to jest u¿ywane do okreœlenia indeksu produktu.":
50 "To pole jest u¿ywane w celu identyfikacji produktu. U¿yj rozwijanej listy aby wybraæ nazwê, numer pozycji zostanie automatycznie zmieniony.":
55 "Pole to s³u¿y do identyfikacji nazwy produktu.":
60 "To pole jest u¿ywane do identyfikacji numeru zamówienia dla tego produktu. Zlecenie mo¿e byæ wewnêtrzny numer zamówienia lub jeden wskazany przez klienta. Numer zamówienia musi byæ unikatowy.":
70 "To pole mo¿e byæ stosowane do przechowywania notatek na temat tego zamówienia. Mo¿e to byæ przypomnienie o terminach, lub po prostu wiadomoœæ dla operatora.":
75 "Otwiera okno, pokazuj¹ce wszystkie informacje dotycz¹ce atrybutów dla operacji.":
80 "Pole to s³u¿y do ustawiania priorytetu dla zadania, które z kolei bêdzie wykorzystywane przez generator harmonogramu. Im mniejsza liczba tym wiêkszy priorytet. Nale¿y pamiêtaæ, ¿e priorytety mog¹ byæ ujemne, priorytet ujemny jest wy¿szy ni¿ dodatni. Na przyk³ad, -100 jest wy¿szym priorytetem ni¿ -1 a 0 jest wy¿szym priorytetem ni¿ 10.":
90 "To pole okreœla numer operacji w zleceniu. S³u¿y do ustalenia harmonogramowanie zadañ w Generatorze Harmonogramu. Operacja o ni¿szym numerze operacji zostanie zakoñczona przed rozpoczêciem operacji o wy¿szym numerze. Jeœli s¹ dwie operacji z tym samym numerem w produkcie, to obie zostan¹ zakoñczone przed rozpoczêciem operacji o wy¿szym numerze.":
110 "Jest to tekstowy opis lub nazwa operacji która jest realizowana, zidentyfikowana przez numer operacji.":
112 "Otwiera okno dialogowe zawieraj¹ce informacje o danych zasobów przypisanych do tej operacji":
120 "Grupy przezbrojeñ s¹ zdefiniowane w tabeli grup przezbrojeñ np. Grupa 1, Grupa 2, Grupa 3. Wartoœci te s¹ u¿ywane jako osi w macierzach czasów przezbrojeñ zale¿nych od kolejnoœci, w celu okreœlenia czasów przezbrojeñ pomiêdzy grupami. Grupy s¹ przypisane w bazie produktów.":
130 "To pole identyfikuje grupê zasobów, które mog¹ wykonywaæ bie¿¹c¹ operacjê.":
140 "Jeœli to konieczne, to pole mo¿e byæ u¿ywane do identyfikacji konkretnego zasobu, który ma realizowaæ operacjê. Jeœli w tabeli danych produktów pole zosta³o ustawione na 'Wybierz z grupy', system mo¿e wykorzystaæ ka¿dy zasób dostêpny w grupie zasobów. Jeœli chcesz, aby wymusiæ wykonanie operacji na konkretnym zasobie z grupy a nastêpnie za pomoc¹ rozwijanej listy wybierz zasób.":
150 "W tym polu bêdzie wyœwietlany rzeczywisty zasób, który przetworzy operacjê. Jeœli zlecenie nie zosta³o zaplanowana wczeœniej, w tym polu bêdzie wyœwietlana wartoœæ 'Nie okreœlono'. Jeœli operacja zosta³a ju¿ umieszczona na tablicy planistycznej, zostanie wyœwietlony zasób, do którego ma ona zostaæ przypisana.":
180 "To pole jest u¿ywane w celu okreœlenia, czy szybkoœæ przetwarzania jest obliczana jako czas na partiê, czas na element czy liczba elementów na godzinê. Po zaznaczeniu opcji 'czas na partiê' czas wyœwietlany w polu poni¿ej to czas przetwarzania wszystkich czêœci w tej partii. Po zaznaczeniu opcji 'czas na element' czas przetwarzania stanowi iloczyn wartoœci z poni¿szego pola i wielkoœci partii. Po zaznaczeniu opcji 'iloœæ na godzinê' czas przetwarzania bêdzie obliczany bezpoœrednio na podstawie liczby w partii.":
220 "Aktualnie wybrany jest typ czas przetwarzania operacji 'Czas na element'. W tym polu nale¿y wprowadziæ czas pracy dla ka¿dego elementu.":
230 "Aktualnie wybrany jest typ czas przetwarzania operacji 'Czas na partiê'. W tym polu nale¿y wprowadziæ ³¹czny czas pracy dla partii.":
240 "Aktualnie wybrany jest typ czas przetwarzania operacji iloœæ na godzinê'. W tym polu nale¿y okreœliæ liczbê elementów mo¿liwych do wyprodukowania w ci¹gu godziny.":
251 "Kolor w tym polu wyznacza sposób kolorowania czêœci paska operacji, na podstawie wartoœci obliczony z pól Œrednia iloœæ partii i Œredni czas partii.":
260 "To pole jest u¿ywane do okreœlenia iloœci partii lub zamówienia.":
270 "To pole okreœla zysk na zleceniu lub partii który mo¿e byæ brany pod uwagê w regule wa¿enia.":
280 "To pole poka¿e czas rozpoczêcia pierwszej operacji w tym zleceniu jeœli jest w³¹czona funkcja MakeSpan":
290 "To pole poka¿e czas zakoñczenia ostatniej operacji w tym zleceniu, jeœli jest w³¹czona funkcja MakeSpan":
300 "Ta wartoœæ okreœla iloœci, które powinny byæ wyprodukowane, zanim mo¿na rozpocz¹æ kolejn¹ operacjê. Wartoœæ Nieokreœlony uniemo¿liwi równoleg³e wykonywanie operacji":
360 "S³u¿y do okreœlania daty, przed któr¹ zadanie nie mo¿e zostaæ rozpoczête. Mo¿e to byæ na przyk³ad data, gdy materia³y bêd¹ dostêpne.":
370 "To pole s³u¿y do okreœlania daty wykonania. Termin realizacji jest u¿ywana do wyró¿niania opóŸnionych elementów w generatorze harmonogramu oraz do okreœlania priorytetu wczytywania zadania na tablicy planistycznej, jeœli wybrano opcjê 'Terminu realizacji'.":
380 "Wybierz ten prze³¹cznik, aby wskazaæ generatorowi harmonogramów, ¿e czasy rozpoczêcia i zakoñczenia s¹ wartoœciami 'rzeczywistymi'. Gdy ta opcja jest ustawiona, ten prze³¹cznik zapobiega usuniêciu przydzia³u zlecenia z wszelkich zasobów w generatorze harmonogramu. W efekcie jest on trwale przypisany do tablicy planistycznej.":
390 "Generator harmonogramu okreœla w tym polu, po harmonogramowaniu, czasu w którym w zadaniu rozpocznie siê czas przygotowania operacji.":
400 "Generator harmonogramu aktualizuje to pole, w trakcie harmonogramowania, do czasu, w którym zadanie ma siê rozpocz¹æ.":
410 "Generator harmonogramu aktualizuje to pole, w trakcie harmonogramowania, do czasu, w którym zadanie ma siê zakoñczyæ.":
420 "Blokowanie operacji na harmonogramie. Operacja nie zostanie cofniêta z planu. Mo¿na to równie¿ osi¹gn¹æ, u¿ywaj¹c trybu lokalizacji 'Wyró¿nij zablokowane operacje' w generatorze poprzez wskazanie mysz¹ operacji (ikony lub paska w widoku podgl¹du), naciœniêcie klawisza Shift na klawiaturze i naciœniêcie lewego przycisku myszy.":
421 "Operacje maj¹ce ten prze³¹cznik zaznaczony zostan¹ pozostawione nieprzydzielone w oknie niezaharmonogramowanych operacji, podczas automatycznego planowania operacji.":
430 "Umo¿liwia definiowane przez u¿ytkownika w³aœciwoœci, które zostan¹ przypisane do produktów, np. kolor. W ramach okreœlonego atrybutu rekordy atrybutów otrzymuj¹ ranking priorytetów, np. 'bia³e' wyroby mog¹ mieæ wy¿szy priorytet ni¿ '¿ó³te'.":
440 "Wype³nij informacje o iloœci zakoñczonej i wprowadŸ czas do którego ta 'czêœæ partii' zosta³a zakoñczona w polu Œredni czas partii.Generator harmonogramu automatycznie oblicza 'Czas zakoñczenia' dla tej operacji.":
450 "Wype³nij informacje o czasie zakoñczenia i wprowadŸ czas do którego ta 'czêœæ partii' zosta³a zakoñczona. Generator harmonogramu automatycznie oblicza 'Czas zakoñczenia' dla tej operacji.":
460 "Efektywny czas operacji wykorzystuje informacjê z pól Œredni czas partii i Œrednia iloœæ partii do obliczenia poprawionego czasu pracy na podstawie tych informacji. Nale¿y zauwa¿yæ, ¿e prawid³owe dzia³anie tej funkcji zale¿y od zmodyfikowania wartoœci 'Iloœæ po³owy partii' i 'Czas po³owy partii', gdy w generatorze wyœwietlany jest. W przeciwnym razie wartoœæ w polu 'Efektywny czas operacji' zmieni siê tylko przy kolejnym otwarciu generatora.":
474 "Wykorzystywane do rejestracji kosztów elementu w punkcie gdzie jest wprowadzany do procesu. Pole mo¿e byæ u¿yte do rejestrowania kosztów sta³ych za sztukê, takich jak umowy podwykonawstwa obróbki cieplnej i tak dalej.":
476 "U¿ywa Koszt materia³u na element w celu podania kosztów materia³owych dla partii, w momencie w którym koszt na element jest wprowadzany do procesu.":
477 "Bezpoœrednie koszty pracy w bie¿¹cym procesie.":
530 "Okreœla horyzont czasowy, w którym mo¿liwe jest ³¹czenie zadañ na potrzeby produkcji. Zasób, który koñczy operacjê na tablicy planistycznej bêdzie siê znajdowaæ dalej od tego punktu na osi czasu okreœlonej dla horyzontu czasowego w oknie modu³u prognostycznego. Konfiguracja preferowanych kryteriów harmonogramowanie w tabeli danych zasobów s³u¿y do wybierania zadañ, których termin realizacji przypada w tym horyzoncie czasowym. Okno modu³u prognostycznego mo¿na okreœliæ dla poszczególnych produktów, w tabeli danych produktów, a tak¿e mo¿na je zmodyfikowaæ dla poszczególnych zleceñ w pliku harmonogramu g³ównego. Mo¿na je równie¿ okreœliæ jako regu³ê globaln¹ w informacjach o konfiguracji.":
540 "Okreœlone w tabeli danych produkty, umo¿liwia dostêp do dokumentu programu Word, który mo¿e zawieraæ informacje dotycz¹ce produktu. Dostêp do dokumentu i jego edycji jest równie¿ mo¿liwy w generatorze harmonogramu.":
541 "To pole jest u¿ywane do opisania przebiegu poszczególnych operacji. Istniej¹ cztery ró¿ne statusy postêpu: Nie rozpoczêto; Czas przygotowania; Uruchomienie; Zakoñczone":
550 "Z produktami mog¹ byæ skojarzone okreœlone w³aœciwoœci. W generatorze harmonogramów znajduj¹ siê one w tabelach danych atrybutów. Te tabele s¹ definiowane przez u¿ytkownika i na przyk³ad tabela Atrybut produktu 1 mo¿e byæ zarezerwowana dla koloru i zawieraæ konkretne rekordy - czerwony, niebieski, zielony itp. Atrybuty produktu mo¿na wybraæ w polu Dopasuj podobne w tabeli danych produktów w celu zdefiniowania czasu konfiguracji funkcji Dopasuj podobne.":
560 "Wykorzystywane do ustalenia rankingu priorytetowego miêdzy rekordami w tabeli Atrybut Produkt 1, u¿ywane przez Regu³y APS.":
570 "Produkty mog¹ mieæ szczególne cechy zwi¹zane z nimi, w Generatorze Harmonogramów s¹ one uwzglêdnione w tabelach danych atrybutów produktów. Te tabele s¹ zdefiniowane przez u¿ytkownika i na przyk³ad, atrybut produktu 2 mo¿e byæ zarezerwowane dla materia³u, w których poszczególne rekordy bêd¹ siê nazywaæ - stal, miedŸ itp.":
580 "Wykorzystywane do ustalenia rankingu priorytetowego miêdzy rekordami w tabeli Atrybut Produkt 2, u¿ywane przez Regu³y APS.":
590 "Produkty mog¹ mieæ szczególne cechy zwi¹zane z nimi, w Generatorze Harmonogramów s¹ one uwzglêdnione w tabelach danych atrybutów produktów. Te tabele s¹ zdefiniowane przez u¿ytkownika i na przyk³ad, atrybut produktu 2 mo¿e byæ zarezerwowane dla materia³u, w których poszczególne rekordy bêd¹ siê nazywaæ - stal, miedŸ itp.":
600 "Wykorzystywane do ustalenia rankingu priorytetowego miêdzy rekordami w tabeli Atrybut Produkt 3, u¿ywane przez Regu³y APS.":
602 "To pole oblicza czas trwania ca³ego zamówienia od momentu rozpoczêcia przygotowania pierwszej operacji do czasu zakoñczenia ostatniej operacji zlecenia.":
620 "Regu³a wysy³ania, która oblicza numer indeksu, dziel¹c czas pozosta³y do daty wykonania przez oczekiwany pozosta³y czas potrzebny na wykonanie zadania. Wspó³czynnik o wartoœci poni¿ej 1 wskazuje, ¿e wyst¹pi³o opóŸnienie, natomiast wartoœæ powy¿ej 1 wskazuje na wykonanie przed czasem.":
815 "Ta opcja pozwala na wprowadzenie wartoœci do czasu przygotowania i czasu operacji. Jest równie¿ u¿ywany do aktualizacji postêpu zadañ poprzez system produkcji.":
1020 "Okreœla nazwê grupy zasobów. Bêdzie ona s³u¿y³a do identyfikacji okreœlonych grup zasobów, bêd¹cych w stanie wykonaæ podobnye funkcje.":
1030 "Identyfikuje poprawne zasoby dla grupy zasobów. Zasób mo¿e byæ cz³onkiem wiêcej ni¿ jednej grupy.":
1060 "W³¹czenie tego prze³¹cznika spowoduje wyœwietlenie wykresu u¿ycia dla grupy zasobów w kilku oknach wykresu w generatorze harmonogramów.":
1070 "Kolor ten bêdzie wyœwietlany na wykresie u¿ytkowania, który jest widoczny w kilku oknach wykresu w generatorze harmonogramów.":
1080 "Wykres wykorzystania dostêpny w kilku oknach wykresu w generatorze harmonogramu wyœwietli ten kolor, gdy wykorzystanie przekracza liczbê godzin dostêpna dla zasobu lub grupy zasobów Jeœli wartoœæ zosta³a wpisana to nastêpnie wykres zmieni kolor zgodnie z t¹ wartoœci¹.":
1090 "Wykres wykorzystania w kilku oknach wykresu w generatorze harmonogramu bêdzie korzystaæ z tych kolorów, aby narysowaæ liniê, która oznacza wykorzystanie czasu przygotowania w godzinach.":
2020 "Okreœla nazwê poszczególnych zasobów.":
2023 "Koszt godziny pracy zasobu.":
2024 "Stosuje wspó³czynnik kosztów %, okreœlany w kalendarzu, do kosztu godzinnego dla zasobu.":
2030 "Otwiera okno dialogowe z dostêpem do opcji wyœwietlania zasobów, lub grup zasobów w oknie harmonogramu i wykresach wykorzystania.":
2040 "Mo¿na okreœliæ ustawienie Widoczne, Zminimalizowane lub Wy³¹czone. Kontrola stanu pocz¹tkowego tego zasobu w oknie, gdy zaczyna pracê generatora. Normalnie ustawiony na Minimalizuj. Jeœli Wy³¹czony, zasób nie jest u¿ywany do harmonogramowania.":
2050 "Kontrola poziomej (czasu) skali wykresu Gantta w generatorze harmonogramu. Mog¹ ró¿niæ siê od minuty do kilku tygodni na jednostkê.":
2070 "Pozwala ustawiæ pojemnoœæ zasobu jako Skoñczona, Nieskoñczona lub Nieskoñczona z wzorcem zmian.":
2071 "Pozwala ustawiæ pojemnoœæ zasobu jako Skoñczona, Nieskoñczona lub Nieskoñczona z wzorcem zmian, gdy w generatorze harmonogramu w³¹czony jest tryb nieskoñczonej pojemnoœci.":
2080 "Kontroli poziomej skali (czasu)  w oknie zasobów w Generatorze Harmonogramu.":
2100 "Umo¿liwia wybranie dodatkowych ograniczeñ, które maj¹ zostaæ zastosowane do zasobu podstawowego. Okreœla liczbê ograniczeñ wymagan¹ przez zasób oraz sposób, w jaki ograniczenia s¹ stosowane do zasobu pierwszorzêdowe.":
2110 "Okreœla, kiedy nale¿y zwiêkszyæ lub zmniejszyæ u¿ycie zasobu drugorzêdowe, np. Zwiêkszenie czasu trwania, które wykorzystuje dodatkowe ograniczenie dla czasu trwania operacji i zwalnia zasób po jej zakoñczeniu. Jeœli zadanie jest ustawione dla mocowania do wykonania kilku operacji, mo¿na okreœliæ ustawienie Zwiêksz przy rozpoczêciu dla pierwszej operacji i Zmniejsz przy zakoñczeniu dla ostatniej operacji. Dziêki temu danego osprzêtu nie bêdzie mo¿na u¿yæ dla ¿adnego innego zadania, gdy pierwsze zadanie oczekuje w kolejce na zasób.":
2120 "Okreœla wymagan¹ iloœæ drugorzêdowego ograniczenia. Je¿eli wartoœæ 'Iloœæ' jest zaznaczona wymagana iloœæ równa jest iloœci partii która jest wykonywana.":
2130 "Okreœla atrybut operacji, który zapobiegnie wykonywania niepodobnych operacji jednoczeœnie na zasobach o nieograniczonych zdolnoœciach produkcyjnych.":
2150 "U¿ywany w produktach APS, w celu ustalenia kryteriów stosowanych przez preferowane regu³y harmonogramowania w wyborze zadañ do wykonania.":
2160 "U¿ywane w produkcie APS, przez regu³y planowania 'Minimalizuj WIP', w celu ustalenia buforów czasu, w którym mo¿e gromadziæ siê WIP, przed wybranymi zasobami.":
2180 "Wartoœæ liczbowa u¿yta do sortowania kolejnoœæ, w której zasoby s¹ wyœwietlane w tabeli zasobów. Mo¿e byæ równie¿ u¿yta do nadpisania domyœlnej kolejnoœci w której zasoby s¹ wyœwietlane w generatorze harmonogramu.":
2181 "Otwiera okno dialogowe zawieraj¹ce informacje o zaawansowanych ograniczeniach dla zasobu":
2182 "Umo¿liwia okreœlenie z³o¿onych relacji miêdzy zasobami przy u¿yciu wyra¿eñ. Szczegó³owe informacje o sk³adni wyra¿eñ i tworzeniu mo¿na znaleŸæ w dokumentacji.":
2183 "Okreœla atrybut operacji, który zapobiegnie wykonywania niepodobnych operacji jednoczeœnie na zasobach o nieograniczonych zdolnoœciach produkcyjnych.Atrybut ten okreœla, ¿e tylko operacje o tej samej wartoœci w wybranym atrybucie mog¹ byæ planowane w tym samym czasie.":
2185 "Okreœla, czy linia separatora jest wyœwietlany dla zasobu na wykresie Gantta. To mo¿e pomóc podczas wizualizowania zasobów w grupach.":
2190 "Okreœla sposób, w jaki zasób zostanie wyœwietlony wykresie Gantta. Alternatywy to 'Zawsze', 'Tylko dla grupy' i 'Ukryj'.":
2191 "Okreœla sposób wyœwietlania operacji w oknie harmonogramu operacji. Dostêpne opcje to 'Stos' (operacje s¹ wyœwietlane w jednym wierszu przegl¹du) i 'Kaskadowo' (ka¿da operacja jest wyœwietlana w osobnym wierszu przegl¹du).":
2200 "Wykorzystywane do definicji macierzy czasów przezbrojeñ zale¿nych od kolejnoœci. Okreœla siê czas przygotowania przy przezbrojeniu z jednego typu atrybutu na inny.":
2201 "W tym polu mo¿na okreœliæ, która grupa przezbrojeñ jest przypisana do danego zasobu i w konsekwencji okreœla, które czasy przezbrojenia miêdzy operacjami o ró¿nych atrybutach s¹ stosowane.":
2202 "To pole okreœla czy czasy przezbrojeñ zwi¹zane z operacjami s¹ wykonywane w tym samym czasie czy maj¹ byæ ³¹czone jako suma czasów przezbrojeñ.":
2205 "U¿ycie tego pola wyboru zatrzymuje w³¹czenie zasobów do statystyki harmonogramu.":
2210 "To pole jest u¿ywane do wyboru systemu Viewer do którego zasoób bêdzie przypisany, Zawiera listê nazw  pochodz¹c¹ z danych ksi¹¿ki adresowej tabeli PCO.":
2220 "Ten przycisk otwiera okno dialogowe, wymieniaj¹c ró¿ne atrybuty zwi¹zane z zasobami.":
2230 "To pole pozwala na wprowadzenie nazwy atrybutu dla tego zasobu.":
2240 "To pole pozwala na wprowadzenie nazwy atrybutu dla tego zasobu.":
2250 "To pole umo¿liwia wprowadzenie danych atrybutu czasu trwania dla zasobu.":
2260 "To pole wskazuje wydajnoœæ zasobu. Wartoœci¹ domyœln¹ jest 100%. Jeœli wydajnoœæ zostanie zmieniona na 200%, wszelkie operacje zaplanowane dla tego zasobu bêd¹ przetwarzane dwa razy szybciej (tj. po³owê zwyk³ego czas przetwarzania operacji).":
2270 "Jest to pole prze³¹cznika, którego w³¹czenie powoduje zastosowanie wartoœci w polu % wydajnoœci do wszystkich operacji, dla których okreœlono czasy konfiguracji i które s¹ zaplanowane w przypadku zasobu z w³¹czonym prze³¹cznikiem.":
2280 "Po w³¹czeniu tego prze³¹cznika zostanie wyœwietlony wykres u¿ycia dla zasobu w oknie wielu wykresów w Sekwencerze.":
5035 "Mno¿nik czynnika kosztowego, który ma wp³yw na koszt uruchomienia zasobu, do którego jest zastosowany. Wartoœæ 100% nie powoduje zwiêkszenia, natomiast wartoœæ 150% powoduje zwiêkszenie kosztu uruchomienia o 50%. Ustawienia te s¹ okreœlane w tabeli danych stanów kalendarza i zapewniaj¹ wartoœci domyœlne, które s¹ u¿ywane w plikach kalendarza g³ównego.":
6100 "Wyœwietla okno dialogowe, które pozwala na wybór prawid³owych zasobów z wybranej grupy oraz przypisanie danych specyficznych dla zasobów.":
6110 "To pole okreœla, czy zasób zostanie wybrany podczas sekwencjonowania automatycznego. Jeœli to pole nie jest zaznaczone, operacjê mo¿na mimo wszystko rêcznie ustawiæ dla zasobu.":
6120 "To pole umo¿liwia okreœlenie indywidualnej wartoœci czas przygotowania dla ka¿dego z zasobów, które s¹ prawid³owe w danej operacji.":
6130 "To pole umo¿liwia okreœlenie indywidualnego czasu konfiguracji dla ka¿dego z zasobów, które s¹ prawid³owe w danej operacji.":
6131 "To pole umo¿liwia okreœlenie indywidualnej Iloœæ na godzinê dla ka¿dego z zasobów, które s¹ prawid³owe w danej operacji.":
6132 "To pole umo¿liwia okreœlenie indywidualnego czasu partii dla ka¿dego z zasobów, które s¹ prawid³owe w danej operacji.":
6140 "To pole s³u¿y do definiowania zasobu drugorzêdowe u¿ywanego przez zasób podstawowy podczas bie¿¹cej operacji.":
6150 "To pole s³u¿y do okreœlania, w jaki sposób ograniczenie dodatkowe jest u¿ywane podczas operacji, np. Zwiêkszenie czasu trwania lub Zwiêksz tylko Czas przygotowania itp.":
6160 "U¿yj tego pola, aby wskazaæ wielkoœæ ograniczenia drugorzêdowego wymaganego podczas bie¿¹cej operacji. Mo¿na na przyk³ad okreœliæ, ¿e operacja wymaga jednego sta³ego uchwytu tokarskiego szczêkowego.":
6170 "Mened¿er harmonogramów wykorzysta ten czas na próbê wczytania bie¿¹cej operacji do preferowanego zasobu. Jeœli w tym czasie bêdzie to niemo¿liwe, zostanie podjêta próba wczytania operacji na dowolnych innych zasobach w grupie.":
6180 "Funkcja Ustaw kolejn¹ grupê zasobów umo¿liwia okreœlenie 'wymuszonej listy' zasobów, tj. zasobów okreœlonych w wybranej grupie. 'Wymusza' ona u¿ywanie przez dalsze operacje tylko tych zasobów które znajduj¹ siê na 'wymuszonej liœcie'. Dlatego jeœli œcie¿ka procesu wywo³uje grupê zasobów w dalszej operacji, która zawiera³a zasoby nieznajduj¹ce siê na liœcie, zasoby te nie zostan¹ u¿yte podczas Sekwencjonowania. Funkcja Ustaw kolejn¹ grupê zasobów ma charakter skumulowany i mo¿na jej u¿yæ w wiêcej ni¿ jednej operacji na œcie¿ce procesu poprzez dodanie zasobów do 'wymuszonej listy'.":
6190 "Funkcja Resetuj kolejn¹ grupê zasobów s³u¿y do usuwania wszystkich zasobów znajduj¹cych siê w wybranej grupie zasobów z 'wymuszonej listy' okreœlonej przy u¿yciu polecenia Ustaw kolejn¹ grupê zasobów. Jeœli okreœlono koncepcyjn¹ grupê zasobów 'Wszystkie' zawieraj¹c¹ wszystkie dostêpne zasoby, zasobami u¿ywanymi w kolejnych operacjach bêd¹ te ustawione na oryginalnej œcie¿ce procesu.":
6230 "To pole umo¿liwia okreœlenie czasu konfiguracji zwi¹zanego z prze³¹czeniem z poprzedniego produktu na bie¿¹cy produkt. Wartoœci w polu Czas przygotowania zostan¹ dodane do wszystkich wartoœci konfiguracji okreœlonych dla danego zasobu w macierzy Czas przygotowania zale¿ny od harmonogramowanie.":
6430 "Wybierz nazwê ikony z listy rozwijanej. Przycisk edycji umo¿liwia tworzenie nowych ikon.":
6470 "Wyœwietla okno dialogowe Prawid³owe ograniczenia drugorzêdowe, umo¿liwiaj¹c zastosowanie prawid³owych ograniczeñ do pojedynczych rekordów w tej tabeli. W tym miejscu mo¿na równie¿ edytowaæ charakterystyki u¿ycia ograniczeñ.":
6530 "Okreœla maksymalny przedzia³ czasu dozwolony pomiêdzy dwiema operacjami Sekwencyjnymi. Maksymalny przedzia³ czasu jest okreœlany przez pole 'Typ interwa³u', które ustanawia relacje 'Pocz¹tek-pocz¹tek', 'Koniec-koniec' itp.":
6540 "Ustanawia relacjê u¿ywan¹ do wstawiania maksymalnego przedzia³u czasu miêdzy dwoma s¹siednimi operacjami w polu interwa³ maksymalny czas miêdzy dwóch s¹siaduj¹cych operacji, w polu 'Maks czas przed kolejn¹ operacj¹'. Mo¿e to byæ relacja 'Koniec-koniec', 'Koniec-pocz¹tek', 'Pocz¹tek-pocz¹tek' lub 'Pocz¹tek-koniec'.":
6550 "Okreœla maksymaln¹ iloœæ czasu, wyra¿on¹ jako procent teoretycznego czas przetwarzania operacji, w którym operacja mo¿e byæ wykonywana, gdy jej Sekwencja jest okreœlana automatycznie przez Sekwencer.":
6560 "Definiuje okreœlon¹ iloœæ zapasu czasu, który ma byæ uwzglêdniony pomiêdzy t¹ operacj¹ i poprzedni¹.":
6565 "Definiuje okreœlon¹ iloœæ zapasu czasu, który ma byæ uwzglêdniony pomiêdzy t¹ operacj¹ i nastêpn¹.":
6580 "To pole mo¿e byæ u¿ywane do stosowania mno¿nika szybkoœci przetwarzania, który wp³ywa na d³ugoœæ operacji.":
6681 "To pole s³u¿y do okreœlania atrybutu tego rekordu, do którego odwo³uje siê jedna z tabel atrybutów. Maj¹ one wp³yw na czasy konfiguracji, kolejnoœæ tworzenia harmonogramu i u¿ycie ograniczeñ.":
6682 "To pole s³u¿y do okreœlania atrybutu tego rekordu w dowolnym formacie. Mo¿na go u¿yæ w celu ustawienia opcji wyœwietlania oraz do grupowania operacji.":
6683 "To pole s³u¿y do okreœlania atrybutu liczbowego tego rekordu. Mo¿na go u¿yæ w celu ustawienia opcji wyœwietlania, zmodyfikowania kolejnoœci tworzenia harmonogramu oraz u¿ycia ograniczeñ.":
6684 "To pole s³u¿y do okreœlania atrybutu daty tego rekordu. Mo¿na go u¿yæ w celu ustawienia opcji wyœwietlania i zmodyfikowania kolejnoœci tworzenia harmonogramu.":
6685 "To pole s³u¿y do okreœlania atrybutu czasu trwania tego rekordu. Mo¿na go u¿yæ w celu ustawienia opcji wyœwietlania i zmodyfikowania kolejnoœci tworzenia harmonogramu.":
6690 "Pole Bufor dostawy zawiera czas bufora, który jest odejmowany od Daty wykonania podczas tworzenia harmonogramowanie wstecznej w celu zaplanowania operacji wczeœniej ni¿ najpóŸniejsza mo¿liwa godzina. Dziêki temu mo¿liwe jest uwzglêdnienie nieoczekiwanych opóŸnieñ w procesie.":
7020 "Liczba dni przed bie¿¹c¹ godzin¹, która mo¿e byæ wyœwietlana w przegl¹dzie harmonogramowanie.":
7030 "Przedzia³ czasu po bie¿¹cej godzinie, który mo¿e byæ wyœwietlany w przegl¹dzie Sekwencera.":
7035 "Otwiera okno dialogowe ustawieñ konfiguracji, która pozwala u¿ytkownikowi na dostosowywanie przegl¹du harmonogramowanie.":
7040 "Okreœla przesuniêcie wzglêdem godziny wprowadzania zlecenia, przed któr¹ nie mo¿na rozpocz¹æ zadania. Jeœli ustawiono wartoœæ Nie okreœlono, nie istnieje ¿adne ograniczenie poza bie¿¹c¹ godzin¹.":
7050 "Okreœla przesuniêcie wzglêdem godziny wprowadzenia zlecenia, przed któr¹ zadanie powinno byæ dostêpne. Wartoœæ tê mo¿na zast¹piæ.":
7060 "Iloœæ czasu przesuniêcia zakoñczenia od bie¿¹cej godziny. Zakoñczenie reprezentuje bie¿¹c¹ godzinê, jeœli przesuniêcie zakoñczenia zosta³o ustawione na 0 godzin i 00 minut.":
7067 "Okreœla opcje kalkulacji kosztów, tj.: Podczas harmonogramowanie, Po harmonogramowanie lub Nigdy.":
7120 "Ustawia tryb przegl¹du harmonogramowanie.":
7130 "Liczba dni od teraz do rozpoczêcia przegl¹du harmonogramowanie.":
7140 "Liczba dni od teraz do koñca przegl¹du harmonogramowanie.":
7320 "Umo¿liwia wybranie z tabeli danych 'Skrypty' skryptu wymaganego do importowania zleceñ.":
7330 "Umo¿liwia wybranie z tabeli danych 'Skrypty' skryptu wymaganego do eksportowania zleceñ.":
7430 "Zaznaczenie tego pola prze³¹cznika powoduje wyœwietlenie niewielkiego czarnego trójk¹ta przy pasku ka¿dej operacji w generatorze harmonogramu. Ta funkcja u³atwia przeci¹ganie operacji przydzielonych na tablicy planistycznej, zw³aszcza mniejszych.":
7450 "Okreœla domyœlny skrypt zdarzenia PESP, który nale¿y uruchomiæ podczas importowania zleceñ przy u¿yciu przycisku 'Importuj zlecenia' w menu transferu danych.":
7470 "Okreœla domyœlny skrypt zdarzenia PESP, który nale¿y uruchomiæ podczas eksportowania zleceñ przy u¿yciu przycisku 'Eksportuj zlecenia' w menu transferu danych.":
7480 "Okreœla domyœlny skrypt zdarzenia PESP, który nale¿y uruchomiæ podczas wydawania harmonogramu przy u¿yciu przycisku 'Wydaj harmonogram' w menu transferu danych.":
7490 "Okreœla domyœlny skrypt zdarzenia PESP, który nale¿y uruchomiæ podczas przydzielania operacji w Sekwencerze z w³¹czon¹ opcj¹ Regu³y APS.":
8020 "Nazwa ograniczenia drugorzêdowego.":
8030 "Pozwala wybraæ kolor wydruku u¿ytkownika Sekwencera, gdy wartoœci s¹ z przedzia³u miêdzy górnym i dolnym limitem.":
8040 "Ustawia deseñ wype³nienia wykresu.":
8060 "Kolor wype³nienia wykresu, jeœli wykres ma przechodziæ przez górny limit wykresu.":
8080 "Kolor wype³nienia wykresu, jeœli wykres ma przechodziæ przez dolny limit wykresu.":
8090 "Okreœla, czy to ograniczenie dodatkowe ma ograniczaæ harmonogram, gdy u¿ywany jest produkt 300 FCS lub nowszy. We wszystkich wersjach niezaznaczenie tego pola wyboru spowoduje wstrzymanie wysy³ania ostrze¿eñ w Sekwencerze, jeœli limity ustawione dla tego ograniczenia drugorzêdowego zostan¹ przekroczone.":
8091 "Gdy w³¹czony jest tryb nieskoñczonej zdolnoœci Sekwencera, to pole umo¿liwia okreœlenie, czy to ograniczenie dodatkowe ma ograniczaæ harmonogram, gdy u¿ywany jest produkt 300 FCS lub nowszy.":
8092 "Opcje do kontrolowania zachowania tego ograniczenia, gdy system jest ustawiony na tryb nieograniczonej zdolnoœci.":
8100 "Okreœla, jak wydajnoœæ kalendarza zasobu podstawowego wp³ywa na wykorzystanie tego ograniczenia drugorzêdowego. Dostêpne opcje: Brak wp³ywu; Wydajnoœæ pocz¹tku zadania; ŒledŸ zmiany wydajnoœci; U¿yj 100% jeœli wiêcej ni¿ 0%":
8101 "W trybie nieograniczonej zdolnoœci Sekwencera to pole okreœla, jak wydajnoœæ kalendarza zasobu podstawowego wp³ywa na wykorzystanie tego ograniczenia drugorzêdowego. Dostêpne opcje: Brak wp³ywu; Wydajnoœæ pocz¹tku zadania; ŒledŸ zmiany wydajnoœci; U¿yj 100% jeœli wiêcej ni¿ 0%":
8120 "Ten przycisk otwiera okno dialogowe, w którym wyœwietlana jest lista ró¿nych atrybutów powi¹zanych z ograniczeniem dodatkowym.":
8130 "To pole umo¿liwia wprowadzenie danych atrybutu dla ograniczenia drugorzêdowego.":
8140 "To pole umo¿liwia wprowadzenie danych atrybutu rzeczywistego dla ograniczenia drugorzêdowego.":
8150 "To pole umo¿liwia wprowadzenie danych atrybutu czasu trwania dla ograniczenia drugorzêdowego.":
8160 "Po w³¹czeniu tego prze³¹cznika zostanie wyœwietlony wykres u¿ycia dla ograniczenia drugorzêdowego w oknie wielu wykresów w Sekwencerze.":
9020 "Nazwy grup konfiguracji. Tworz¹ one osie X i Y macierzy czasu konfiguracji zale¿nej od harmonogramowanie w tabeli danych zasobów.":
12020 "Nazwa rekordu atrybutu w tabeli danych atrybutu produktu 1.":
13020 "Nazwa rekordu atrybutu w tabeli danych atrybutu produktu 2.":
14020 "Nazwa rekordu atrybutu w tabeli danych atrybutu produktu 3.":
16020 "Nazwa u¿ywana do opisywania konfiguracji wyœwietlania na ekranie, zapisana pod nazw¹ pliku. Ten opis jest równie¿ u¿ywany jako wyœwietlana porada dla ikon paska narzêdzi w obszarze roboczym.":
16030 "Plik jest wybierany przy u¿yciu opcji dostêpnej po naciœniêciu przycisku znajduj¹cego siê z lewej strony pola. Oryginalny plik konfiguracji obszaru roboczego jest zapisywany z rozszerzeniem pliku .WPI przy u¿yciu polecenia Zapisz obszar roboczy, dostêpnego w sekcji Obszar roboczy w menu Sekwencera.":
18510 "Nazwa osoby lub organizacji sk³adaj¹cej zlecenie.":
18520 "Nazwa g³ównej osoby kontaktowej w organizacji sk³adaj¹cej zlecenie.":
18530 "Numer telefonu, który ma byæ u¿ywany w zwi¹zku ze zleceniem.":
18540 "Adres e-mail, który ma byæ u¿ywany w zwi¹zku ze zleceniem.":
21000 "To pole umo¿liwia wprowadzanie ró¿nych 'statusów zlecenia'. Status zlecenia mo¿na wybraæ dla zlecenia w pliku harmonogramu.":
21020 "To pole s³u¿y do przechowywania opisu znaczenia nazwy statusu zlecenia, która zosta³a wprowadzona w polu 'Nazwa statusu zlecenia'.":
21100 "Nazwa rekordu atrybutu w tabeli danych atrybutu.":
21110 "S³u¿y do okreœlania priorytetów rekordów w tabeli danych atrybutu, która mo¿e byæ u¿ywana przez regu³y tworzenia harmonogramu.":
24000 "To pole okreœla, czy dany rekord jest rekordem nadrzêdnym czy podrzêdnym wzglêdem zestawu regu³.":
24010 "Zawiera nazwê zestawu regu³.":
24020 "Ten prze³¹cznik jest u¿ywany do usuwania powi¹zañ tylko w przypadku zleceñ znajduj¹cych siê w kolejce zapotrzebowania w pierwszym sprawdzeniu (niezale¿nie od tego, czy s¹ w³¹czone, czy nie) zestawu regu³.":
24030 "Przechowuje nazwê okreœlonej funkcji sprawdzania regu³y.":
24040 "Prze³¹cznik, w przypadku którego ustawienie wartoœci true powoduje w³¹czenie sprawdzenia regu³y, a ustawienie wartoœci false dla tego konkretnego sprawdzenia regu³y zostanie zignorowane, gdy uruchomiony jest zestaw regu³.":
24050 "Gdy dla tego prze³¹cznika ustawiona jest wartoœæ true i uruchomiony jest zestaw regu³, w katalogu roboczym tworzony jest plik debugowania.":
24060 "To pole s³u¿y do okreœlania kryteriów, które mog¹ byæ u¿ywane do ograniczania elementów umieszczanych w wewnêtrznej kolejce dostaw. Wartoœæ domyœlna tego pola jest ustawiona jako ALL, ale mo¿na j¹ zmieniæ, wprowadzaj¹c wyra¿enie np. (~{$Order Type}~==~Stock~). Kolejka ta filtruje rekordy znajduj¹ce siê w bazie danych 'Zlecenie produkcyjne'.":
24070 "To pole zawiera kryteria, które mog¹ byæ u¿ywane do tworzenia rankingów elementów w wewnêtrznej kolejce dostaw. Ranking w wewnêtrznej kolejce dostaw mo¿na okreœliæ na przyk³ad na podstawie daty wykonania, najwczeœniejszej daty rozpoczêcia lub priorytetu.":
24080 "To pole s³u¿y do okreœlania kryteriów, które mog¹ byæ u¿ywane do ograniczania elementów umieszczanych w kolejce zapotrzebowania. Wartoœæ domyœlna tego pola jest ustawiona jako ALL, ale mo¿na j¹ zmieniæ, wprowadzaj¹c wyra¿enie np. (~{$Order Type}~==~Stock~). Kolejka ta filtruje rekordy znajduj¹ce siê w bazie danych 'Zlecenie produkcyjne'.":
24090 "To pole zawiera kryteria, które mog¹ byæ u¿ywane do tworzenia rankingów elementów w wewnêtrznej kolejce zapotrzebowania. Ranking w wewnêtrznej kolejce zapotrzebowania mo¿na okreœliæ na przyk³ad na podstawie daty wykonania, najwczeœniejszej daty rozpoczêcia lub priorytetu.":
24100 "To pole zawiera listê ró¿nych standardowych regu³ grupuj¹cych, które mog¹ byæ u¿ywane do grupowania zleceñ. Zawiera ono równie¿ trzy specjalne elementy - zdefiniowane przez u¿ytkownika, funkcja u¿ytkownika i skrypt PESP, które zapewniaj¹ mo¿liwoœæ utworzenia bardziej dostosowanych regu³.":
24110 "To pole jest widoczne tylko w wtedy, gdy dla pola 'Typ regu³y' okreœlono ustawienie 'Zdefiniowane przez u¿ytkownika' lub 'Funkcja u¿ytkownika'. Wyra¿enie, które ma byæ u¿ywane dla regu³y, jest wprowadzane w tym polu. Przyk³ad: (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~). Takie wyra¿enie pozwala ³¹czyæ zlecenia zapotrzebowania i dostaw tylko wtedy, gdy pola 'Atrybut produktu 1' maj¹ tê sam¹ wartoœæ.":
24120 "To pole jest widoczne tylko w przypadku, gdy dla pola 'Typ regu³y' okreœlone jest ustawienie 'Skrypt PESP'. To pole zawiera nazwê skryptu PESP, która ma byæ u¿ywana jako regu³a.":
24130 "Ta opcja umo¿liwia tworzenie powi¹zania do pozycji zestawienia materia³ów, w przypadku których liczba w pozycji zestawienia materia³ów nie musi zostaæ ca³kowicie zaspokojona, aby ³¹cze zosta³o utworzone. Wszystkie elementy, których jest zbyt ma³o, zostan¹ wyró¿nione jako bark materia³owy.":
24140 "Ta opcja umo¿liwia tworzenie powi¹zania tylko do pozycji zestawienia materia³ów, w przypadku których liczba w pozycji zestawienia materia³ów jest ca³kowicie zaspokojona. Wszystkie elementy, których jest zbyt ma³o, zostan¹ wyró¿nione jako brak materia³owy.":
24141 "Po zaznaczeniu tej opcji domyœlne zachowanie SMC jest zastêpowane poprzez umo¿liwienie tworzenia powi¹zania wstecznych, gdy produkcja nastêpuje po zu¿yciu.":
24150 "Gdy ustawiona jest wartoœæ true, zlecenia, które s¹ ju¿ zaplanowane, mog¹ zostaæ ponownie po³¹czone.":
24160 "Kiedy dla tego prze³¹cznika ustawiona jest wartoœæ true, pole 'Ranking kolejki dostaw' staje siê aktywne, pozwalaj¹c na ustalenie rankingu rekordów dostaw zgodnie z kryteriami wyboru w polu 'Ranking kolejki dostaw'. Tê opcjê nale¿y wybraæ tylko wtedy, gdy wszystkie rekordy s¹ przechowywane w bazie danych 'Zlecenie produkcyjne'.":
24170 "To pole s³u¿y do okreœlania kryteriów, które mog¹ byæ u¿ywane do ograniczania elementów umieszczanych w zewnêtrznej kolejce dostaw. Wartoœæ domyœlna tego pola jest ustawiona jako ALL, ale mo¿na j¹ zmieniæ, wprowadzaj¹c wyra¿enie np. (~{$Order Type}~==~Stock~). Kolejka ta filtruje rekordy znajduj¹ce siê w bazie danych 'Zapotrzebowanie'.":
24180 "Zostan¹ przetworzone wszystkie pola z klasyfikacj¹ INHERIT FROM SUPPLY(nazwa pola).":
24190 "Zostan¹ przetworzone wszystkie pola z klasyfikacj¹ INHERIT FROM SUPPLY(nazwa pola).":
24200 "Kiedy dla tego prze³¹cznika ustawiona jest wartoœæ true, pole 'Ranking kolejki zapotrzebowania' staje siê aktywne, pozwalaj¹c na ustalenie rankingu rekordów zapotrzebowania zgodnie z kryteriami wyboru w polu 'Ranking kolejki zapotrzebowania'. Tê opcjê nale¿y wybraæ tylko wtedy, gdy wszystkie rekordy s¹ przechowywane w bazie danych 'Zlecenie produkcyjne'.":
24210 "Po ustawieniu dla tego prze³¹cznika wartoœci true, liczba utworzonych ³¹czy bêdzie przydzielana w okreœlonych wielokrotnoœciach. Ta wielokrotnoœæ jest okreœlona w danych zestawienia materia³ów.":
24500 "Jeœli pole prze³¹cznika 'Zawsze u¿ywaj tego zestawu regu³' jest zaznaczone, zestawem regu³ grupuj¹cych wybranym w tym polu bêdzie zestaw regu³, który jest uruchamiany domyœlnie po wybraniu opcji 'Grupuj materia³y' w Sekwencerze.":
24505 "Po zaznaczeniu tej opcji globalnej domyœlne zachowanie SMC jest zastêpowane poprzez umo¿liwienie tworzenia powi¹zania wstecznych, gdy produkcja nastêpuje po zu¿yciu.":
24510 "Zaznaczenie tego prze³¹cznika spowoduje u¿ycie regu³y wybranej w polu 'Wybrany zestaw regu³ grupuj¹cych' jako regu³y domyœlnej, która zostanie uruchomiona po wybraniu opcji 'Grupuj materia³y' w Sekwencerze. Jeœli opcja 'Zawsze u¿ywaj tego zestawu regu³' nie jest zaznaczona, po wybraniu opcji 'Grupuj materia³y' w Sekwencerze zostanie wyœwietlone okno dialogowe wyboru regu³y umo¿liwiaj¹ce wybór regu³y, która ma zostaæ uruchomiona.":
25400 "To pole s³u¿y do przechowywania numeru zlecenia dostawy.":
25410 "To pole okreœla typ zlecenia, na przyk³ad Zapasy lub Zakup.":
25420 "Nazwa organizacji dostarczaj¹cej materia³y na potrzeby zlecenia.":
25430 "Numer czêœci, której dotyczy zlecenie.":
25440 "Opis czêœci, której dotyczy zlecenie.":
25450 "Data dostarczenia materia³u.":
25500 "To pole jest u¿ywane do okreœlenia, do którego zlecenia nale¿y czêœæ. Pierwszy wiersz zlecenia bêdzie rekordem nadrzêdnym i bêdzie dla niego w tym polu wyœwietlana wartoœæ PARENT. Pozosta³e wiersze zlecenia bêd¹ rekordami podrzêdnymi i bêdzie dla nich w tym polu wyœwietlany numer zlecenia, do którego nale¿¹.":
25510 "To pole s³u¿y do przechowywania numeru zlecenia zapotrzebowania.":
25520 "To pole okreœla typ zlecenia, na przyk³ad Produkcja na magazyn lub Zlecenie sprzeda¿y.":
25530 "Jednoznacznie identyfikuje element wiersza zlecenia.":
25540 "Nazwa organizacji wymagaj¹cej materia³ów na potrzeby zlecenia.":
25550 "Data, kiedy materia³ jest wymagany.":
25560 "Okreœla wielokrotnoœæ materia³u, który musi zostaæ zgrupowany. Zwykle liczba elementów bêdzie odpowiadaæ wielkoœci pude³ka lub skrzynki, np. na 1 pude³ko przypada 12 puszek, a zlecenie opiewa na 60 puszek. Istnieje zlecenie dostawy 50 puszek. Program Preactor zgrupuje jedynie 48 puszek z 50, a nastêpnie przeszuka inne zasoby w poszukiwaniu pozosta³ych 12 wymaganych puszek, ale w przypadku znalezienia dok³adnie 12 puszek zostanie jedynie utworzone ³¹cze. Aby ta funkcja by³a w³¹czona, w bazie danych 'Regu³y grupuj¹ce' powinno byæ zaznaczone pole 'Przydzielaj tylko wielokrotnoœci'.":
25600 "Numer zlecenia, do którego nale¿y pozycja zestawienia materia³ów.":
25605 "Numer czêœci zlecenia, do którego nale¿y pozycja zestawienia materia³ów.":
25610 "Numer operacji, do której nale¿y pozycja zestawienia materia³ów.":
25611 "Nazwa operacji, do której nale¿y pozycja zestawienia materia³ów.":
25615 "Numer czêœci produktu, który wymaga okreœlonego materia³u":
25620 "Numer czêœci pozycji zestawienia materia³ów.":
25630 "Wymagana liczba pozycji zestawienia materia³ów.":
25640 "Gdy w tym polu ustawiona jest wartoœæ true, liczba w zleceniu zostanie przemno¿ona przez wymagan¹ liczbê z zestawienia materia³ów.":
25650 "Powoduje, ¿e braki materia³owe s¹ ignorowane podczas uruchamiania regu³y grupuj¹cej. Pozwala na planowanie zleceñ z brakami.":
25700 "Numer zlecenia, w ramach którego wytwarzany jest koprodukt.":
25705 "Numer czêœci zlecenia, w ramach którego wytwarzany jest koprodukt.":
25710 "Numer operacji, w ramach której wytwarzany jest koprodukt.":
25715 "Nazwa operacji, w ramach której wytwarzany jest koprodukt.":
25720 "Nazwa koproduktu.":
25730 "Liczba wytworzonych koproduktów.":
25740 "Gdy w tym polu ustawiona jest wartoœæ true, liczba koproduktów zostanie przemno¿ona przez liczbê ze zlecenia.":
25800 "To pole okreœla typ zlecenia, na przyk³ad: Zlecenie produkcyjne, Zlecenie zakupu, Zlecenie sprzeda¿y lub Zapasy":
25810 "Gdy ta opcja jest zaznaczona, niezaplanowana operacja nie bêdzie wyœwietlana w oknie 'Niezaplanowane operacje'.":
25820 "Wyœwietla okno dialogowe, w którym widoczne s¹ pola zwi¹zane z kontrol¹ materia³u.":
25830 "To pole zawiera informacje dotycz¹ce statusu zapotrzebowania po zgrupowaniu materia³ów. Bêdzie w nim wyœwietlana jedna z nastêpuj¹cych wartoœci: 'Nieznane', 'Spe³nione', 'Wszystkie braki ignorowane', 'Braki materia³owe', 'Dostarczono zbyt du¿o', 'Dostarczono zbyt du¿o, niedobory', ''Dostarczono zbyt du¿o, wszystkie braki ignorowane'.":
25840 "To pole jest wype³niane po zgrupowaniu materia³ów. Po utworzeniu powi¹zania do zlecenia dostawy w bazie danych 'Zlecenia dostawy', pole 'Data zapotrzebowania' w bazie danych 'Zlecenie produkcyjne' jest wype³niane przy u¿yciu 'Daty dostawy' ze zlecenia dostawy. Program Preactor oszacuje wartoœæ w polu 'Data dostawy' na podstawie pola 'Najwczeœniejsza data rozpoczêcia' i u¿yje najnowszej spoœród tych dwóch dat w celu okreœlenia, która data ma byæ u¿ywana podczas tworzenia harmonogramu.":
25850 "To pole jest wype³niane po zgrupowaniu materia³ów. Po utworzeniu powi¹zania do zlecenia zapotrzebowania w bazie danych 'Zlecenia zapotrzebowania', pole 'Data dostawy' w bazie danych 'Zlecenie produkcyjne' jest wype³niane przy u¿yciu 'Daty zapotrzebowania' ze zlecenia zapotrzebowania. Program Preactor oszacuje wartoœæ w polu 'Data zapotrzebowania' na podstawie pola 'Termin realizacji' i u¿yje najwczeœniejszej spoœród tych dwóch dat w celu okreœlenia, która data ma byæ u¿ywana podczas tworzenia harmonogramu.":
25900 "Wyœwietla okno dialogowe zawieraj¹ce pola powi¹zane ze statusem operacji.":
25910 "Tê opcjê mo¿na wybraæ, gdy zlecenie jest dzielone. Ta opcja umo¿liwia ka¿dej partii produkcyjnej niezale¿ne przejœcie przez proces wytwarzania, np. aby rozpocz¹æ kolejn¹ operacjê, nie jest wymagane ukoñczenie wszystkich partii w jednej operacji.":
25920 "To pole okreœla kolor u¿ywany na pasku na wykresie Gantta dla tego rekordu.":
26000 "To pole definiuje nazwê grupy przezbrojeñ":
26100 "To pole s³u¿y do ustawiania czasu przezbrojenie, który jest stosowany, gdy atrybut okreœli³ zmiany miêdzy operacjami zaplanowanymi obok siebie.":
26200 "Nazwa wyœwietlana narzêdzia u¿ytkownika":
26210 "Skrypt zdarzenia, które zostanie uruchomione po wybraniu narzêdzia u¿ytkownika":
26220 "Nazwa menu narzêdzia w oknie u¿ytkownika":
26230 "Funkcja kodu s³u¿¹ca do wype³niania zawartoœci okna u¿ytkownika":
26240 "Etykieta okna u¿ytkownika":
26300 "Nazwa przycisku menu. Wskazuje miejsce wyœwietlania przycisku w systemie menu":
26310 "To pole okreœla, czy przycisk jest w³¹czony i czy w zwi¹zku z tym jest wyœwietlany":
26320 "To pole okreœla tekst, który bêdzie wyœwietlany na przycisku":
26330 "Skrypt zdarzenia, który zostanie uruchomiony po wybraniu przycisku":
;
