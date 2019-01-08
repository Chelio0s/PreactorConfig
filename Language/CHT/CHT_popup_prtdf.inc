#VERSION 0
;
CHT POPUP HELP
1 "與此項關聯的幫助主題並不存在.":
10 "This field is used to identify what order the part belongs to.  In the first operation of an order it is set to PARENT, in other operations it is set to the unique order number or name.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "此欄位含有根據訂單而定義的不同狀態列表.該數值是從訂單狀態數據表取出.如果有需要,新狀態能夠加入.當訂單在順序器排列時,操作欄的模式能夠根據狀態種類而在訂單狀態數據表上設置的操作條形圖案設置.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "此欄位用於識別該產品的訂單號碼.該訂單可以是內部訂單號碼或由顧客指定的.訂單號碼必須是獨一的.":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "使用此欄位以設置將用於排序器的作業優先級. 數值越底表示優先級越高.注:優先級可以是負數. 負數的優先級將高於正數的優先級.比如:-100將高於己於1,0將高與10.":
90 "此欄位將設置該作業的操作號碼.此欄位將用於排列在排序器的作業.最底號數的操作將會在較高號數的操作開始之前完成.如果在一個產品有兩個相同號數的操作,那它們都將在較高的操作號數開始實行之前完成.":
110 "這是一個書寫的描述或正在實行的操作名字,這也將以操作號碼識別.":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "在設置組數據庫指定的設置組.譬如:設置組1,設置組2等等.這些數值將用於在 Sequence Dependent Setup Time Matrices裡的坐標軸, 建立在不同設置組中的產品的換線時間 (通常為設置資源資料庫).雖然默認數值可能已寫入Main Schedule file了,個單一的設置組還是被分配到產品數據表的產品.":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "如果有必要,此欄位能夠用於識別應當處理操作的指定資源.如果產品資料表已被設置成了'從組選出',那任何在資源組顯欄位示的資源組都能被使用.如果你強制該操作到一個指定在組中的資源,那你須從下拉列表 中選擇所須的資源.":
150 "此欄位顯示將處理操作的實際資源.如果該訂單還未被排序,那它將會被設置為'未指定'.如果該操作已被載入到計劃板,那在當前設置為載入的資源將會被顯示.":
180 "此欄位用於表明該處理率是否是計算基於批量時間比,項目時間比或是速率小時比.如果'批量時間比'被選擇,那顯示在欄位下的時間將是處理所有在批量組件的所須的時間.如果是'項目時間比'被選擇,那處理時間將是欄位下的數值乘以批量的大小.如果是'速率小時比'被選擇,那處理的時間將是直接從批量的數目來計算.":
220 "你當前已選擇了'時間項目比'的處理時間類型.你需要在此欄位每一個項目輸入操作時間.":
230 "你當前已選擇了'時間批量比'的處理時間類型.你需要表明此欄位的批量須要的所有操作時間.":
240 "你當前已選擇了'速率小時比'的處理時間類型.你必須表明此在欄位需要一個小時裡生產多少個項目.":
251 "此欄位的顏色將指示排序器以不同的顏色顯示甘特圖的部分.基於已輸入 Mid Batch Quantity和Mid Batch Time欄位的數值,欄圖將以顏色標簽.":
260 "此欄位用於指定訂單或批量數目.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "用於指定在一個不能開始實行的作業之前的日期.這可能是材料將可用時的一個例子.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "選擇此切換鍵以讓日程表顯示有'確實'數值的開始和結束時間.當被設置時,此切換鍵將禁止排序器的資源分配到該訂單上.效果是它將永久的固定在計劃板上.":
390 "在排序時,日程表裡設置此欄位為作業的過程開始時間.":
400 "排序時,在日程表更新此欄位到該作業計劃開始的日期/時間":
410 "排序時,在日程表更新此欄位到該作業計劃結束的日期/時間":
420 "Set this toggle if you do not wish this job to be unallocated after selecting Unallocate All Jobs in the sequencer. This will lock the operation. This can also be achieved when using 'Highlight Locked Operations' locate mode in the Sequencer by pointing with the mouse at an operation (icon or bar in the overview), depressing the shift key on the keyboard and clicking with the left mouse button.":
421 "當自動排序操作時,有切換鍵被選擇的操作將會在不分配操作窗口被保留為不分配.":
430 "讓用戶將能指定產品特征屬性化.譬如:顏色.在指定的特征裡,屬性化的記錄將有更高的優先級.譬如:'白色'的記錄可能有比'黃色'的記錄更高的優先級.這些屬性將用於在日程表的首選排序規則,在先行分析裡合並計算同樣的訂單.":
440 "填寫完成數目的信息,和在 Mid Batch Time欄位裡輸入'組件批'完成的時間.日程表將會自動化的重新計算此操作的'完成時間'.":
450 "填寫組件批完成的時間,和在 Mid Batch Quantity欄位裡輸入完成的數目.日程表將會自動化的重新計算此操作的'完成時間'.":
460 "Effective Op Time 欄位應用在 ‘Mid Batch Quantity’和‘Mid Batch Time’欄位裡的條目以計算根據該訊息的修訂操作時間.該設施應該能正常的操作.當編輯器顯示在排序機時,‘Mid Batch Times’ 和‘Mid Batch Quantities’ 應該會被更改. 否則,‘Effective Op Time’將在下一次排序機啟動時才作出更改.":
474 "用於記錄在被帶進處理過程時的項目的成本.此欄位可用於記錄個項目的固定成本,譬如:轉包工程的待遇等等.":
476 "應用每項目材料成本以提供在被帶入處理過程時的批量的材料成本.":
477 "當前處理作業的直接成本":
530 "建立批發性生產作業的時間范圍. 一個在計劃板裡完成操作的資源將會期待由先行分析窗口建立的時間范圍. 首選的排序條件,在資源數據表的設置,將應用在從時間范圍裡過期工作中選擇的作業. 先行分析窗口能夠根據個別產品和產品數據表而建立,和更改個別在Main Schedule文件的訂單.或者在配置訊息裡建立一個全局規則.":
540 "建立在產品數據表裡,這提供有關產品訊息的WORD文件.該文件能夠從Main Schedule文件編輯器中讀取和更改. ":
541 "此欄位描述個別操作的進程.4個進程的狀態:未開始,設置,進行中,完成.":
550 "產品可能有特別的特征.在排序器裡這些將加入到特征數據表.這些數據表是用戶定義的.譬如:產品特征數據表1可以是保留給顏色-記錄可以被叫做'紅','藍','青'等等.產品特征能夠被選擇產品數據表裡的'Like to Like Match'欄位以指定一個'Like to Like Setup'的時間.":
560 "用於建立在產品特征1數據表裡的記錄之間的優先級別, 這將被用於APS Rules排序選擇.":
570 "產品可能有特別的特征.在日程表裡這些將加入到特征數據表.這些數據表是用戶定義的.譬如:特征數據表2可以是保留給材料-記錄可以被叫做'鐵','銅'等等.產品特征能夠被選擇產品數據表裡的'Like to Like Match'欄位以指定一個'Like to Like Setup'的時間.":
580 "用於建立在產品特征2數據表裡的記錄之間的優先級別,這將被用於APS Rules排序選擇.":
590 "產品可能有特別的特征.在日程表裡這些將加入到特征數據表.這些數據表是用戶定義的.譬如:產品特征數據表3可以是保留給材料寬度-記錄可以是'16','18','20'等等.產品特征能夠被選擇產品數據表裡的'Like to Like Match'欄位以指定一個'Like to Like Setup'的時間.":
600 "用於建立在產品特征3數據表裡的記錄之間的優先級別,這將被用於APS Rules排序選擇.":
602 "此欄位將計算所有從第一個操作設置開始時間到最后一個操作結束時間的持續時間.":
620 "分派規則將計算索引編號.這是根據剩余的截止日期和預期完成作業的運行時間的比率.如果比率少過1表示作業落后於進度. 大過1表示超前於進度.":
815 "此選項將建立設置和操作時間的數值.它也將被用於更新通過生產系統的作業進度.":
1020 "指定資源組的名字.這將用於識別特定的資源組,能支持相似的功能.":
1030 "識別在資源組的有效資源.該資源可以是另一個資源組的資源.":
1060 "當啟動時,此切換鍵將在排序器的多繪圖窗口裡顯示資源組的使用繪圖.":
1070 "此顏色將會顯示在排序器的多繪圖窗口裡的可見使用繪圖上.":
1080 "當使用量超出在資源或資源組成可使用的時間(如果最大使用小時被設置成未指定),這將展現在排序器裡的多繪圖窗口中的使用繪圖將顯示此顏色.如果最大使用小時已被輸入數值,那該繪圖將隨著這數值而更改顏色.":
1090 "在排序器的多繪圖窗口中的使用良繪圖,將會用這顏色以畫出一個線作為標記以小時測量使用量的設置.":
2020 "指定個別的資源名字.":
2023 "以每小時計的執行資源成本.":
2024 "應用建立在主日歷記錄的'因素成本 %'數值,到以每小時計的資源. ":
2030 "此對話框存放著關於資源組的資源如何在排序器的概述窗口和使用量繪圖中顯示的方法.":
2040 "可以設置為可視狀態,最小化或禁用的.用於控制在排序器開始時,這資源窗口的初始狀態. 通常是設置為最小化.如果設置為禁用的,那表示該資源不在排序中使用.":
2050 "控制在排序器裡的甘特圖資源窗口的水平(時間)比例.可因每分鐘到每星期單位而異.":
2070 "允許設置資源容量為有限,無限,或有輪班模式的無限.":
2071 "Allows a resource capacity to be set to Finite, Infinite or Infinite with Shift Patterns when running in Infinite Capacity Sequencer Mode.":
2080 "控制在排序器裡的平鋪資源窗口的水平(時間)比例.":
2100 "選擇應用到主資源的次要約束量.它將指定將應用到主資源約束條件裡的資源和方法所需要的約束量.":
2110 "規定次要約束的用量應該增加或減少.譬如: 增加需要操作次要約束的持續時間和發放它到完成.如果作業是放在幾個操作的設備,您可能需要增加第一個操作的'開始'和減少最后一個操作的'結束'. 這將確保當第一個作業在等待資源時,該設備無法使用在其他作業上.":
2120 "指定次要約束所需要的數量.如果'數量'的數值被選擇,那所許的數量將跟正被處理的批發數量一樣.":
2130 "定義一個操作的特性以便防止不同的操作同時執行在一個無限存量的資源上.":
2150 "應用在APS產品上,以便建立用於在選擇處理作業的首選排序規則的條件.":
2160 "以'最小化WIP'排序規則,應用在APS產品上以便在選擇的資源前建立WIP可以累計的時間緩沖區.":
2180 "用於按順序排序在資源數據表顯示資源的數值.它也能夠用於替代顯示在排序器概述的資源的默認排序.":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "確定在排序概述中的資源的顯示方法.選擇包括:'總顯示','隻在組'和'隱藏'.":
2191 "Determines the manner in which the operations will be displayed in the Sequence Overview. The options are 'Stacked' where the operations are displayed on one overview line, and 'Cascade' where each operation is displayed on its own overview line.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "用這打勾格以停止包含資源的日程表現度量的計算.":
2210 "此欄位是用於選擇該資源屬於的VIEWER系統.該欄位將包含一個從PCO通訊簿數據表取出的日程系統名字的列表.":
2220 "此按鈕將打開一個列出與資源關聯的不同特征的視框. ":
2230 "此欄位將准許輸入根據該資源的字符串的特征資料. ":
2240 "此欄位將准許輸入根據該資源的實數的特征資料. ":
2250 "此欄位將准許輸入根據該資源的持續時間的特征資料.":
2260 "此欄位將指示資源的效率 ,默認值為100%.如果效率被設置為200%, 那任何應用該資源的操作將以雙倍的速度執行.(正常處理時間的一半)":
2270 "當此切換鍵欄位被啟用時,這將應用在該效率%欄位的數值到所有設置時間的操作和所有資源切換鍵被啟用的操作.":
2280 "當被啟動時,此切換鍵將顯示在排序器裡多繪圖窗口的資源用量繪圖.":
5035 "成本系數乘法器.用於影響應用在資源的運行成本.100%的數值將應無增加,150%的數值將膨脹運行成本50%.這建立於在主日歷 文件默認數值的日歷狀態數據表.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "此欄位是用於指定次要約束是如何用在操作裡.譬如:增加持續時間,隻增加設置時間,等等.":
6160 "使用這個欄位以表明在當前操作所須的次要約束的數量.":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "Set Subsequent Resource Group establishes a 'forced list' of resources, i.e. those specified in the selected group. It 'forces' downstream or subsequent operations to use only those resources that are contained in the 'forced list'. Thus if a process route calls for a resource group at a downstream operation that contained some resources which are not members of the list, these would not be usedwhen sequencing. Set Subsequent Resource Group is an accumulative function and can be used at more than one operation in a process route, adding resources to the 'forced list'.":
6190 "Reset Subsequent Resource Group function removes any resources, contained in the Resource Group selected, from the 'forced list' established by Set Subsequent Resource Group command. If a conceptual Resource Group, 'All', were established, that included all available resources, the resources used by subsequent operations would be those set up in the original process route.":
6230 "This field enables a setup time to be specified, converting from the previous product to the current product. Values in the Setup Time field will be added to any set-up values established for the resource by a Sequence Dependent Setup Time matrix.":
6430 "Select an icon name from the drop down box.The edit button will allow you to create new icons.":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Specifies the maximum time interval that will be allowed between two sequential operations. The maximum time interval is qualified by the 'Interval Type' field which establishes 'Start to Start', 'End to End' relationships etc.":
6540 "Establishes the relationship used to interpose the maximum time interval between two contiguous operations, established in the 'Max Time Before Next Op.' field. This may be an 'End to End', 'End to Start', 'Start to Start' or 'Start to End' relationship.":
6550 "Specifies the maximum amount of time, expressed as a percentage of the theoretical process time, over which an operation may extend when automatically sequenced by the Sequencer.":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "The Delivery Buffer field contains a buffer time that is subtracted from the Due Date when backward sequencing so that the operations are scheduled earlier than the latest time possible.This is to allow for unexpected delays in the process.":
7020 "The number of days prior to current time that can be displayed in the Sequence Overview.":
7030 "The period of time, after the current time, that can be displayed in the Sequencer Overview.":
7035 "Opens a configuration setup dialog which allows the user to customize the sequence overview.":
7040 "Specifies an offset, from the time of order entry, before which a job cannot be started. If set to Unspecified, there is no restriction other than current time.":
7050 "Specifies an offset, from the time of order entry, by which the job should be available. Can be overwritten.":
7060 "The amount of time by which the terminator has been offset from the current time. The terminator represents current time when the terminator offset is set to 0 Hours 00 Min.":
7067 "Establishes cost calculation options, these being: During Sequence, After Sequence or Never.":
7120 "Sets the sequence overview mode.":
7130 "The number of days from now to start the sequence overview from.":
7140 "The number of days from now to end the sequence overview at.":
7320 "Enables the script required to import orders to be selected from the 'Scripts' data table.":
7330 "Enables the script required to export orders to be selected from the 'Scripts' data table.":
7430 "This toggle field when checked switches on a small black triangle against each operation bar in the Sequencer.This feature makes it easier to drag operations that are allocated on the planning board, especially smaller operations.":
7450 "Specifies the default PESP event script that should run when importing orders from the 'Import Orders' button on the Data Transfer Menu.":
7470 "Specifies the default PESP event script that should run when exporting orders from the 'Export Orders' button on the Data Transfer Menu.":
7480 "Specifies the default PESP event script that should run when releasing a schedule from the 'Release Schedule' button on the Data Transfer Menu.":
7490 "Specifies the default PESP event script that should run when allocating operations in the Sequencer with the APS Rules option switched on.":
8020 "Secondary constraint name.":
8030 "Allows you to select the color of the Sequencer User Plot when the values are between the high and low limits.":
8040 "Sets the plot fill pattern.":
8060 "Plot fill color if the plot should pass the upper plot limit.":
8080 "Plot fill color if the plot should pass the lower plot limit.":
8090 "Specifies whether this secondary constraint should constraint the schedule when using a 300 FCS product or above. In all versions, not selecting this check box will stop the Sequencer from issuing warnings if the limits set for this secondary constraint are exceeded.":
8091 "When in Infinite Capacity Sequencer Mode, this field specifies whether this secondary constraint should constrain the schedule when using a 300 FCS product or above.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Determines how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8101 "When in Infinite Capacity Sequencer Mode, this field will determine how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8120 "This button opens up a dialog listing the different attributes associated with the secondary constraint.":
8130 "This field allows string attribute data to be entered against the secondary constraint.":
8140 "This field allows real attribute data to be entered against the secondary constraint.":
8150 "This field allows duration attribute data to be entered against the secondary constraint.":
8160 "When switched on, this toggle will display a usage plot for the secondary constraint in the multi plot window in the sequencer.":
9020 "Setup group names, these form the X and Y axis of the Sequence Dependent Setup Time matrixin the Resources data table.":
12020 "Name of an attribute record in the Product Attribute 1 data table.":
13020 "Name of an attribute record in the Product Attribute 2 data table.":
14020 "Name of an attribute record in the Product Attribute 3 data table.":
16020 "The name used to describe the screen display configuration saved under the File Name. This description is also used as the tip display for Workspace Tool Bar icons.":
16030 "The file is chosen by selection a file from the option offered by the button to the left of the field. The original workspace configuration file is saved, with a .WPI file extension, by using the Save Workspace command under Workspace in the Sequencer Menu.":
18510 "The name of the individual or organization that placing an order.":
18520 "Name of the primary contact within an organization placing an order.":
18530 "Telephone number to be used in connection with an order.":
18540 "E-Mail Address to be used in connection with an order.":
21000 "This field allows different ‘order status’ to be entered; the Order Status can be selected against an order in the Schedule file.":
21020 "This field is used to hold the description of what the order status name means that has been entered into the ‘Order Status Name’ field.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "This field specifies whether the record is a parent record of the rule set or a child.":
24010 "Contains the name of the rule set.":
24020 "This toggle is used to clear pegging links only for orders that are in the demand queue of the first pass (whether enabled or not) of the rule set.":
24030 "Holds the name of the particular function of the rule pass.":
24040 "A toggle that when set to true enables the rule pass, when set to false this particular rule pass will be ignored when running the rule set.":
24050 "When this toggle is set to true, and the rule set is run, a debug file will be created in the working directory.":
24060 "This field is used to specify criteria that can be used to restrict what items are placed in the Internal Supply Queue.  The default value for this field is set as ALL, but this can be changed by entering an expression e.g. (~{$Order Type}~==~Stock~).  This queue filters records held in the 'Works Orders' database.":
24070 "This field contains criteria that can be used to rank the items in the Internal Supply Queue. For example you can rank the Internal Supply Queue by Due Date, Earliest Start Date or Priority.":
24080 "This field is used to specify criteria that can be used to restrict what items are placed in the Demand Queue.  The default value for this field is set as ALL, but this can be changed by entering an expression e.g. (~{$Order Type}~==~Stock~).  This queue filters records held in the 'Works Orders' database.":
24090 "This field contains criteria that can be used to rank the items in the Internal Demand Queue. For example you can rank the Internal Demand Queue by Due Date, Earliest Start Date or Priority.":
24100 "This field contains a list of the various standard pegging rules that can be used to peg the orders together.  It also contains three special items – User Defined, User Function and PESP Script that provide the opportunity to create more customized rules.":
24110 "This field is only visible when the 'Rule Type' field is set to either 'User Defined' or 'User Function'.  The expression to be used for the rule is entered into this field.  An example might look like this: (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~) allowing only supply and demand orders to be linked if the 'Product Attribute 1' fields have the same value.":
24120 "This field is only visible when the 'Rule Type' field is set to 'PESP Script'.  This field holds the name of the PESP Script to be used as the rule.":
24130 "This option allows links to be created on BoM lines where the quantity of the BoM line doesn't have to be completely satisfied for the link to be made.  Any items that are short will be highlighted as a shortage.":
24140 "This option will only allow links to be created on BoM lines where the quantity of the BoM line is fully satisfied.  Any items that are short will be highlighted as a shortage.":
24141 "When this option is checked the default behavior of SMC is overridden by allowing backward links to be created when production occurs after consumption.":
24150 "When set to true, orders that are already scheduled can be re-linked.":
24160 "When this toggle is set to true, the 'Supply Queue Ranking' field becomes enabled allowing supply records to be ranked according to the selection criteria in the 'Supply Queue Ranking' field.  This option should only be selected if all records are held in the 'Works Orders' database.":
24170 "This field is used to specify criteria that can be used to restrict what items are placed in the External Supply Queue.  The default value for this field is set as ALL, but this can be changed by entering an expression e.g. (~{$Order Type}~==~Stock~).  This queue filters records held in the 'Demand' database.":
24180 "Any field with the INHERIT FROM SUPPLY(Field Name) classification will be processed.":
24190 "Any field with the INHERIT FROM DEMAND(Field Name) classification will be processed.":
24200 "When this toggle is set to true, the 'Demand Queue Ranking' field becomes enabled allowing demand records to be ranked according to the selection criteria in the 'Demand Queue Ranking' field.  This option should only be selected if all records are held in the 'Works Orders' database.":
24210 "The quantity of a link created will be allocated in specific multiples when this toggle is set to true. This multiple is specified in the BoM Data.":
24500 "If the 'Always use this Rule Set' toggle field is checked, the pegging rule set selected in this field will be the rule set that runs by default when the 'Peg Materials' option is selected in the Sequencer.":
24505 "When this global option is checked the default behavior of SMC is overridden by allowing backward links to be created when production occurs after consumption.":
24510 "When checked this toggle will use the rule selected in the 'Selected Pegging Rule Set' field as the default rule that will run when the 'Peg Materials' option is selected in the sequencer.  If the 'Always use this Rule Set' option is unchecked, a rule selection dialog will appear when selecting the 'Peg Materials' option in the sequencer, this will allow the rule that is to be run to be selected at that time.":
25400 "This is the field used to hold the order number of the supply order.":
25410 "This field identifies the type of order, for example Stock or Purchase.":
25420 "The name of the organization supplying the materials for the order.":
25430 "The part number that the order is for.":
25440 "Description of the part that the order is for.":
25450 "Date when the material is supplied.":
25500 "This field is used to identify what order the part belongs to.  The first order line of an order will be the parent record and display PARENT in this field, the other order lines that are part of this order will be child records and display the order number that they belong to in this field.":
25510 "This is the field used to hold the order number of the demand order.":
25520 "This field identifies the type of order, for example make to Stock or Sales Order.":
25530 "Uniquely identifies a line item of an order.":
25540 "The name of the organization requiring the materials for the order.":
25550 "Date when the material is required.":
25560 "Specifies the multiple of an item that must be pegged.  Often a number of items will make up a box or case, an example might be where 12 cans make up 1 box, an order requiring 60 cans arrives.  There is a supply order for 50 cans.  Preactor will only peg to 48 cans of the 50, it will then look elsewhere for the remaining 12 cans that it requires, but it will only make the link if the exact amount of 12 is found.  The 'Allocate Multiples Only' field should be checked in the 'Pegging Rules' database for this feature to be turned on.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "Part number of the BoM item.":
25630 "Required quantity of BoM item.":
25640 "When set to true, this field will cause the quantity of the order to be multiplied by the required BoM quantity.":
25650 "Causes shortages to be ignored when running pegging rule.  Allows orders with shortages to be scheduled.":
25700 "Order number that co-product is produced in.":
25705 "Part number of the order that co-product is produced in.":
25710 "Operation number that produces co-product.":
25715 "Operation name that produces co-product.":
25720 "Name of co-product.":
25730 "Quantity of co-product produced.":
25740 "When set to true, this field will cause the quantity of the co-product to be multiplied by the order quantity.":
25800 "This field identifies the type of order, for example: Works Order, Purchase Order, Sales Order or Stock":
25810 "When checked, the unscheduled operation will no longer be displayed in the 'Unscheduled Operations' window.":
25820 "Displays a dialog displaying fields related to Material Control.":
25830 "This field provides information on the status of demand after materials have been pegged.  It will contain one of the following values: 'Unknown', 'Satisfied', 'All shortages Ignored', 'Shortages', 'Over Supplied', 'Over Supplied, Shortages', 'Over Supplied, All Shortages Ignored'.":
25840 "This field is populated after materials have been pegged.  When a link to a supply order in the 'Supply Orders' database has been made, the 'Demand Date' field in the 'Works Orders' database is populated with the 'Supply Date' of the supplying order.  Preactor will evaluate the 'Supply Date' field against the 'Earliest Start Date' field and will use the latest of the two dates to determine which date should be used when scheduling.":
25850 "This field is populated after materials have been pegged.  When a link to a demand order in the 'Demand Orders' database has been made, the 'Supply Date' field in the 'Works Orders' database is populated with the 'Demand Date' of the demand order it is linked to.  Preactor will evaluate the 'Demand Date' field against the 'Due Date' field and will use the earliest of the two dates to determine which date should be used when scheduling.":
25900 "Displays a dialog with fields relating to the status of an operation.":
25910 "This option can be selected when an order is split, this option enables each production lot to proceed independently through the manufacturing process, e.g. all lots do not have to be completed at one operation before a subsequent operation can commence.":
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
