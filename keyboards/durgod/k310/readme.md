# K310

This is a standard ANSI 104 key or ISO 105 key keyboard without backlight. 
Based on Durgod K320 TKL keyboard by [dkjer](https://github.com/dkjer)

* Keyboard Maintainer: [svintuss](https://github.com/svintuss)
* Hardware Supported: Durgod Taurus K310 board with STM32F070RBT6
* Hardware Availability: https://www.durgod.com/page9?product_id=47&_l=en

## Instructions

### Build

Make command example for this keyboard (after setting up your build environment):

    make durgod/k310:default_ansi_mac

Flashing example for this keyboard:

    make durgod/k310:default_ansi_mac:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

### Initial Flash

For first Flashing from initial Stock's Firmware

1. Back up original Firmware Image:
- Unplug
- Short Boot0 to Vdd (See below)
- Plug In USB
- Make a Flash Image's Backup in case you wanted to restore the Keyboard to Stock's Image:
  - Using DFUseDemo.exe from ST's STSW-STM32080: https://www.st.com/en/development-tools/stsw-stm32080.html
  - Using dfu-util (thanks to [tylert](https://github.com/tylert) for instructions!):

        dfu-util --list
        dfu-util --alt 0 --dfuse-address 0x08000000 --upload ${OLD_STOCK_BIN}

2. Flash the QMK Firmware Image.
- Put board into Bootloader mode, using the same method as when backing up the original Firmware (above)
- Here are a few options for performing the initial Flash:
  - Using [QMK Toolbox](https://github.com/qmk/qmk_toolbox)
  - Using DFuseDemo.exe if STTub30 driver is used.
  - Using dfu-util:

        dfu-util --alt 0 --dfuse-address 0x08000000 --download ${NEW_QMK_BIN}

You can short Boot0 to Vdd by shorting R21 to C27 on the sides closest to the processor, as shown:

<img src="https://i.imgur.com/hvDnw5a.jpg" width="520" height="693" alt="Shorting Boot0 to Vdd on K320">

### Subsequent Flashing

For repeating Flashing you can use BootMagic:
- BootMagic Full has been enabled. Press Space + B on boot to enter bootloader mode. 
- Unplug USB Cable
- Hold Space + B Buttons 
- Plug in USB Cable, Keyboard should be in ST-Bootloader state

### Changing keyboard layouts
To change layouts BootMagic is used.
- Unplug USB cable
- Holding Space + 1 or Space + 0 plug USB cable back.

Space + 0 - Mac layout with Mac Fn keys.
Space + 1 - Win layout with Fn+F1 - Fn+F7 for media buttons.
