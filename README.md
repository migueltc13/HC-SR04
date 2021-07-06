# HC-SR04 Sensor Alarm

### DESCRIPTION:
***Alarm system made with HC-SR04 Ultrasonic Sensor and micro-controller ESP8266.<br />***
- Circuit controlled by Wi-Fi with blynk app/website.<br />
- Trigger distances are customizable in centimeters (cm).<br />
- Delay times are customizable in mileseconds (ms).<br />

Still in progress...

---

A special thanks to the ***ESP8266 Community*** for the board driver for the ESP8266 in Arduino IDE and also to ***Volodymyr Shymanskyy*** for the Blynk library used in this project for Wi-Fi connectivity.

---

### INSTALLATION:
To install you can use multiple IDE's, such as Arduino IDE (Genuino), to transfer the code to the micro-controller ESP8266.<br />
There's also plugins to use in IDE's like VSCode, Atom, etc.<br />

After compiling the .ino file the code can be send to the ESP and the installation/programming phases are over.

---

### CIRCUIT SKETCH:
<p align="center">
  <img src="https://github.com/migueltc13/HC-SR04/blob/main/doc/Sketch.png" alt="Circuit Sketch"/>
</p>

---

### ISSUES:
***a) Port closed or access denied in USB connection.***<br />

a.1) There's a shell file "ttyUSB0.sh", located in the "src" dir made to open the USB0 port to enable the ESP connection, fixing issue ***a)***.<br />

That executes the following command:

```bash
sudo chmod -R 777 /dev/ttyUSB0 
  ```
  
To run simply type:

```bash
./src/ttyUSB0.sh
```

Feel free to modify to your respective port.

---

***Or:***

a.2) You can run the following commands:

```bash
groups
```

To see all available groups type:

```bash
compgen -g
```

Most of them are self-explanatory, in this case you want to add yourself to either the tty group, or dialout, which you would do by:

```bash
sudo usermod -a -G tty yourname
```

Then your user should have access to tty without use of sudo.

---

### TODO:
  - [x] Wiring
  - [ ] Fix distance float
  - [ ] Sketch
  - [ ] Settings
  - [ ] Blynk LED
  - [ ] Cleaner app breadboard

---

### MIT LICENSE:
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. <br />

Copyright (c) 2021 @migueltc13

---

### MADE BY:
Miguel Carvalho
