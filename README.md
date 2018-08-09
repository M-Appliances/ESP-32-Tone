# ESP-32-Tone
A simple Arduino script to make an Espressif ESP32 send out a tone.

Whilst you're here - check out what we do at [Maker Appliances](https://makerappliances.com)!

The buzzer needs to have an external drive (internal drive buzzers generally create a single pitch).  The positive input to the buzzer also needs to be fixed to GPIO25 or 26.

Assisted after having tried to use the tone() function & getting the "tone was not declared in this scope" by this answer [https://github.com/espressif/arduino-esp32/issues/1720](https://github.com/espressif/arduino-esp32/issues/1720).

## How To Make The Script Work

Type 1, 2 or 3 into the serial monitor & press send.  You should get an audible output.
