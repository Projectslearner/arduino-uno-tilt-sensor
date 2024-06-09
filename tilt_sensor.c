/*
    Project name : Tilt Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-tilt-sensor
*/

const int tiltPin = 2; // Define the pin connected to the tilt sensor
const int ledPin = 13; // Define the pin connected to the LED

void setup() {
  pinMode(tiltPin, INPUT); // Set tiltPin as input
  pinMode(ledPin, OUTPUT); // Set ledPin as output
}

void loop() {
  int tiltState = digitalRead(tiltPin); // Read the tilt sensor state
  
  if (tiltState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED if tilt sensor is tilted
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED if tilt sensor is not tilted
  }
  
  delay(100); // Add a small delay to debounce the sensor
}
