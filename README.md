# CubeCell-Dev-Board-Plus-ADC-Check
This is a simple sketch for the CubeCell Dev Board Plus to show the current ADC Readings on the small display of the module.

The module has three ADC Inputs: ADC1, ADC2 and ADC3.
They are located in the bottom right corner of the dev board (usb facing up).

PCB Marks:  
ADC1: ~1 |
ADC2: ~2 |
ADC3: ~3

Keep in mind that ADC1 is used for power detection and should not be used. You need to remove the bridge BR1 for using it as a analog input. Otherwise it is used to monitor the battery voltage (VBAT). If no battery is connected the value of ADC1 should float in the neighborhoud of 100mV.

The inputs have a range of 0mV to 2400mV.

If you want to learn more about the module, have a look at the Pinout and Schematic:
https://heltec-automation-docs.readthedocs.io/en/latest/cubecell/dev-board/htcc-ab02/hardware_update_log.html

# Dev's
Jan Sonntag - https://github.com/SirSundays
