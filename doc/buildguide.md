# Build guide

## Parts
Name                     |Quantity |Notes
-------------------------|---------|-----
PCB                      |1        |
Switch plate A           |1        |
Switch plate B_Left      |1        |
Switch plate B_Right     |1        |
Bottom plate             |1        |
Cover plate              |1        |
SK6812 MINI-E leds       |12       |
1N4148W diodes           |58       |
Kailh hotswap sockets    |58       |
ProMicro RP2040          |1        |[Aliexpress](https://www.aliexpress.com/item/1005006355650714.html)
M2x4mm screws            |32       |
M2x12mm screws           |4        |
M2x7mm spacer         |18       |
M2x7mm Knurled spacer |4        |[Aliexpress](https://www.aliexpress.com/item/1005002979083511.html)

### Optionally
Name |Quantity |Notes
-----|---------|-----
20P Low profile pinsocket |2    |Used to socket the ProMicro RP2040.<br>[AKIZUKI DENSHI](https://akizukidenshi.com/catalog/g/g103138/)
EVQWGD001 rotary encoder  |1    |[Aliexpress](https://www.aliexpress.com/item/32990950196.html), [TALPKEYBOARD](https://talpkeyboard.net/items/65cdb71207d2c4002b622ce0), [Yushakobo](https://shop.yushakobo.jp/products/3971)
1N4148W diodes            |1    |Used when EVQWGD001 is installed
AZ1UBALL                  |1    |Only one of this or StickPointV can be attached.<br>[Booth](https://booth.pm/ja/items/4202085)
StickPointV               |1    |Only one of this or AZ1UBALL can be attached.<br>Also, use those without glove socket mounts.<br>[Booth](https://booth.pm/ja/items/5404009)
FSS-41035-04 4P pinsocket |1    |Used when AZ1UBALL or StickPointV is installed.<br>[HIROSUGI NET](https://www.hirosugi-net.co.jp/shop/goods/goods.aspx?goods=24081), [Yushakobo](https://shop.yushakobo.jp/products/a1600ps-01-1)
PSS-410153-04 4P pinheader |1    |Used when AZ1UBALL or StickPointV is installed.<br>[HIROSUGI NET](https://www.hirosugi-net.co.jp/shop/g/g21243/), [Yushakobo](https://shop.yushakobo.jp/products/a1600ph-01-1)
M2x6mm Knurled spacer |4        |Used when StickPointV is installed.<br>[Aliexpress](https://www.aliexpress.com/item/1005002979083511.html)
M2x10mm Knurled spacer |4        |Used when StickPointV is installed.<br>[Aliexpress](https://www.aliexpress.com/item/1005002979083511.html)


## Build PCB

### [Leds](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-sk6812mini-e.md)

### [Diodes](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-1n4148w.md)

### [Hotswap sockets](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-cpg151101s11.md)

### ProMicro RP2040
It is recommended to check whether the firmware can be written to the microcontroller in advance.

When using a low profile pinsocket, cut the pinsocket to match the shape of the through-hole and solder it at the point marked in red.  
[Learn more about microcontroller socketing using low profile pinsocket](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/microcontroller-socketing_low-profile-pinsocket.md)

When directly soldering a pin header, cut the pin header to match the shape of the through-hole and solder it to the ProMicro RP2040 at the point marked in red.
<img src="../img/buildguide/soldering-promicro_01.jpg" width="80%">

## Build Case
Use a 4mm screw to secure the 7mm spacer. However, use a 12mm screw to secure the red marked areas.  
<img src="../img/buildguide/build-case_01.jpg" width="80%">

Place the PCB on the bottom plate.  
<img src="../img/buildguide/build-case_02.jpg" width="80%">

Place switch plate A on the PCB. It is easier to align the key switches if they are attached to the four corners.  
<img src="../img/buildguide/build-case_03.jpg" width="80%">

Place switch plate B on the PCB. It is easier to align the key switches if they are attached to both ends.  
<img src="../img/buildguide/build-case_04.jpg" width="80%">

Use a 4mm screw to secure the switch plate.Fix the switch plate using a 4mm screw.  
Also, attach the 7mm Knurled spacer at the point marked in red.  
<img src="../img/buildguide/build-case_05.jpg" width="80%">

Fix the cover plate with a 4mm screw.  
<img src="../img/buildguide/build-case_06.jpg" width="80%">

Attach a key switch and key cap of your choice to complete the process!  
<img src="../img/buildguide/build-case_07.jpg" width="80%">

Congratulations on the completion!  
Please be proud of it on social networking sites!  
`#isw_oozy`


## Build Optionally
### [EVQWGD001 rotary encoder](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-evqwgd001.md)

### AZ1UBALL
[Please solder the 4P pinsocket to the PCB in advance.](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-4p-pinsocket.md)

Mount AZ1UBALL in 4P pinsocket.  
<img src="../img/buildguide/mounting-az1uball_01.jpg" width="80%">

Attach the cover plate for AZ1UBALL with screws.
<img src="../img/buildguide/mounting-az1uball_02.jpg" width="80%">

### StickPointV
[Please solder the 4P pinsocket to the PCB in advance.](https://github.com/is-watering/isw-kbd-building-tips/blob/main/doc/soldering-4p-pinsocket.md)

Replace the spacer supplied with the StickPointV with a 6mm Knurled spacer and the 7mm Knurled spacer on the keyboard case with a 10mm Knurled spacer.  
Then mount the StickPointV in the 4P pinsocket.  
<img src="../img/buildguide/mounting-stickpointv_01.jpg" width="80%">

Attach the cover plate for StickPointV with screws.
<img src="../img/buildguide/mounting-stickpointv_02.jpg" width="80%">
