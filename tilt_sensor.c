/*
    Project name : Arduino Uno Tilt Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-tilt-sensor
*/

// Define the pin connected to the tilt sensor
const int tiltSensorPin = 2;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the tilt sensor pin as input
  pinMode(tiltSensorPin, INPUT);
}

void loop() {
  // Read the state of the tilt sensor
  int sensorState = digitalRead(tiltSensorPin);

  // Print the tilt sensor state to the Serial Monitor
  if (sensorState == HIGH) {
    Serial.println("Tilt detected");
  } else {
    Serial.println("No tilt detected");
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(200);
}
