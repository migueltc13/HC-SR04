# HC-SR04 Sensor Alarm

### DESCRIPTION:
***Alarm system made with HC-SR04 Ultrasonic Sensor and the micro-controller ESP8266.<br />***
- Circuit controlled by Wi-Fi with blynk protocol.<br />
- Trigger distances are customizable in centimeters (cm).<br />

Still in progress...

### INSTALLATION:
To install you can use multiple IDE's, such as Arduino IDE (Genuino), to transfer the code to the micro-controller ESP8266.<br />
There's also plugins to use in IDE's like VSCode, Atom, etc.<br />

After compiling the .ino file the code can be send to the ESP and the installation phase is over.
Special thanks to... (ESP8266 community) (Blynk - V) (...)

There's a shell file "~/src/ttyUSB0.sh" to open the USB0 port to enable the connection (Ubuntu).<br />
That does the following:
  ```bash
  sudo chmod -R 777 /dev/ttyUSB0 
  ```


### TODO:
  - [x] Wiring
  - [ ] Sketch
  - [ ] Settings
  - [ ] Blynk LED
  - [ ] Cleaner app breadboard
  
### MADE BY:
Miguel Carvalho
