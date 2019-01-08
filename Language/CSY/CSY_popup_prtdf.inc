#VERSION 0
;
CSY POPUP HELP
1 "S touto polokou není sdruená ádná nápovìda.":
10 "Toto pole urèuje, ke kterému pracovnímu pøíkazu souèást patøí. V první operaci pøíkazu je vyplnìn nadøízenı artikl, v dalších operacích je vyplnìna jedineèná hodnota èísla nebo názvu pøíkazu.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Toto pole obsahuje seznam rùznıch statusù, které lze definovat pro  pracovní pøíkaz. Hodnoty se berou z tabulky dat statusù pracovních pøíkazù, kam lze pøidat novı status, jestlie to je potøebné. Vzor pruhu operace, nastavenı v tabulce dat statusù pracovních pøíkazù pro kadı z typù statusù, mùete pouít k definování vzoru pruhu operace pracovního pøíkazu, kdy se pracovní pøíkaz rozvrhuje v programu Sequencer.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "Toto pole se vyuívá k vyznaèení èísla pracovního pøíkazu pro danı vırobek. To mùe bıt interní èíslo pracovního pøíkazu nebo èíslo, specifikované zákazníkem. Èíslo pracovního pøíkazu musí bıt jednoznaèné.":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Toto pole vyuijte k nastavení priority pro danou práci, která se zase pouije v programu Sequencer. Èím niší je èíslo, tím vyšší je priorita. Všimnìte si, e priority mohou bıt záporné: záporná priorita je vyšší ne priorita kladná. Napøíklad -100 je vyšší ne -1 a 0 je vyšší ne 10.":
90 "Toto pole nastavuje èíslo operace pro práci. To se vyuívá k øazení prací do posloupností v programu Sequencer. Operace s nejniším èíslem budou dokonèeny pøed zahájením operací s vyššími èísly. Jestlie ve vırobku existují dvì operace se stejnım èíslem, pak obì budou dokonèeny pøed zahájením operací s vyššími èísly.":
110 "Toto je psanı popis nebo název operace, která se koná, také vyznaèené èíslem operace.":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Skupiny seøízení jsou definovány v tabulce dat skupin seøízení, napøíklad skupina seøízení 1, skupina seøízení 2 atd. Tyto hodnoty se vyuívají jako osy jedné z matic dob seøízení závislıch na posloupnostech, které zakládají dobu pøestavení mezi vırobky v rùznıch skupinách seøízení (typicky nastavené v tabulce dat zdrojù). Jednotlivé skupiny seøízení jsou pøiøazené vırobkùm v tabulce dat vırobkù, pøíèem tyto implicitní hodnoty lze pøepsat v souboru hlavního rozvrhu.":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Jestlie to je nutné, toto pole lze vyuít k oznaèení konkrétního zdroje, kterı má zpracovat danou operaci. Jestlie v tabulce dat vırobkù bylo nastaveno 'Zvolit ze skupiny', pak kadı ze zdrojù ve skupinì zobrazenı v poli Skupina zdrojù mùe bıt pouit. Jestlie chcete prosadit operaci na konkrétní zdroj ve skupinì, pak pouijte pøekryvnı seznam a zvolte poadovanı zdroj.":
150 "Toto pole zobrazuje skuteènı zdroj, kterı zpracuje danou operaci. Jestlie pracovní pøíkaz nebyl rozvren ji døíve, pak zde bude nastaveno 'Nespecifikováno'. Jestlie operace ji byla zavedena na plánovací tabuli, pak se zobrazí skuteènì nastavenı zdroj k zavedení.":
180 "Toto pole se uívá pro konstatování, zda rychlost zpracování se poèítá jako èas na dávku, èas na kus nebo rychlost za hodinu. Jestlie zvolíte 'èas na dávku', pak èas zobrazenı v poli dole je èas, kterı trvalo zpracování všech dílù v dávce. Kdy zvolíte 'èas na kus', pak doba zpracování bude hodnota v poli dole násobená velikostí dávky. Jestlie zvolíte 'rychlost za hodinu', pak doba zpracování se vypoèítá pøímo z poètu kusù v dávce.":
220 "Aktuálnì jste zvolili typ doby zpracování 'Èas na kus'. Do tohoto pole musíte zadat dobu operace pro kadı z artiklù.":
230 "Aktuálnì jste zvolili dobu zpracování typu 'Èas na dávku'. V tomto poli musíte vyznaèit celkovou dobu operace pro dávku.":
240 "Aktuálnì jste zvolili dobu zpracování typu 'Rychlost za hodinu'. V tomto poli musíte vyznaèit, kolik kusù mùe bıt vyrobeno za hodinu.":
251 "Barva v tomto poli sdìluje programu Sequencer, aby zobrazil oddíl Ganttova grafu odlišnou barvou. Barevné znaèky na pruhu se zakládají na hodnotì, která byla zadána do pole Mnoství uprostøed dávky.":
260 "Toto pole se pouívá ke specifikaci mnoství pøíkazu nebo dávky.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "Uívá se ke specifikaci datumu, pøed kterım operace nemùe zaèít. To mùe napøíklad bıt èas, a materiály budou k disposici.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Zvolte tento pøepínaè a zobrazte pro program Scheduler, e údaje èasu zahájení a èasu ukonèení jsou skuteèné èasy. Kdy je tento pøepínaè nastaven, zabrání, aby pracovní pøíkaz nebyl pøiøazen ádnému zdroji v programu Sequencer. Ve skuteènosti je upevnìn na plánovací tabuli.":
390 "Program Scheduler nastaví toto pole bìhem øazení do posloupností na èas, na kterı je práce rozvrena k zahájení seøizování.":
400 "Program Scheduler aktualizuje toto pole bìhem øazení do posloupnosti na èas, na kterı je rozvreno zahájení práce.":
410 "Program Scheduler aktualizuje toto pole bìhem øazení do posloupnosti na èas, na kterı je rozvreno ukonèení práce. ":
420 "Nastavte tento pøepínaè, jestlie si nepøejete, aby práce byla nepøiøazena poté, kdy v programu Sequencer zvolíte Nepøiøazovat  všechny práce. Tím operaci uzamknete. Toté lze provést v programu Sequencer tak, e ukáete myší na operaci  (ikonu nebo pruh v souhrnu), stisknete klávesu Shift a poklepete levım tlaèítkem myši. ":
421 "Operace, které mají tento pøepínaè zaškrtnutı budou ponechány  nepøiøazené v oknì nepøiøazenıch, kdy se automaticky rozvrhují operace.":
430 "Umoòuje, aby definovatelné charakteristiky se staly atributy vırobkù, napøíklad barva. V rámci konkrétní charakteristiky   záznamy dostanou kategorie priorit, napøíklad 'bílé' vırobky mohou mít vyšší prioritu ne vırobky 'luté'. Tyto atributy se uívají v programu Scheduler v pravidlech pøednostního øazení do posloupností, kdy se podobné pøíkazy sluèují do vıhledu.":
440 "Vyplòte informace o dokonèeném mnoství a zadejte èas, kdy byla dokonèena 'èást dávky' do pole Èas uprostøed dávky. Program  Scheduler automaticky pøepoèítá 'èas ukonèení' pro tuto operaci.":
450 "Vyplòte èas, kdy byla dokonèena 'èást dávky' a zadejte informace o dokonèeném mnoství do pole Mnoství uprostøed dávky. Program Scheduler automaticky pøepoèítá 'èas ukonèení' pro tuto operaci.":
460 "Pole Skuteèná doba operace vyuívá zadání do polí ‘Mnoství uprostøed dávky’ a ‘Èas uprostøed dávky’ a vypoèítá revidovanou dobu operace na základì této informace. Nutno poznamenat, e kvùli správné funkci tohoto vybavení, údaje èasù uprostøed dávky a mnoství uprostøed dávky se musí pozmìnit, kdy v rámci programu Sequencer se zobrazuje editor, jinak se údaj skuteèné doby operace zmìní pouze pøi pøíští pøíleitosti, kdy vstoupíte do programu Sequencer.":
474 "Uívá se k záznamu nákladù artiklu v bodì, kde jsou uvedeny do procesu. Dané pole lze uít k záznamu fixních nákladù na kus, napøíklad subdodavateské tepelné zpracování atd.":
476 "Vyuívejte materiálové náklady na kus a zajistìte tak materiálové náklady dávky v bodì, kde se náklady na kus uvádìjí do procesu.":
477 "Pøímé náklady na práci v aktuálním procesu.":
530 "Zakládá èasovı horizont, ve kterém se práce mohou dávat do skupin k vırobì. Zdroj dokonèující operaci na plánovací tabuli se bude dívat dopøedu od bodu na èasovém horizontu uvedeném v oknì vıhledu. Kritéria pøednostních posloupností, nastavená v tabulce dat zdrojù, se pouívají k vıbìru prací z tìch, jejich termín dokonèení spadá do tohoto èasového horizontu. Pro kadı jednotlivı vırobek lze zaloit okno vıhledu v tabulce dat vırobkù a zmìnit pro jednotlivé pøíkazy v souboru hlavního rozvrhu nebo ho lze zaloit jako globální pravidlo v informacích nastavení konfigurace. ":
540 "Zaloenı v tabulce dat vırobkù, poskytuje pøístup k wordovskému dokumentu, kterı mùe obsahovat informace tıkající se vırobku. K dokumentu je pøístup z editoru hlavního rozvrhu, kde ho lze té upravovat.":
541 "Toto pole se uívá k popisování pokroku jednotlivıch operací. Existují ètyøi rùzné stavy pokroku (postupu díla): Nezahájenı; Seøízení; Vıroba; Dokonèení":
550 "Vırobky mohou mít pøidruené konkrétní charakteristiky, které jsou v programu Scheduler umístìné do tabulky dat atributù. Tyto tabulky jsou uivatelsky definované a napøíklad tabulka atributu 1 vırobku mùe bıt vyhrazena pro barvu, kde jednotlivé záznamy budou nazvané  - èervená, modrá, zelená atd. Atributy vırobkù lze volit v poli Shoda podobnıch v tabulce dat vırobkù a definovat v poli Doba seøízení podobnıch.":
560 "Uívá se k zaloení kategorií priorit mezi záznamy v tabulce dat Atribut 1 vırobku, pouívá se v pravidlech APS pøi øazení do posloupností.":
570 "Vırobky mohou mít pøidruené konkrétní charakteristiky, které jsou v programu Scheduler umístìné do tabulky dat atributù. Tyto tabulky jsou uivatelsky definované a napøíklad tabulka atributu 2 mùe bıt vìnována materiálu, kde jednotlivé záznamy budou nazvány – ocel, mosaz, mìï atd. Atributy vırobkù lze volit v poli Shoda podobnıch a definovat v poli Doba seøízení podobnıch.":
580 "Uívá se k zaloení kategorizování priorit mezi záznamy v tabulce dat Atribut 2 vırobku, uívané pravidly APS pøi øazení do posloupností.":
590 "Vırobky mohou mít pøidruené konkrétní charakteristiky, které jsou v programu Scheduler umístìné do tabulky dat atributù. Tyto tabulky jsou definované uivatelem a napøíklad tabulku Atribut 3 mùete vyhradit pro šíøku materiálu s jednotlivımi záznamy nazvanımi  – 16', 18', 20', 24' atd. Atributy vırobkù lze volit v poli Shoda podobnıch a definovat v poli Doba seøízení podobnıch.":
600 "Uívá se k zaloení kategorií priorit mezi záznamy v tabulce Atribut 3 vırobku a vyuívá se v pravidlech APS pøi øazení do posloupností.":
602 "Toto pole poèítá dobu trvání celkového pracovního pøíkazu od zahájení seøizování první operace do èasu ukonèení poslední operace pøíkazu.":
620 "Pravidlo odesílání, které poèítá indexové èíslo dìlením èasu do termínu dokonèení oèekávanım uplynulım èasem do dokonèení práce. Pomìr menší ne jedna znaèí, e práce zaostává za rozvrhem, pomìr vìtší ne jedna znaèí, e práce rozvrh pøedbíhá.":
815 "Tato volba dovoluje, abyste zaloili hodnoty pro doby seøízení a doby operací. Také se vyuívá k aktualizaci pokroku (postupu) práce vırobním systémem.":
1020 "Specifikuje název skupiny zdrojù. Ten se bude uívat k oznaèení konkrétních skupin zdrojù, které jsou schopné vykonávat podobné funkce.":
1030 "Vyznaèuje platné zdroje pro skupinu zdrojù. Jeden zdroj mùe bıt èlenem více ne jedné skupiny. ":
1060 "Kdy je tento pøepínaè zapnutı, zobrazí graf uití pro skupinu zdrojù v oknì více grafù v programu Sequencer.":
1070 "Tato barva se zobrazí na grafu uití, kterı je viditelnı v oknì více grafù v programu Sequencer.":
1080 "Graf uití v oknì více grafù v programu Sequencer zobrazí tuto barvu, kdy uití pøekroèí poèet hodin dostupnıch pro danı zdroj nebo skupinu zdrojù (jestlie pole Max. hodiny uití je nastavené jako nespecifikované). Jestlie do zmínìného pole byla zadána nìjaká hodnota, pak graf zmìní barvu podle této hodnoty. ":
1090 "Graf uití v oknì více grafù v programu Sequencer pouije tuto barvu k vykreslení èáry, která oznaèí uití seøízení mìøeného v hodinách. ":
2020 "Specifikuje název jednotlivého zdroje.":
2023 "Hodinové náklady provozování daného zdroje.":
2024 "Aplikuje hodnoty 'Nákladovı koeficient %', zaloeného v kmenovıch záznamech kalendáøù, na hodinové náklady zdroje.":
2030 "Tento dialog udruje informace o zpùsobu, jakım zpùsobem se má zdroj nebo skupina zdrojù zobrazit v oknì souhrnu posloupnosti a v grafech uití.":
2040 "Lze nastavit Viditelnı, Minimalizovanı nebo Zablokovanı. Vyuívá se k ovlávání poèáteèního stavu v oknì tohoto zdroje, kdy zahajuje svou èinnost program Sequencer. Normální nastavení je Minimalizovanı. Kdy je nastaveno Zablokovanı, danı zdroj se nepouije pøi øazení do posloupnosti. ":
2050 "Ovládá vodorovnou (èasovou) stupnici Ganttovıch oken zdrojù v programu Sequencer. Mùe se mìnit od minut do tıdnù na jednotku.":
2070 "Dovoluje nastavit kapacitu zdroje na Koneèná (Omezená), Nekoneèná (Neomezená) nebo Nekoneèná s uspoøádáním smìn.":
2071 "Dovoluje nastavit kapacitu zdroje na Koneèná (Omezená), Nekoneèná (Neomezená) nebo Nekoneèná s uspoøádáním smìn pøi bìhu programu Sequencer v reimu neomezené kapacity.":
2080 "Ovládá vodorovnou (èasovou) stupnici oken zdrojù uspoøádanıch vedle sebe v programu Sequencer.":
2100 "Vybírá sekundární omezení k pouití na primární zdroj. Specifikuje mnoství omezení vyadované zdrojem a zpùsob, jakım se omezení pouije na primární zdroj.":
2110 "Urèuje, jak se uití (spotøeba) sekundárního zdroje má zvìtšovat nebo zmenšovat, napøíklad zvìtšení pro trvání, které vyuívá sekundární omezení pro trvání dané operace a uvolòuje ho pøi dokonèení. Jestlie práce je umístìna na sklíèidlo na nìkolik operací, mùete specifikovat zvìtšení pøi zahájení pro první operaci a zmenšení pøi dokonèení pro poslední operaci. To zajistí, e sklíèidlo nelze pouít pro ádnou jinou práci, zatímco první práce je ve frontì na zdroji.":
2120 "Specifikuje potøebné mnoství sekundárního omezení. Jestlie vyberete hodnotu 'Mnoství', potøebné mnoství se rovná mnoství dávky právì zpracovávané.":
2130 "Definuje atribut operace, kterı zabrání vykonávání nepodobnıch operací  souèasnì na zdroji s nekoneènou kapacitou.":
2150 "Uívá se v produktech APS kvùli zaloení kritérií k pouití v pravidlech øazení do pøednostních posloupností pøi vybírání práce ke zpracování.":
2160 "Uívá se v produktech APS v pravidlech rozvrhování pøi minimalizaci rozpracované vıroby kvùli zaloení èasovıch vyrovnávání dodávek, ve kterıch se rozpracovaná vıroba mùe akumulovat pøed vybranımi zdroji.":
2180 "Numerická hodnota uívaná ke tøídìní do poøadí, ve kterém se zdroje zobrazují v tabulce dat zdrojù. Také ji lze vyuít a pøepsat implicitní poøadí, ve kterém se zdroje zobrazí v souhrnu posloupnosti.":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Urèuje zpùsob, jakım se zdroje zobrazí v souhrnu posloupnosti.   Alternativy jsou 'Vdy', 'Pouze ve skupinì' a 'Skrıt'.":
2191 "Urèuje zpùsob zobrazení operací v souhrnu posloupnosti. Lze zvolit hromadné zobrazení, kde jsou operace zobrazeny na jedné øádce souhrnu nebo kaskádní zobrazení, kde kadá operace je zobrazena na zvláštní øádce.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "Uití tohoto zaškrtávacího rámeèku zastaví zaèlenìní daného zdroje do vıpoètù metriky vıkonnosti rozvrhu.":
2210 "Toto pole se pouívá k volbì, k jakému systému prohlíeèe patøí danı zdroj. Pole obsahuje seznam názvù systémù pøevzatı z tabulky dat knihy adres PCO. ":
2220 "Toto tlaèítko otevírá dialog uvádìjící rùzné atributy sdruené se zdrojem.":
2230 "Toto pole dovoluje zadávat øetìzcové atributy pro danı zdroj.":
2240 "Toto pole dovoluje zadávat data reálnıch atributù pro danı zdroj. ":
2250 "Toto pole dovoluje zadat data atributu trvání pro danı zdroj.":
2260 "Toto pole oznaèuje úèinnost zdroje, implicitní hodnota je 100%, jestlie se úèinnost zmìní na 200%, pak kadá operace rozvrená na tento zdroj by byla zpracována dvakrát tak rychle (polovina øádné doby zpracování). ":
2270 "To je pole pøepínaèe, které pøi zapnutí pouije hodnotu úèinnosti v poli Úèinnost % na všechny operace, které mají doby seøízení a jsou rozvrené na zdroj, kde je pøepínaè nastavenı zapnutı.":
2280 "Kdy je tento pøepínaè zapnutı, zobrazí graf uití pro zdroj v oknì více grafù v programu Sequencer.":
5035 "Nákladovı koefecient, kterı ovlivòuje provozní náklady zdroje, na kterı se pouívá. Pouití hodnoty 100% neznamená ádnı vzrùst, hodnota 150% zvıší provozní náklady o 50%. Nákladové koeficienty jsou zaloeny v tabulce dat stavù kalendáøù a poskytují implicitní hodnoty uívané v kmenovıch souborech hlavního rozvrhu.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Toto pole se uívá ke specifikaci, jak bude sekundární omezení pouité bìhem dané operace, napøíklad zvìtšení pro trvání, zvìtšení pouze pro dobu seøízení atd.":
6160 "Toto pole uijte pro vyznaèení mnoství sekundárního omezení bìhem aktuální operace, napøíklad mùete specifikovat, e daná operace potøebuje jedno stálé sklíèidlo.":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "Funkce Nastavte skupinu následnıch zdrojù zakládá 'prosazovanı seznam' zdrojù, to jest zdrojù specifikovanıch ve zvolené skupinì. Prosazuje, aby operace 'po proudu' nebo následné operace  pouívaly pouze ty zdroje, které jsou obsaeny v 'prosazovaném seznamu'. Tudí jestlie postup zpracování volá skupinu zdrojù v operaci po proudu obsahující nìkteré zdroje, které nejsou v onom seznamu, ty nebudou uity pøi øazení do posloupnosti. Funkce Nastavte skupinu následnıch zdrojù je akumulativní funkce a lze ji vyuít ve více ne jedné operaci v postupu, pøièem pøidává zdroje do 'prosazovaného seznamu'.":
6190 "Funkce Obnovte skupinu následnıch zdrojù odstraòuje všechny zdroje obsaené ve zvolené skupinì zdrojù z 'prosazovaného seznamu' zaloeného pøíkazem Nastavte skupinu následnıch zdrojù. Jestlie byla zaloena konceptuální skupina zdrojù 'Všechny', která zahrnuje všechny dostupné zdroje, zdroje pouité následnımi operacemi budou ty nastavené v pùvodním postupu.":
6230 "Toto pole umoòuje zadat dobu seøízení pøi pøechodu od pøedchozího vırobku na aktuální vırobek. Hodnoty v poli Doba seøízení budou pøidány k všem hodnotám seøízení zaloenım pro danı zdroj maticí Doby seøízení závislé na posloupnosti.":
6430 "Zvolte název ikony z pøekryvného rámeèku. Tlaèítko Upravit dovolí, abyste vytvoøili nové ikony.":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Specifikuje maximální èasovı interval dovolenı mezi dvìma následnımi opreracemi. Tento interval se vymezuje polem 'Typ intervalu', které zakládá vztahy 'Od zaèátku do zaèátku', 'Od konce do konce' atd.":
6540 "Zaloí vztah uívanı k umístìní maximálního èasového intervalu mezi dvì sousední operace, stanoveného v poli 'Max. èas pøed další operací'. To mùe bıt vztah 'Od konce do konce', 'Od konce do zahájení', 'Od zahájení do zahájení' nebo 'Od zahájení do konce'. ":
6550 "Specifikuje maximum èasu, vyjádøené jako procento teoretické doby zpracování, pøes které se operace mùe rozšíøit, kdy se automaticky øadí do posloupnosti programem Sequencer.":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Pole Vyrovnávací zásobník obsahuje èasovı údaj, kterı se odeète od termínu dokonèení, kdy se zpìtnì øadí do posloupnosti, take operace budou rozvreny na døívìjší èas, ne je nejpozdìjší monı èas. To dovoluje uvaovat neoèekávaná zpodìní procesu.":
7020 "Poèet dnù pøed aktuálním èasem, které lze zobrazit v souhrnu posloupnosti.":
7030 "Èasové období, po aktuálním èase, které lze zobrazit v souhrn u posloupnosti.":
7035 "Otevøe dialog nastavení konfigurace, kterı uivateli dovoluje udìlat zákaznické úpravy souhrnu posloupnosti.":
7040 "Specifikuje posun od èasu zadání pracovního pøíkazu, pøed kterım nelze práci zahájit. Pokud je nastaveno Nespecifikováno, neexistuje ádné jiné omezení ne aktuální èas.":
7050 "Specifikuje posun od èasu zadání pracovního pøíkazu, do kterého  nebude práce dostupná. Lze pøepsat.":
7060 "Mnoství èasu, o které byl posunut terminátor od aktuálního èasu. Terminátor pøedstavuje aktuální èas, kdy posun terminátoru je nastaven na 0 hodin 00 minut.":
7067 "Zakládá volby vıpoètù nákladù, které jsou: Bìhem posloupnosti, Po posloupnosti, Nikdy. ":
7120 "Nastaví reim souhrnu posloupnosti.":
7130 "Poèet dnù od nynìjška, dokdy lze zahájit souhrn posloupnosti.":
7140 "Poèet dnù od nynìjška, dokdy lze ukonèit souhrn posloupnosti.":
7320 "Umoòuje vybrat skript, potøebnı k importu pracovních pøíkazù, z tabulky dat 'Skripty'. ":
7330 "Umoòuje vybrat skript, potøebnı k exportu pracovních pøíkazù, z tabulky dat 'Skripty'. ":
7430 "Toto pole pøepínaèe, kdy je zaškrtnuté, pøepne na malı èernı trojúhelník u kadého pruhu operace v programu Sequencer. To usnadòuje pøetahování operací, které jsou pøiøazené, na plánovací tabuli, zejména menší operace.":
7450 "Specifikuje implicitní Skript události PESP, kterı se pøi impportování pøíkazù má spustit tlaèítkem 'Importovat pøíkazy' z menu pøesunu dat.":
7470 "Specifikuje implicitní Skript události PESP, kterı se pøi exportování pøíkazù má spustit tlaèítkem 'Exportovat pøíkazy' z menu pøesunu dat.":
7480 "Specifikuje implicitní Skript události PESP, kterı se má spustit pøi uvolòování rozvrhù tlaèítkem 'Uvolnit rozvrh' z menu pøesunu dat.":
7490 "Specifikuje implicitní Skript události PESP, kterı se má spustit, kdy se pøidìlují operace v programu Sequencer se zapnutou moností vyuívání pravidel APS.":
8020 "Název sekundárního omezení.":
8030 "Dovoluje zvolit barvu uivatelského grafu programu Sequencer, kdy hodnoty jsou mezi horní a dolní mezí.":
8040 "Nastaví vzor vyplnìní (šrafování) grafu.":
8060 "Vzor vyplnìní grafu, kdy by graf mìl pøekroèit horní mez. ":
8080 "Vzor vyplnìní grafu, kdy by graf mìl pøekroèit dolní mez. ":
8090 "Specifikuje, zda toto sekundární omezení ovlivní rozvrh, kdy pouijete produkt 300 FCS nebo vyšší. Ve všech verzích nezaškrtnutí tohoto rámeèku zastaví program Sequencer, aby vydal varování, jestlie budou pøekroèeny meze nastavené pro toto sekundární omezení.":
8091 "V reimu nekoneèné kapacity programu Sequencer toto pole urèuje, zda se pøi pouití produktù 300 FCS a vyšších má druhotné omezení aplikovat na rozvrh.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Urèuje, jak úèinnost kalendáøe primárních zdrojù ovlivní uití tohoto sekundárního omezení. Monosti jsou: Bez vlivu; Úèinnost zaèátku práce; Sledovat zmìny úèinnosti; Pouít 100%, jestlie je vìtší ne  0%":
8101 "Pøi bìhu programu Sequencer v reimu neomezené kapacity toto pole urèuje, jak úèinnost kalendáøe primárních zdrojù ovlivní uití tohoto sekundárního omezení. Monosti jsou: Bez vlivu; Úèinnost zaèátku práce; Sledovat zmìny úèinnosti; Pouít 100%, jestlie je vìtší ne  0%":
8120 "Toto tlaèítko otevøe dialog uvádìjící seznam rùznıch atributù sdruenıch se sekundárním omezením.":
8130 "Toto pole dovolí zadat øetìzcová data atributu pro sekundární omezení.":
8140 "Toto pole dovolí zadat reálná data atributu pro sekundární omezení.":
8150 "Toto pole dovolí zadat data atributu trvání pro sekundární omezení.":
8160 "Kdy je tento pøepínaè zapnutı, zobrazí graf uití pro sekundární omezení v oknì více grafù v programu Sequencer. ":
9020 "Nastavte názvy skupin, které tvoøí osy X a Y matice dob seøízení  závislıch na posloupnosti v tabulce dat zdrojù.":
12020 "Název záznamu atributu v tabulce dat atributu 1 vırobku.":
13020 "Název záznamu atributu v tabulce dat atributu 2 vırobku.":
14020 "Název záznamu atributu v tabulce dat atributu 3 vırobku.":
16020 "Název uitı k popisu konfigurace zobrazení na obrazovce uloené pod názvem souboru. Tento popis se také pouije jako tip zobrazenı pro ikony pruhu nástrojù pracovního prostoru.":
16030 "Soubor vybranı volbou souboru z moností nabízenıch tlaèítkem  nalevo od pole. Pùvodní konfiguraèní soubor pracovního prostoru se uloí s pøíponou  .WPI pomocí poloky Uloit pracovní prostor v nabídce Pracovní prostor v menu programu Sequencer.":
18510 "Jméno jednotlivce nebo název organizace, která uplatnila pracovní pøíkaz.":
18520 "Jméno primárního kontaktu v rámci název organizace, která uplatnila pracovní pøíkaz.":
18530 "Telefonní èíslo k pouití ve spojení s pracovním pøíkazem.":
18540 "E-mailová adresa k pouití ve spojení s pracovním pøíkazem.":
21000 "Toto pole dovoluje zadat rùzné statusy pracovních pøíkazù; status pøíkazu mùete vybrat v souboru Rozvrh.":
21020 "Toto pole se uívá pro popis, co znamená název statusu pracovního pøíkazu zadanı do pole ‘Název statusu pøíkazu’.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Toto pole specifikuje, zda záznam je rodièovskım záznamem sady pravidel nebo potomek.":
24010 "Obsahuje název sady pravidel.":
24020 "Tento pøepínaè se uívá k vynulování spojovıch odkazù pouze pro pøíkazy, které jsou ve frontì poptávky prvního prùchodu (a u odblokované èi nikoli) sady pravidel.":
24030 "Uchovává název konkrétní funkce prùchodu pravidla. ":
24040 "Pøepínaè, kterı kdy je nastavenı zapnutı (true), umoní prùchod pravidla. Kdy je nastaven vypnutı (false), prùchod se bude ignorovat, kdy se spustí sada pravidel.":
24050 "Kdy je tento pøepínaè zapnutı a spustí se sada pravidel, v pracovním adresáøi se vytvoøí ladicí soubor.":
24060 "Toto pole se uívá ke specifikování kritérií, která lze uít k omezení toho, jaké poloky se umístí do fronty interního zásobení. Implicitní hodnota pro toto pole je nastavená jako VŠECHNY, ale to se dá zmìnit zadáním vırazu napøíklad (~{$Order Type}~==~Stock~).  Fronta filtruje záznamy uchovávané v databázi pracovních pøíkazù.":
24070 "Toto pole obsahuje kritéria vyuitelná pro kategorizování poloek ve frontì interního zásobení. Napøíklad mùete kategorizovat frontu interního zásobení pomocí termínu dokonèení, datumu nejdøívìjšího zahájení nebo priority. ":
24080 "Toto pole se uívá ke specifikování kritérií, která lze uít k omezení, jaké poloky se umístí do fronty interního zásobení. Implicitní hodnota pro toto pole je nastavená jako VŠECHNY, ale to se dá zmìnit zadáním vırazu napøíklad (~{$Order Type}~==~Stock~).  Fronta filtruje záznamy uchovávané v databázi pracovních pøíkazù.":
24090 "Toto pole obsahuje kritéria vyuitelná pro kategorizování poloek ve frontì interního zásobení. Napøíklad mùete kategorizovat frontu interního zásobení pomocí termínu dokonèení, datumu nejdøívìjšího zahájení nebo priority.":
24100 "Toto pole obsahuje seznam rùznıch standardních pravidel spojování, která poslouí ke spojování pracovních pøíkazù dohromady. Také obsahuje tøi speciální poloky: Definovanı uivatelem, Uivatelská funkce a skript PESP, které poskytují pøíleitost tvoøit pravidla více upravená na potøeby zákazníkù.":
24110 "Toto pole bude viditelné tehdy, kdy pole 'Typ pravidla' je nastavené 'Definované uivatelem' nebo 'Uivatelská funkce'. Vıraz se má pouít pro pravidlo, zadané do tohoto pole. Monım pøíkladem je : (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~), co dovoluje, aby se spojovaly pouze pøíkazy zásobení i poptávky, jestlie pole 'Atribut 1 vırobku' budou mít stejnou hodnotu.":
24120 "Toto pole bude viditelné jen tehdy, kdy pole 'Typ pravidla'  je nastavené na 'Skript PESP'. Toto pole uchovává název skriptu PESP, kterı se má pouít jako pravidlo.":
24130 "Tato volba dovoluje vytváøet spoje (odkazy) na øádky struktury vırobku (kusovníku), kde mnoství poloky struktury vırobku nemusí bıt úplnì uspokojeno pro danı spoj, kterı se má udìlat. Kadá poloka, kde chybí materiál, se zvırazní jako nedostatek materiálu. ":
24140 "Tato volba pouze dovolí tvoøit spoje na øádky struktury vırobku, kde je mnoství struktury vırobku plnì uspokojeno. Všechny poloky, kde chybí materiál , se zvırazní jako nedostatek materiálu.":
24141 "Tato volba mìní implicitní chování SMC tak, e povolí zpìtné propojení pro pøípady, kdy dojde k vırobì a po spotøebì.":
24150 "Kdy je zde nastaveno ´pravdivı´, pøíkazy ji rozvrené lze znovu spojovat.":
24160 "Kdy je tento pøepínaè zapnutı (true), pole 'Kategorizace fronty zásobení' se odblokuje a dovolí øadit záznamy zásobení do kategorií podle vıbìrového kritéria 'Kategorizace fronty zásobení'. Tuto monost  volte jen v pøípadì, kdy se všechny záznamy uchovávají v databázi pracovních pøíkazù.":
24170 "Toto pole se uívá ke specifikování kritérií, která lze uít k omezení toho, jaké poloky se umístí do fronty interního zásobení. Implicitní hodnota pro toto pole je nastavená jako VŠECHNY, ale to se dá zmìnit zadáním vırazu napøíklad (~{$Order Type}~==~Stock~).  ":
24180 "Bude zpracováno kadé pole z klasifikace INHERIT FROM SUPPLY (název pole).":
24190 "Bude zpracováno kadé pole z klasifikace INHERIT FROM DEMAND (název pole).":
24200 "Kdy je tetno pøepínaè zapnutı (true), pole 'Kategorizace fronty poptávky' se odblokuje a dovolí, aby záznamy poptávky byly øazeny do kategorií podle kritéria vıbìru v poli 'Kategorizace fronty poptávky'. Tuto volbu pouijte, jen kdy všechny záznamy budou uchovávány v databázi pracovních pøíkazù.":
24210 "Mnoství vytvoøeného spoje (odkazu) se bude pøiøazovat v e stanovenıch násobcích, jestliev tento pøepínaè bude zapnutı (true). Tento násobek je specifikován datech struktur vırobkù.":
24500 "Kdy je zaškrtnuto pole 'Vdy uijte tuto sadu pravidel', bude v tomto poli zvoleno pravidlo spojování, které se implicitnì spustí, kdy v programu Sequencer zvolíte monost 'Spojit materiály'. ":
24505 "Tato globální volba mìní implicitní chování SMC tak, e povolí zpìtné propojení pro pøípady, kdy dojde k vırobì a po spotøebì.":
24510 "Kdy bude tento pøepínaè zaškrtnutı, pouije se pravidlo vybrané v poli 'Vybraná sada pravidel spojování' jako implicitní pravidlo, které pobìí, jestlie v programu Sequencer je zvolená monost 'Spojit materiály'. Kdy monost 'Vdy uít tuto sadu pravidel' nebude zaškrtnutá, objeví se dialog vıbìru pravidel, kdy vyberete  monost 'Spojit materiály', co dovolí, aby toto pravidlo, které má bìet, bylo vybráno v tomto okamiku.":
25400 "Toto pole se uívá pro èíslo pøíkazu zásobení.":
25410 "Toto pole vyznaèuje typ pøíkazu, napøíklad Zásoba nebo Nákup.":
25420 "Název organizace, která dodává materiál pro danı pøíkaz.":
25430 "Èíslo dílu, pro kterı je tento pøíkaz.":
25440 "Popis dílu, pro kterı je tento pøíkaz.":
25450 "Datum, kdy je tento materiál bude dodán.":
25500 "Toto pole se uívá k vyznaèení, ke kterému pøíkazu patøí danı díl. První øádka pøíkazu bude rodièovskım záznamem a v tomto poli zobrazí PARENT. Ostatní øádky pøíkazu budou záznamy potomkù a v tomto poli zobrazí èíslo pøíkazu, ke kterému tento díl patøí. ":
25510 "Toto pole uchovává èíslo poptávkového pøíkazu.":
25520 "Toto pole vyznaèuje typ pøíkazu, napøíklad vıroba na sklad nebo zakázka.":
25530 "Jednoznaènì idetifikuje poloku pøíkazu.":
25540 "Název organizace, která poaduje materiály pro tento pøíkaz.":
25550 "Daum, kdy se vyaduje tento materiál.":
25560 "Specifikuje násobek artiklu, kterı nutno spojit. Èasto je to poèet artiklù v krabici nebo pouzdru, napøíklad 12 plechovek tvoøí jednu krabici, pøíkaz vyaduje 60 plechovek. Pøíkaz je na 50 plechovek.  Preactor spojí pouze 48 plechovek z 50, pak se podívá po zbıvajících 12 plechovkách, které se poadují, ale udìlá spoj jen tehdy, kdy jich najde pøesnì 12. Musíte zaškrtnout pole 'Pøiøadit jen násobky' v databázi 'Pravidla spojování', abyste zapnuli tuto vlastnost.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "Èíslo dílu poloky struktury vırobku.":
25630 "Poadované mnoství poloky struktury vırobku.":
25640 "Kdy je nastavené na zapnuto (true), toto pole zpùsobí, e mnoství pøíkazu se vynásobí poadovanım mnostvím struktury vırobku.":
25650 "Zpùsobí, e na nedostatek materiálu nebude brán ohled, kdy je spuštìné pravidlo spojování. Dovoluje rozvrhovat pøíkazy s nedostatkem materiálu.":
25700 "Èíslo pøíkazu, ve kterém se vyrábí koprodukt.":
25705 "Part number of the order that co-product is produced in.":
25710 "Èíslo operace, která vyrábí koprodukt.":
25715 "Operation name that produces co-product.":
25720 "Název koproduktu.":
25730 "Vyrobené mnoství koproduktu.":
25740 "Kdy je toto pole nastavené jako zapnuté (true), zpùsobí, e mnoství koproduktu se bude násobit mnostvím pøíkazu.":
25800 "Toto pole vyznaèuje typ pøíkazu, napøíklad pracovní pøíkaz, nákupní objednávka, zakázka nebo zásoba.":
25810 "Kdy je pole zaškrtnuté, nerozvrená operace se u nadále nebude zobrazovat v oknì 'Nerozvrené operace'.":
25820 "Zobrazuje dialog s poli, která se tıkají øízení materiálu.":
25830 "Toto pole poskytuje informace o statusech poptávky potom, co materiály byly spojeny. Bude obsahovat jednu z následujících hodnot: 'Neznámé', 'Splnìné', 'Všechen nedostatek ignorován', 'Nedostatek', 'Nadmìrné zásobení', 'Nadmìrné zásobení, nedostatek', 'Nadmìrné zásobení, všechen nedostatek ignorován'.":
25840 "Toto pole se zaplní potom, co materiály budou spojeny. Kdy udìláte spoj na pøíkaz zásobení v databázi pøíkazù, pole 'Datum poptávky' v databázi pracovních pøíkazù se vyplní hodnotou 'Datum zásobení' pøíkazu zásobení.  Preactor vyhodnotí datum zásobení vùèi hodnotì 'Nejdøívìjší datum zahájení' a pouije pozdìjší z tìchto dvou datumù k rozhodnutí, které datum se má pouít pøi rozvrhování.":
25850 "Toto pole se zaplní potom, co materiály budou spojeny. Kdy byl udìlán spoj na pøíkaz poptávky v databázi, pole 'Datum zásobení' v databázi pøíkazù se vyplní hodnotou datumu poptávky, s ní je tento pøíkaz spojen. Preactor vyhodnotí datum poptávky vùèi termínu dokonèení a pouije nejdøívìjší ze dvou datumù k rozvrhování.":
25900 "Zobrazí dialog s poli tıkajícími se stausu operace.":
25910 "Tuto volbu mùete vybrat, kdy pøíkaz bude rozdìlen, tato monost umoní, e kadá z vırobních dílèích dávek bude pokraèovat vırobním procesem nezávisle, napøíklad všechny dílèí dávky se nemusí dokonèit v jedné operaci, døíve ne mùe zaèít operace následující.":
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
