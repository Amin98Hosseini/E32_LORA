# E32_LORA

in this lib you need to init uart1 and then add the lib in your code. 
you can selected the mode of your module in this lib with function .
this module have 4 mode .

1- normal mode (mode 0) : in this mode  uart and wireless channel is open , transparent an transmision is on.

2- wake up mode (mode 1) : in this mode uart and wireless channel is open the only difference with mode 0 is that before  transmitting data , increasing the wake up code automatically.

3- power saving mode (mode 2) : uart is close , wireless channel is under air-waken mode , after reciving data < uart open and sendind data.

4- sleep mode (mode 3) : in sleep mode receiving parameter setting command  is on.


copy right 2020 reserved with elecomp_tech
