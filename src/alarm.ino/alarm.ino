// Alarm System based in a Ultrasonic Sensor

// Imports
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Definitions
#define BLYNK_PRINT Serial
#define TRIGGERPIN D1
#define ECHOPIN    D2
#define iLED       D0

// Define DISTANCEs HERE; Triggers the iLED if equal or trepasses the limit;
int MIN_DISTANCE = 5;
int MAX_DISTANCE = 20;

// Define the blynk update time DELAY HERE;
const int DELAY = 750;

// Define delay time in ms when alarm's triggered HERE;
const int tDELAY = 2000;

// Blynk authentication
char auth[] = "pB9fsXg73Zc96zvXCrJkrNrHFc-BUkxD";

// WiFi
char ssid[] = "SSID";
char pass[] = "Password";

// iLED initiation
String iLEDstate = "off";
const int iLEDint = 1;

// Blynk LCD Widget
WidgetLCD lcd(V1);

// TODO: Blynk LED Widget


// FUNCTIONS

  // SETUP
void setup(){
  // Debug console
  Serial.begin(9600);
  pinMode(TRIGGERPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  pinMode(iLED, OUTPUT);

  Blynk.begin(auth, ssid, pass);
  // or
  // Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  // Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

  // lcd.clear(); // Clears the LCD Widget
}

  // LOOP
void loop(){
  lcd.clear();
  lcd.print(1, 0, "Distance in cm:"); // (X:0-15, Y:0,1, "msg")

  long duration, distance;
  digitalWrite(TRIGGERPIN, LOW);
  delayMicroseconds(3);

  digitalWrite(TRIGGERPIN, HIGH);
  delayMicroseconds(12);

  digitalWrite(TRIGGERPIN, LOW);
  duration = pulseIn(ECHOPIN, HIGH);
  distance = (duration/(float)2.0) /(float) 29.1; // float 1 digit
  Serial.print(distance);

// Alarm system by distance

  // MAX_DISTANCE and MIN_DISTANCE when NULL
  if((distance>=MAX_DISTANCE && MAX_DISTANCE==NULL) || (distance<=MIN_DISTANCE && MIN_DISTANCE==NULL)){
    trigger();
  }

  // When they aren't NULL values
  else{
    if(distance<=MIN_DISTANCE || distance>=MAX_DISTANCE){
      trigger();
    }
    // When isn't a detection
    else{
      lcd.print(8,1,("%.1f", distance));
      digitalWrite(iLED,LOW);
    }
  }
  // End of Alarm system

  // Run results to Blynk
  Blynk.run();

  // Final delay berofe looping
  delay(DELAY);
}

// OTHER FUNCTIONS
void trigger(){
  lcd.clear();
  lcd.print(2, 0, "!! IntrusA !!");
  digitalWrite(iLED,HIGH);
  delay(tDELAY);
  loop();
}
