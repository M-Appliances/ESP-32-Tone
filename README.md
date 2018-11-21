# ESP-32-Tone
A simple Arduino sketch to make an Espressif ESP32 send out a tone.

Whilst you're here - check out what we do at [Maker Appliances](https://makerappliances.com)!

The buzzer needs to have an external drive (internal drive buzzers generally create a single pitch).  The positive input to the buzzer also needs to be fixed to GPIO25 or 26.

Assisted after having tried to use the tone() function & getting the "tone was not declared in this scope" by this answer [https://github.com/espressif/arduino-esp32/issues/1720](https://github.com/espressif/arduino-esp32/issues/1720).

## How To Make The Script Work

Type 1, 2 or 3 into the serial monitor & press send.  You should get an audible output.


#Help Us

We're makers & we're learning all the time. So...

If you want to get more involved, have some epic ideas, or just want to see what we are up to, then take a look at our new MakerAppliances brand. MakerAppliances is our development workshop, aimed at helping makers develop their own connected devices!

Check out what we are upto at... [Maker Appliances.com](https://makerappliances.com)!
