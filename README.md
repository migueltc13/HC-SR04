# HC-SR04 Sensor Alarm

### DESCRIPTION:
***Alarm system made with HC-SR04 Ultrasonic Sensor and micro-controller ESP8266.<br />***
- Circuit controlled by Wi-Fi with blynk app/website.<br />
- Trigger distances are customizable in centimeters (cm).<br />
- Delay times are customizable in mileseconds (ms).<br />

Still in progress...

### INSTALLATION:
To install you can use multiple IDE's, such as Arduino IDE (Genuino), to transfer the code to the micro-controller ESP8266.<br />
There's also plugins to use in IDE's like VSCode, Atom, etc.<br />

After compiling the .ino file the code can be send to the ESP and the installation phase is over.
Special thanks to... (ESP8266 community) (Blynk - V) (...)

There's a shell file "ttyUSB0.sh", located in the "src" dir made to open the USB0 port to enable the ESP connection (Ubuntu).<br />
That runs the following command:
  ```bash
  sudo chmod -R 777 /dev/ttyUSB0 
  ```
Feel free to modify to your respective port.

### TODO:
  - [x] Wiring
  - [ ] Sketch
  - [ ] Settings
  - [ ] Blynk LED
  - [ ] Cleaner app breadboard

### MADE BY:
Miguel Carvalho

### MIT LICENSE:
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Copyright (c) 2021 Miguel Carvalho @migueltc13
