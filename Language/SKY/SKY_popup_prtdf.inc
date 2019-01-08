#VERSION 0
;
SKY POPUP HELP
1 "K danej poloke neexistuje nápoveda.":
10 "This field is used to identify what order the part belongs to.  In the first operation of an order it is set to PARENT, in other operations it is set to the unique order number or name.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Pole obsahuje zoznam rôznych stavov objednávky. Moné stavy sa zadávajú  v tabu¾ke stavov objednávky, kde pod¾a  potreby môete zada novı stav. Vtabu¾ke stavov môete zada aj vzorku pre zobrazenie operácie v plánovaèi. Toto umoní preh¾adnejšie zobrazenie, napr. naplánovanıch operácií.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "POle urèuje èíslo objednávky pre danı vırobok. Objednávka môe by oznaèovaná internım  èíslovaním alebo pod¾a èísla odberate¾a. Èíslo mus´by jednojednoznaèné. ":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Pouitie pre nastavenie priority operácie, ktorá bude pouitá v Plánovaèi. Èím nišie èíslo, tım vyššia priorita. Pozor, priorita môe by aj záporná, záporná priorita je vyššia ko kladná. Napríklad,-100 je vyššia ako -1, 0 a 10.":
90 "Urèuje èíslo operácie. Èíslo je pouité pri zoraïovaní  práce v Plánovaèi. Nišie èísla operácií sú ukonèené skôr ako zaènú vyššie. Ak majú dve operácie rovnaké èíslo, tak obidve budú ukonèené skôr ako zaènú operácie s vyšším èíslom.":
110 "Textovı popis operácie. Tento popis zároveò urèuje èíslo operácie.":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Skupiny nastavení sú definované v tabu¾ke Skupín nastavení, napr. Skupina1, Skupina2, atï. Tieto hodnoty sú pouité ako osi Matice nastavovacích èasov, ktorá urèuje medzioperaèné èasy medzi vırobkami z rozdielnych skupín nastavení (obyèajne nastavené v tabu¾ke zdrojov). Jednotlivé skupiny nastavení sú pridelené vırobkom v tabu¾ke vırobkov-produktov, hoci táto preddefinovaná hodnota môe by prepísaná v Hlavnom Plánovacom súbore.":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Ak je potrebné, tak toto pole urèuje špecifickı zdroj, ktorı by mal by pouitı v operácii. Ak je v tabu¾ke vırobkov-produktov pouité  'Vıber zo Skupiny', potom môe by pouitı ¾ubovo¾nı zdroj zo skupiny.  Ak chcete vynúti pouitie konkrétneho zdroja zo skupiny, pouite pre vıber rozba¾ovací zoznam.":
150 "Zobrazuje aktuálny zdroj pre operáciu. V prípade e objednávka bola naplánovaná-uvo¾nená  skôr, tento zdroj bude nastavenı ako  'Neurèené'.  Ak u bola operácia nahraná do plánovacieho panelu, tak nahratı zdroj bude zobrazenı.":
180 "Urèuje èi postup je kalkulovanı v èas na dávku, èas na poloku alebo sadzba za hodinu. Ak je vybratı 'èas na dávku', tak nišie zobrazenı  èas je èas postupu-vıroby pre všetky diely v dávke. Aj je zadanı 'èas na poloku', tak èas postupu-vıroby bude nišie zobrazená hodnota vynásobená ve¾kosou dávky. Ak je vybrané 'sadzba za hodinu'. tak èas postupu-vıroby bude vypoèítanı z hodnoty dávky.":
220 "Typ èas postupu-vıroby je  vybratı ako 'Èas na Poloku'. Musíte v tomto poli zada èas operácie pre kadú poloku.":
230 "Typ èas postupu-vıroby je  vybratı ako 'Èas na Dávku'. Musíte v tomto poli urèi celkovı èas operácie pre dávku.":
240 "Typ èas postupu-vıroby je  vybratı ako 'Sadzba za Hodinu'. Musíte v tomto poli zada ko¾ko poloiek-vırobkov môe by vyrobenıch za hodinu.":
251 "Farba zadaná v tomto poli urèuje Plánovaèu, e táto èas má by Ganttovom Grafe zobrazená inou farbou.  Farba oznaèuje lišty pod¾a hodnoty zadanej v poli Doteraz Vyrobené a Doteraz Èas.":
260 "Mnostvo pre objednávku, dávku.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "Pouité pre urèenie èasu, pred ktorım nie je moné zaèa operáciu, môe to napríklad znamena èas kedy bude k dispozícii materiál.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Pouitím tohoto prepínaèa urèujete v Plánovaèi, e èasy zaèiatku a konca sú 'skutoèné - platné' hodnoty a operácia je ukonèená. V prípade nastavenia, tento prepínaè zabraòuje aby bolo zrušené priradenie objednávky zdrojom v Plánovaèi. 0bjednávka bude permanentne umiestnená v plánovacom panely.":
390 "Plánovaè nastavuje toto pole poèas zoraïovania na èas kedy je naplánovanı zaèiatok èasu nastavenia.":
400 "Plánovaè aktualizuje toto pole poèas zoraïovania na èas kedy je naplánovanı zaèiatok operácie.":
410 "Plánovaè aktualizuje toto pole poèas zoraïovania na èas kedy je naplánovanı  koniec operácie.":
420 "Set this toggle if you do not wish this job to be unallocated after selecting Unallocate All Jobs in the sequencer. This will lock the operation. This can also be achieved when using 'Highlight Locked Operations' locate mode in the Sequencer by pointing with the mouse at an operation (icon or bar in the overview), depressing the shift key on the keyboard and clicking with the left mouse button.":
421 "Operácie, ktoré majú zapnutı tento prepínaè ostanú nepridelené aj po spustení plánovacieho procesu. Ronako všetky nasledujúce operácie v rámci objednávky ostanú nepridelené.":
430 "Umoòuje definova pouívate¾ské atribúty vırobkov, ako napr. farba, material, ... Pod¾a špecifikovanıch charakteristík-atribútov  môe by pridelovaná priorita, napr. biele vırobky majú vyššiu prioritu ako lté.  Tieto atribúty sú pouité v pravidlách  'Preferované Pravidlá Zoraïovania' Plánovaèa pri spájaní podobnıch objednávok  v rámci èasového horizontu.":
440 "Vyplnte informáciu o ukonèenom mnostve a zadajte èas na dávku (èas dávky) do pola 'Doteraz Èas'. Plánovaè automaticky prepoèíta  'Èas Ukonèenia' pre túto operáciu.":
450 "Vyplnte informáciu o èase ukonèenia a zadajte ukonèené mnostvo dávky (èasti dávky) do pola 'Doteraz Vyrobené'. Plánovaè automaticky prepoèíta  'Èas Ukonèenia' pre túto operáciu.":
460 "Údaj ’Skutoènı Èas Operácie’ pouíva na prepoèet  aktualizovaného èasu operácie údaje v  ’Mnostvo Doteraz’ a ’Èas Doteraz’. Údaje  ’Mnostvo Doteraz’ a ’Èas Doteraz’ môu by upravované v Editore operácií, údaj ’Skutoènı Èas Operácie’ je naopak aktualizovanı  pri ïalšom spustení Plánovaèa.":
474 "Urèené pre záznam nákladov na materiál v èase keï je materiál zadanı do vıroby. Pole môe by pouité pre záznam fixnıch nákladov na poloku, napr. tepelné spracovanie na kooperácii, atï.":
476 "Materiálové náklady na dávku v èase keï je materiál zadanı do vıroby. Pre vıpoèet je pouitı údaj 'Materiálové Náklady na Poloku'.":
477 "Priame náklady operácie v aktuálnom postupe.":
530 "Urèuje èasovı horizont pre ktorı môu by operácie vo vırobe zhromadòované. Zdroj podielajúci sa na vykonaní operácie sa pozerá dopredu o èas od aktuálneho bodu po údaj zadanı v poli 'Perióda dávkovania'. Na zhromadòovanie majú  vplyv Preferované Pravidlá Zoraïovania a  Èas nastavenia v Tabu¾ka Zdrojov. Perióda dávkovania môe by nastavená pre kadı vırobok zvláš v Tabu¾ka Vırobkov a upravovaná pre konkrétne objednávky v  Hlavnom Plánovacom súboru, alebo nastavená ako globálne pravidlo v Nastavení Konfigurácie.":
540 "Word dokument s informáciami o produkte zadanı v Tabu¾ke Vırobkov. Tento dokument je prístupnı a môe by menenı z editora Hlavného Plánovacieho súboru.":
541 "Pole popisuje stav operácie. Moné sú štyri stavy: Nezaèaté, Nastavenie, Aktuálne, Ukonèené.":
550 "Vırobky môu ma špeciálne charakteristiky, pouité v Tabu¾ke Atribútov, Tieto tabu¾ky sú definované pouívate¾om a môu urèova napr. farbu, vıkon, rozmer, ... Tieto atribúty môu by zadané v poli 'Podobné ako' v Tabu¾ka Vırobkov pre definíciu èasu nastavenia 'Podobné ako'.":
560 "Pouité na stanovenie priority záznamov  v Tabu¾ke Atribútov Vırobkov, pouité zoraïovacím pravidlom APS.":
570 "Vırobky môu ma špeciálne charakteristiky, pouité v Tabu¾ke Atribútov, Tieto tabu¾ky sú definované pouívate¾om a môu urèova napr. farbu, vıkon, rozmer, ... Tieto atribúty môu by zadané v poli 'Podobné ako' v Tabu¾ka Vırobkov pre definíciu èasu nastavenia 'Podobné ako'.":
580 "Pouité na stanovenie priority záznamov  v Tabu¾ke Atribútov Vırobkov, pouité zoraïovacím pravidlom APS.":
590 "Vırobky môu ma špeciálne charakteristiky, pouité v Tabu¾ke Atribútov, Tieto tabu¾ky sú definované pouívate¾om a môu urèova napr. farbu, vıkon, rozmer, ... Tieto atribúty môu by zadané v poli 'Podobné ako' v Tabu¾ka Vırobkov pre definíciu èasu nastavenia 'Podobné ako'.":
600 "Pouité na stanovenie priority záznamov  v Tabu¾ke Atribútov Vırobkov, pouité zoraïovacím pravidlom APS.":
602 "Toto pole vypoèítava celkovı èas trvania objednávky poènúc zaèiatkom nastavenia prvej operácie po koniec poslednej operácie objednávky.":
620 "Vybavovacie pravidlo, ktoré poèíta index ako podiel èasu do dátumu dodania a predpokladaného èasu ukonèenia práce. Pomer menší ako 1 znamená, e úloha je v sklze a väèší ako 1 e úloha má èasovú rezervu.":
815 "Táto vo¾ba umoòuje nastavi nastavovací - prípravnı a operaènı èas. Je pouité aj pri aktualizácii postupu prác v procese vıroby.":
1020 "Urèuje názov Skupiny Zdrojov. Puíva sa pri identifikácii urèitej skupiny zdrojov s podobnou funkcionalitou.":
1030 "Urèuje plátné zdroje zo Skupiny Zdrojov. Zdroj môe by èlenom viacerıch skupín.":
1060 "Zpnutı prepínaè umoní zobrazenie pouitia skupiny zdrojov v záloke Diagram v okne Plánovaèa.":
1070 "Farba pre zobrazenie v diagrame pouitia  v záloke viacnásobnıch diagramov pouitia skupín zdrojov - okno Plánovaèa.":
1080 "Táto farba sa zobrazuje v okne pouitia zdrojov (Plánovaè) v prípade ak pouitie presahuje disponibilnú kapacitu zdrojov alebo skupiny zdrojov (ak je pole Pouitie Max.Hod. nastavené na Neurèené). Ak je do pola Pouitie Max.Hod. zadaná hodnota, tak diagram zmení farbu pod¾a tejto hodnoty.":
1090 "Farba pre zobrazenie nastavenia - setupu v hodinách v grafe vyuitia. ":
2020 "Názov zdroja.":
2023 "Hodinová sadzba nákladov pri pouití zdroja.":
2024 "Aplikuje  hodnotu 'Nákladovı Faktor %' v záznamoch stavov kalendára  na hodinové náklady zdrojov.":
2030 "Urèuje spôsob zobrazenia zdroja a skupiny zdrojov v okne Plánovaèa - preh¾ad zoradenia a okne Diagram vyuitia.":
2040 "Môe by nastavené na Vidite¾né, Minimalizované alebo Deaktivované. Pouité pri štarte Plánovaèa na riadenie vıchodiskovho stavu okna zdrojov. Normálne je nastavené Minimalizované. Ak je nastavené Deaktivované, zdroj nie je pouitı pre zoraïovanie.":
2050 "V Plánovaèi riadi horizontálny (èasovı) rozsah okna Ganttovho diagramu pre zdroje. Môe by nastavené od minút po tıdne.":
2070 "Umoòuje nastavi  v rámci pracovnej zmeny kapacitu zdroja na Obmedzenú alebo Neobmedzenú.":
2071 "Allows a resource capacity to be set to Finite, Infinite or Infinite with Shift Patterns when running in Infinite Capacity Sequencer Mode.":
2080 "V Plánovaèi riadi horizontálny (èasovı) rozsah okna pokrytıch zdrojov.":
2100 "Vıber sekundárnych obmedzení pre primárny zdroj. Urèenie mnostva obmedzení a spôsob akım sú aplikované na primárny zdroj.":
2110 "Urèenie, kedy má by pouitie sekundárneho obmedzenia zvıšené alebo zníené, napr.  Zvıšenie pre Trvanie vyuíva sekundárne obmedzenie poèas trvania operácie a ukonèuje ho po dokonèení operácie. Ak je vo vırobe poèas nieko¾kıch operácií pouité zariadenie - prípravok, tak moe by pouité 'Zvıšenie pri štarte' pre prvú operáciu a 'Zníenie na konci' pre poslednú operáciu. Toto nám zaistí , e zariadenie - prípravok nemôe by vyuitı inım vırobnım procesom, pokia¾ je pouívanı zodpovedajúci zdroj.":
2120 "Urèenie poadovaného mnostva sekundárneho obmedzenia. Ak je hodnota nastavená na 'Mnostvo', tak poadované mnostvo je rovnaké ako spracovávaná ve¾kos dávky.":
2130 "Definuje atribút operácie, ktorı zabraòuje aby nepodobné operácie boli vykonávané paralelne na zdroji s obmedzenou kapacitou.":
2150 "Pouité v APS produktoch na nastavenie kritérií pouitıch  preferovanımi pravidlami zoraïovania pri urèovaní práce.":
2160 "Pouité v APS produktoch v pravidlách plánovania  'Minimalizácia RV' na nastavenie èasového zásobníka v ktorom sa akumuluje RV pred vybranımi zdrojmi.":
2180 "Èíselná hodnota pouitá na urèenie poradia v ktorom sú zobrazované zdroje v tabu¾ke zdrojov. Je moné poui aj pre zmenu preddefinovaného poradia v ktorom sú zdroje zobrazované v preh¾ade poradia. ":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Urèuje spôsob, akım sú zdroje zobrazované v okne Plánovaèa. Monosti sú 'Vdy', 'Len v skupine' a 'Skry'.":
2191 "Determines the manner in which the operations will be displayed in the Sequence Overview. The options are 'Stacked' where the operations are displayed on one overview line, and 'Cascade' where each operation is displayed on its own overview line.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "Zapnutı prepínaè vylúèi zdroj z prepoètov vıkonnosti plánu.":
2210 "Pole umoòuje vybra zodpovedajúci prehliadaè . Pole obsahuje zoznam Systémovıch mien plánu prevzatıch z PCO dátovej tabu¾ky. ":
2220 "Editácia atribútov spojenıch so zdrojom.":
2230 "Pole pre zadanie atribútu typu reazec.":
2240 "Pole pre zadanie atributov typu real.":
2250 "Pole pre zadanie atribútov typu trvanie (duration).":
2260 "Úèinnos zdroja, preddefinovaná hodnata je 100%. Ak je hodnota nastavená na 200%, tak operácia bude vykonaná 2 x rıchlejšie (polovièka normálneho èasu operácie).":
2270 "Tento prepínaè umoòuje aplikova hodnotu nastavenú v poli 'Úèinnos %' na všetky operácie, ktoré majú èas nastavenia a sú spojené s tımto zdrojom.":
2280 "Prepínaè umoòuje zobrazi pouitie zdroja v diagrame v okne grafov vyuitia v Plánovaèi.":
5035 "Násobite¾ nákladového faktora, ktorı ovplyvòuje nábeh nákladov na zdroj, na ktorı je aplikovanı. Hodnota 100%  nespôsobí zvıšenie, 150%  zvvıši hodnotu nákladov o 50 % .  Nastavenie v dátach-tabu¾ke kalendárnych stavov poskytne preddefinované hodnoty pouité v súboroch Hlavného Kalendára.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Pole urèuje, ako je sekundárne obmedzenie pouité poèas operácie, napr.  'Zvıšenie pre Trvanie', 'Zvıšenie Len pre Èas Nastavenia', atï.":
6160 "Mnostvo sekundárneho obmedzenia poadovaného v aktuálnej operácii, napr. môete urèi e k  operácii je poadovaná jedna nástrojová upínacia hlava.  ":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "Nastavenie nasledujúcej skupiny zdrojov, ktorá urèuje 'vynútenı zoznam' zdrojov, urèené  napr. vo  vybranej skupine.  Takto sa vynucuje vyuitie urèenıch zdrojov v nasledujúcich operáciách. Ak postup v nasledujúcich operáciách pouíva zdroje, ktoré nie sú vo vynútenom zozname, tak tieto nebudú pouité pri zoraïovaní. Nastavenie nasledujúcej skupiny zdrojov sa kumuluje a môe by pouité na viacero operácií postupu pridaním do  'vynúteného zoznamu'.":
6190 "Vynulovanie Nasledujúcej skupiny zdrojov odstráni všetky zdroje urèené vo 'vynútenom zozname'. Ak je skupina zdrojov nastavená na 'Všetko', tak budú pouité zdroje tak, ako boli pôvodne nastavené v postupe.":
6230 "Urèenie èasu nastavenia. Tento èas bude pridánı k èasom urèenım v 'Matici Sekvenène závislıch èasov nastavenia'.":
6430 "Urèenie názvu ikony. Tlaèítko Edit umoní vytvorenie novej ikony.":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Urèenie maximálneho èasového intervalu medzi dvoma po sebe idúcimi operáciami. Maximálny èasovı inerval je vymedzenı v poli 'Typ Intervalu'.":
6540 "Urèuje typ vsunutia maximálneho  èasového intervalu (urèeného v 'Max Èas Pred Nasl. Op.') medzi dve po sebe idúce  operácie.  Môe by nastavené na typ: 'Koniec Koniec', 'Koniec Štart', 'Štart Štart', 'Štart Koniec'.":
6550 "Urèunie maximálneho èasu. Hodnota je zadaná  ako percento z teoretickej hodnoty operaèného èasu o ktorú môe by operaènı èas nacıšenı pri zoraïovaní v Planovaèi. ":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Pole 'Zásobník Dodania' obsahuje èas , ktorı je odpoèítanı od Dátumu Dodania  pri procese zoraïovania. Takımto spôsobom môeme zníi riziká pri neoèakávanıch udalostiach.":
7020 "Poèet dní pred aktuálnym dátumom, ktoré sú zobrazené v Preh¾ade Zoradenia.":
7030 "Èasovı úsek odd aktuálneho èasu, ktorı sa zobrazuje v Preh¾ade Zoradenia.":
7035 "Otvorenie konfigurácie , ktorá pouívate¾ovi umoòuje prispôsoby Preh¾ad Zoradenia.":
7040 "Urèenie posunu od èasu zadania objednávky pred ktorım nemôe by objednávka zaèatá. Ak je nastavené na 'Neurèené', tak nie sú dané nijaké obmedzenia a platí aktuálny èas. ":
7050 "Urèenie posunu od èasu zadania objednávky od ktorého by praca mala by aktuálna. Môe by prepísané.":
7060 "Èas o ktorı je posunuté ukonèenie od aktuálneho èasu. Ukonèenie sa rovná aktuálnemu èasu, e posunutie je nastavené na 0 Hod. a 0 Min.":
7067 "Vo¾by kalkulácií nákladov. Môe by:  Poèas Zoraïovania, Po zoraïovaní, Nikdy.":
7120 "Nastavenie módu 'Preh¾ad Zoradenia'.":
7130 "Poèet dní od teraz do zaèiatku Preh¾adu Zoradenia.":
7140 "Poèet dní od teraz do konca Preh¾adu Zoradenia.":
7320 "Umoòuje vıber scriptu pre import objednávok z tabu¾ky scriptov.":
7330 "Umoòuje vıber scriptu pre export objednávok z tabu¾ky scriptov.":
7430 "Toto prepínacie pole zapína oznaèenie - malı èierny trojuholník pri operáciách v Plánovaèi. Toto oznaèenie u¾ahèuje manipuláciu s operáciami umiestnenımi v Plánovacom panely, špeciálne malıch operácií.":
7450 "Urèenie preddefinovaného PESP scriptu, ktorı zabezpeèuje import objednávok z 'Import Objednávok'  v 'Prenos Dát Menu'.":
7470 "Urèenie preddefinovaného PESP scriptu, ktorı zabezpeèuje export objednávok z 'Export Objednávok'  v 'Prenos Dát Menu'.":
7480 "Urèenie preddefinovaného PESP scriptu, ktorı zabezpeèuje uvo¾nenie plánu z 'Uvo¾nenie Plánu'  v 'Prenos Dát Menu'.":
7490 "Urèenie preddefinovaného PESP scriptu, ktorı bude spustenı pri alokácii operácii v Plánovaèi pri pouití APS pravidiel.":
8020 "Názov sekundárneho obmedzenia.":
8030 "Umoòuje nastavi farbu pouívate¾ského diagramu, keï sa hodnoty nachádzajú medzi hornım a dolnım limitom.":
8040 "Nastavenie vzorky vıplne.":
8060 "Farba vıplne diagramu v prípade presiahnutia horného limitu.":
8080 "Farba vıplne diagramu v prípade presiahnutia dolného limitu.":
8090 "Urèenie, èi sekundárne obmedzenie ovplyvòuje plán pri pouití verzie 300 FCS a vyššie. Neoznaèenie tohoto zaèiarkavacieho  políèka vo všetkıch verziách obmedzí vıstrahy v prípade presiahnutia limitov sekundárneho obmedzenia. ":
8091 "When in Infinite Capacity Sequencer Mode, this field specifies whether this secondary constraint should constrain the schedule when using a 300 FCS product or above.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Urèuje, ako úèinnos v kalandáry primárnych zdrojov ovplyvòuje pouitie tohoto sekundárneho obmedzenia. Vo¾by sú: iadny ; Zaèiatok Op Úèinnos; Pod¾a Zmien Úèinnosti; Poui 100% ak je viac ako  0%.":
8101 "When in Infinite Capacity Sequencer Mode, this field will determine how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8120 "Dialóg atribútov sekundárneho obmedzenia.":
8130 "Atribúty sekundárneho obmedzenia typu reazec.":
8140 "Atribúty sekundárneho obmedzenia typu real.":
8150 "Atribúty sekundárneho obmedzenia typu trvanie.":
8160 "Prepínaè pre zobrazenie diagramu vyuitia sekundárneho zdroja  v okne diagramov.":
9020 "Názvy Skupín nastavení. Tieto skupiny tvoria X a Y osi v Matici sekvenène závislıch èasov nastavenia v tabu¾ke zdrojov.":
12020 "Názov atribútu v Tabu¾ka Atribútov vırobku 1.":
13020 "Názov atribútu v Tabu¾ka Atribútov vırobku 2.":
14020 "Názov atribútu v Tabu¾ka Atribútov vırobku 3.":
16020 "Názov súboru popisujúceho konfiguráciu zobrazenia na obrazovke. Popis je pouitı ako tip pre Ikony Lišty Nástrojov pracovnej plochy.":
16030 "Súbor môe by vybratı pomocou tlaèítka na ¾avej strane po¾a. Nastavenie Pracovnej plochy je uloené v súbore s príponou .WPI. Uloenie sa vykoná príkazom 'Ulo Pracovnú Plochu' v menu Plánovaèa.":
18510 "Názov zákazníka - organizácie pre ktorú je objednávka - zákazka zadaná.":
18520 "Primárny kontakt na zákazníka.":
18530 "Telefónny kontakt na zákazníka.":
18540 "E-Mail Addresa pouitá v spojení s objednávkou.":
21000 "Stav Objednávky. ":
21020 "Popis stavu objednávky.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Toto pole špecifikuje, èi záznam je rodièovskım záznamom sady pravidiel alebo potomok.":
24010 "Obsahuje názov sady pravidel.":
24020 "Tento prepínaè sa pouíva na vynulovanie spojovıch odkazov len pre príkazy, ktoré sú vo fronte dopytu prvého prechodu (èi u odblokované alebo nie) sady pravidiel.":
24030 "Uchováva názov konkrétnej funkcie priechodu pravidla.":
24040 "Prepínaè, ktorı keï je nastavenı zapnutı (true), umoní priechod pravidla. Keï je nastavenı vypnutı (false), priechod sa bude ignorova, keï sa spustí sada pravidiel.":
24050 "Keï je tento prepínaè zapnutı a spustí sa sada pravidiel, v pracovnom adresári sa vytvorí ladiaci súbor.":
24060 "Toto pole sa pouíva na blišie urèenie urèitého kritériá, ktoré mono poui na obmedzenie toho, aké poloky sa umiestni do fronty interného zásobenia. Implicitná hodnota pre toto pole je nastavená ako VŠETKY, ale to sa dá zmeni zadaním vırazu napríklad (~ {$ Order Type} ~ == ~ Stock ~). Fronta filtruje záznamy uchovávané v databáze pracovnıch príkazov.":
24070 "Toto pole obsahuje kritériá vyuite¾né pre kategorizovanie poloiek vo fronte interného zásobenia. Napríklad môete kategorizova front interného zásobenia pomocou termínu dokonèenia, dátumu najskoršieho zaèatia alebo priority.":
24080 "Toto pole sa pouíva na blišie urèenie urèitého kritériá, ktoré mono poui na obmedzenie, aké poloky sa umiestni do fronty interného zásobenia. Implicitná hodnota pre toto pole je nastavená ako VŠETKY, ale to sa dá zmeni zadaním vırazu napríklad (~ {$ Order Type} ~ == ~ Stock ~). Fronta filtruje záznamy uchovávané v databáze pracovnıch príkazov.":
24090 "Toto pole obsahuje kritériá vyuite¾né pre kategorizovanie poloiek vo fronte interného zásobenia. Napríklad môete kategorizova front interného zásobenia pomocou termínu dokonèenia, dátumu najskoršieho zaèatia alebo priority.":
24100 "Toto pole obsahuje zoznam rôznych štandardnıch pravidiel spájania, ktorá poslúi na spájanie pracovnıch príkazov dohromady. Tie obsahuje tri špeciálne poloky: Definovanı uívate¾om, Uívate¾ská funkcie a skript PESP, ktoré poskytujú príleitos tvori pravidla viac upravená na potreby zákazníkov.":
24110 "Toto pole bude vidite¾né vtedy, keï pole 'Typ pravidla' je nastavené 'Definované pouívate¾om' alebo 'Uívate¾ská funkcia'. Vıraz sa má poui pre pravidlo, zadané do tohto po¾a. Monım príkladom je: (~ {+: $ Product Attribute 1} ~ == ~ {-: $ Product Attribute 1} ~), èo dovo¾uje, aby sa spájali iba príkazy zásobenia aj dopytu, ak pole 'Atribút 1 vırobku' budú ma rovnakú hodnotu.":
24120 "Toto pole bude vidite¾né len vtedy, keï pole 'Typ pravidla' je nastavené na 'Skript PESP'. Toto pole uchováva názov skriptu PESP, ktorı sa má poui ako pravidlo.":
24130 "Táto vo¾ba dovo¾uje vytvára spoje (odkazy) na riadky štruktúry vırobku (kusovníka), kde mnostvo poloky štruktúry vırobku nemusí by úplne uspokojenıch pre danı spoj, ktorı sa má urobi. Kadá poloka, kde chıba materiál, sa zvıraznia ako nedostatok materiálu.":
24140 "Táto vo¾ba iba dovolí tvori spoje na riadky štruktúry vırobku, kde je mnostvo štruktúry vırobku plne uspokojené. Všetky poloky, kde chıba materiál, sa zvıraznia ako nedostatok materiálu.":
24141 "Táto vo¾ba mení implicitné správanie SMC tak, e povolí spätné prepojenie pre prípady, keï dôjde k vırobe a po spotrebe.":
24150 "Keï je tu nastavené 'pravdivı', príkazy u rozvrhnuté je moné znovu spája.":
24160 "Keï je tento prepínaè zapnutı (true), pole 'Kategorizácia frontu zásobenia' sa odblokuje a dovolí radi záznamy zásobenia do kategórií pod¾a vıberového kritéria 'Kategorizácia frontu zásobenia'. Túto monos vo¾te len v prípade, kedy sa všetky záznamy uchovávajú v databáze pracovnıch príkazov.":
24170 "Toto pole sa pouíva na blišie urèenie urèitého kritériá, ktoré mono poui na obmedzenie toho, aké poloky sa umiestnia do fronty interného zásobenia. Implicitná hodnota pre toto pole je nastavená ako VŠETKY, ale to sa dá zmeni zadaním vırazu napríklad (~ {$ Order Type} ~ == ~ Stock ~).":
24180 "Bude spracované kadé pole z klasifikácie INHERIT FROM SUPPLY (názov po¾a).":
24190 "Bude spracované kadé pole z klasifikácie INHERIT FROM DEMAND (názov po¾a).":
24200 "Keï je Tetno prepínaè zapnutı (true), pole 'Kategorizácia frontu dopytu' sa odblokuje a dovolí, aby záznamy dopytu boli radené do kategórií pod¾a kritéria vıberu v poli 'Kategorizácia frontu dopytu'. Túto vo¾bu pouite, len keï všetky záznamy budú uchovávané v databáze pracovnıch príkazov.":
24210 "Mnostvo vytvoreného spoja (odkazu) sa bude priraïova v stanovenıch násobkoch, ak tento prepínaè bude zapnutı (true). Tento násobok je špecifikovanı dátach štruktúr vırobkov.":
24500 "Keï je zaškrtnuté pole 'Vdy pouite túto sadu pravidiel', bude v tomto poli zvolené pravidlo spojovanie, ktoré sa implicitne spustí, keï v programe Sequencer zvolíte monos 'Spoji materiály'.":
24505 "Táto globálna vo¾ba mení implicitné správanie SMC tak, e povolí spätné prepojenie pre prípady, keï dôjde k vırobe a po spotrebe.":
24510 "Keï bude tento prepínaè zaškrtnutı, uplatòuje sa pravidlo vybrané v poli 'Vybraná sada pravidiel spájania' ako implicitné pravidlo, ktoré pobeí, ak v programe Sequencer je zvolená monos 'Spoji materiály'. Keï monos 'Vdy ui túto sadu pravidiel' nebude zaškrtnutá, objaví sa dialóg vıberu pravidiel, keï vyberiete monos 'Spoji materiály', èo dovolí, aby toto pravidlo, ktoré má bea, bolo vybrané v tomto okamihu.":
25400 "Toto pole sa pouíva pre èíslo príkazu zásobenia.":
25410 "Toto pole vyznaèuje typ príkazu, napríklad Zásoba alebo Nákup.":
25420 "Názov organizácie, ktorá dodáva materiál pre danı príkaz.":
25430 "Èíslo dielu, pre ktorı je tento príkaz.":
25440 "Popis dielu, pre ktorı je tento príkaz.":
25450 "Dátum, kedy tento materiál bude dodanı.":
25500 "Toto pole sa pouíva na vyznaèenie, ku ktorému príkazu patrí danı diel. Prvı riadok príkazu bude rodièovskım záznamom a v tomto poli zobrazí PARENT. Ostatné riadky príkazu budú záznamy potomkov a v tomto poli zobrazí èíslo príkazu, ku ktorému tento diel patrí.":
25510 "Toto pole uchováva èíslo dopytového príkazu.":
25520 "Toto pole vyznaèuje typ príkazu, napríklad vıroba na sklad alebo zákazka.":
25530 "Jednoznaène idetifikuje poloku príkazu.":
25540 "Názov organizácie, ktorá poaduje materiály pre tento príkaz.":
25550 "Dátum, kedy sa vyaduje tento materiál.":
25560 "Špecifikuje násobok artikla, ktorı treba spoji. Èasto je to poèet artiklov v krabici alebo puzdre, napríklad 12 plechoviek tvoria jednu krabicu, príkaz vyaduje 60 plechoviek. Príkaz je na 50 plechoviek. Preactor spojí iba 48 plechoviek z 50, potom sa pozrie po zostávajúcich 12 plechovkách, ktoré sa poadujú, ale urobí spoj len vtedy, keï ich nájde presne 12. Musíte zaškrtnú pole 'Priradi len násobky' v databáze 'Pravidlá spájanie', aby ste zapli túto vlastnos.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "Èíslo dielu poloky štruktúry vırobku.":
25630 "Poadované mnostvo poloky štruktúry vırobku.":
25640 "Keï je nastavené na zapnuté (true), toto pole spôsobí, e mnostvo príkazu sa vynásobí poadovanım mnostvom štruktúry vırobku.":
25650 "Spôsobí, e na nedostatok materiálu nebude branı oh¾ad, keï je spustené pravidlo spájania. Dovo¾uje rozvrhova príkazy s nedostatkom materiálu.":
25700 "Èíslo príkazu, v ktorom sa vyrába koprodukt.":
25705 "Part number of the order that co-product is produced in.":
25710 "Èíslo operácie, ktorá vyrába koprodukt.":
25715 "Operation name that produces co-product.":
25720 "Názov koproduktu.":
25730 "Vyrobené mnostvo koproduktu.":
25740 "Keï je toto pole nastavené ako zapnuté (true), spôsobí, e mnostvo koproduktu sa bude násobi mnostvom príkazu.":
25800 "Toto pole vyznaèuje typ príkazu, napríklad pracovnı príkaz, nákupná objednávka, zákazka alebo zásoba.":
25810 "Keï je pole zaèiarknuté, nerozvrhnutá operácia sa u naïalej nebude zobrazova v okne 'Nerozvrhnuté operácie'.":
25820 "Zobrazuje dialóg s po¾ami, ktoré sa tıkajú riadenia materiálu.":
25830 "Toto pole poskytuje informácie o statuse dopytu potom, èo materiály boli spojené. Bude obsahova jednu z nasledujúcich hodnôt: 'Neznáme', 'Splnené', 'vzniknutı nedostatok ignorovanı', 'Nedostatok', 'Nadmerné zásobenia', 'Nadmerné zásobenie, nedostatok', 'Nadmerné zásobenie, všetok nedostatok ignorovanı'.":
25840 "Toto pole sa zaplní potom, èo materiály budú spojené. Keï urobíte spoj na príkaz zásobenia v databáze príkazov, pole 'Dátum dopytu' v databáze pracovnıch príkazov sa vyplní hodnotou 'Dátum zásobenia' príkazu zásobenia. Preactor vyhodnotí dátum zásobenia voèi hodnote 'Najskorší dátum zaèatia' a ??pouije neskorší z tıchto dvoch dátumov k rozhodnutiu, ktorı dátum sa má poui pri rozvrhovaní.":
25850 "Toto pole sa zaplní potom, èo materiály budú spojené. Keï bol urobenı spoj na príkaz dopytu v databáze, pole 'Dátum zásobenia' v databáze príkazov sa vyplní hodnotou dátumu dopytu, s ktorou je tento príkaz spojenı. Preactor vyhodnotí dátum dopytu voèi termínu dokonèenia a pouije najskorší z dvoch dátumov k rozvrhovaniu.":
25900 "Zobrazí dialóg s po¾ami tıkajúcimi sa stausu operácie.":
25910 "Túto vo¾bu môete vybra, keï príkaz bude rozdelenı, táto monos umoní, e kadá z vırobnıch èiastkovıch dávok bude pokraèova vırobnım procesom nezávisle, napríklad všetky èiastkové dávky sa nemusia dokonèi v jednej operácii, skôr ne môe zaèa operácia nasledujúca.":
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
