# Tilt Sensor with LED Indicator

#### Project Overview

This project demonstrates how to use a tilt sensor to detect tilt or movement. An LED is connected to the Arduino Uno to provide a visual indication when the tilt sensor is tilted.

#### Components Needed

1. **Arduino Uno**
2. **Tilt Sensor**
3. **LED**
4. **Resistor (for the LED)**
5. **Jumper Wires**

### Block Diagram



#### Pin Connections

- **Tilt Sensor:**
  - Signal Pin: Connect to digital pin 2 (tiltPin) on the Arduino Uno.
  - VCC: Connect to Arduino 5V or 3.3V (check sensor specifications).
  - GND: Connect to Arduino GND.

- **LED:**
  - Anode (+): Connect to digital pin 13 (ledPin) on the Arduino Uno through a current-limiting resistor (e.g., 220Ω).
  - Cathode (-): Connect to Arduino GND.

#### Instructions

1. **Set Up the Circuit:**
   - Connect the signal pin of the tilt sensor to digital pin 2 (tiltPin) on the Arduino Uno.
   - Connect the LED's anode (positive) pin to digital pin 13 (ledPin) on the Arduino Uno, and its cathode (negative) pin to GND through a current-limiting resistor.

2. **Initialize the System:**
   - Set the tiltPin as an input and the ledPin as an output in the setup function.

3. **Read Tilt Sensor State:**
   - Continuously read the state of the tilt sensor using `digitalRead(tiltPin)` in the loop function.

4. **Control LED Indicator:**
   - If the tilt sensor is tilted (HIGH state), turn on the LED by setting `digitalWrite(ledPin, HIGH)`.
   - If the tilt sensor is not tilted (LOW state), turn off the LED by setting `digitalWrite(ledPin, LOW)`.

5. **Debounce the Sensor:**
   - Add a small delay (`delay(100)`) to debounce the sensor and prevent rapid toggling of the LED.

#### Applications

- **Motion Detection:** Use the tilt sensor to detect movement or tilting in various projects.
- **Alarm Systems:** Integrate the tilt sensor into alarm systems to trigger alerts upon movement.
- **Orientation Sensing:** Implement the tilt sensor for orientation sensing applications.

#### Notes

- Ensure the proper orientation of the tilt sensor for accurate detection.
- Adjust the delay time according to the sensitivity of the tilt sensor and the desired response time.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner