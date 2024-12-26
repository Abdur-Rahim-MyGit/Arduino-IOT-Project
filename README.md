# **IoT Project: Multi-functional Robotic Car**

## **✨ Overview**
This project showcases a **multi-functional robotic car** designed for versatility and efficiency. Controlled via **Bluetooth**, **IR remote**, and **autonomous modes**, it integrates cutting-edge IoT components like **Arduino**, **IR sensors**, **ultrasonic sensors**, and an **L298 motor driver**. The car performs tasks like **manual control**, **line following**, and **obstacle avoidance**, making it a perfect project for learning and practical applications.

---

## **🔧 Features**
1. **🚗 Manual Control Mode**
   - Operated via a **Bluetooth-enabled Android app** or **IR remote**.
   - Commands: *Forward, Backward, Left, Right, Stop*.

2. **□ Line Following Mode**
   - Detects and follows lines using **IR sensors**.
   - Adapts seamlessly to black-and-white contrasts.

3. **🚦 Obstacle Avoidance Mode**
   - Uses **ultrasonic sensors** to detect and avoid obstacles.
   - Smart maneuvering based on real-time distance analysis.

4. **🎤 Voice Commands**
   - Supports voice-activated commands: *Left, Right, Stop*.

5. **⏳ Dynamic Speed Control**
   - Adjustable speed settings via Bluetooth.

6. **🔌 Multi-sensor Integration**
   - **IR sensors**: Line detection.
   - **Ultrasonic sensors**: Obstacle detection.
   - **Servo motor**: Scanning for obstacle-free paths.

---

## **🔍 Components Used**
- **Microcontroller**: Arduino
- **Motor Driver**: L298N
- **Sensors**:
  - **Ultrasonic Sensor (HC-SR04)**: Obstacle detection
  - **IR Sensors**: Line following
- **Actuators**:
  - **Servo Motor**: Directional scanning
  - **DC Motors**: Movement
- **Communication Modules**:
  - **Bluetooth Module (HC-05)**
  - **IR Receiver**

---

## **💡 Advantages**
1. **💡 Versatile Control**: Manual, autonomous, and voice modes.
2. **🔋 Energy Efficiency**: Optimized power usage.
3. **💸 Cost-effective**: Uses affordable and widely available components.
4. **⚙️ Scalable Design**: Easily upgradable.
5. **🎓 Educational Value**: Great for IoT, robotics, and embedded systems learning.
6. **🌐 Practical Applications**: Ideal for warehouse automation, smart transportation, and more.

---

## **⚖️ Setup Instructions**
1. **Connect Components:**
   - Attach **DC motors** to the **L298N motor driver**.
   - Link sensors and servo to appropriate Arduino pins.
2. **Upload Code:**
   - Load the Arduino sketch into the microcontroller.
3. **Pair Devices:**
   - Ensure Bluetooth and IR connections are paired correctly.
4. **Power Up:**
   - Use a compatible battery pack to power the system.

---

## **⚔️ Operation Modes**
- **Manual Mode:** Control using the Android app or IR remote.
- **Line Following Mode:** Place the car on a black-and-white line path.
- **Obstacle Avoidance Mode:** Test in environments with potential obstacles.

---

## **🚀 Potential Enhancements**
- Integration of **GPS** for navigation.
- Addition of a **Wi-Fi module** for remote control.
- Incorporation of a **camera** for object recognition.
- Use of **solar panels** for energy harvesting.

---

## **🔖 Project Code**
The complete Arduino code is included in this repository. Ensure you have the following libraries installed in your Arduino IDE:
- `SoftwareSerial.h`
- `IRremote.h`

---

## **📈 Conclusion**
This **IoT-based robotic car** combines manual, voice, and autonomous control modes to deliver a versatile and practical solution. It’s perfect for academic projects, IoT training, and real-world applications in automation and robotics.

**Let’s innovate together!**

