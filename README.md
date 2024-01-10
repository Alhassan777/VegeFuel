# Biogas Generation and Control System

VegeFuel is an innovative biogas Generation and Control System designed to harness sustainable energy from biomass through anaerobic digestion. The project integrates cutting-edge technologies, including Arduino Uno, electric sensors, and a custom mobile application developed using MIT App Inventor. This synergistic combination enables efficient control, monitoring, and user interaction within the biogas generation process. The project aims to utilize the 30 million tons of Biomass generated annually in Egypt to provide approximately 3 million Egyptians with their annual energy need of natural gas using a sustainable energy generation process.

## Arduino Uno Microcontroller

The core of the project is the Arduino Uno microcontroller, a versatile and programmable device that serves as the central control unit. It facilitates communication between the various components, receives user input, and executes predefined commands to ensure the smooth operation of the biogas generation system.

## Electric Sensors

The project incorporates two crucial electric sensors:

- **DHT11 Temperature Sensor:** Monitors the temperature inside the reactor, ensuring that the anaerobic digestion process occurs within the optimal range (25-55 °C). The sensor triggers an alarm if the temperature exceeds 50 °C or falls below 30 °C, preventing system malfunctions.

- **MQ4 Methane Sensor:** Indicates the presence of methane and measures its concentration within the biogas. This sensor plays a key role in maintaining safety by detecting potential leaks and ensuring the controlled release of biogas.

## Mobile Application (MIT App Inventor)

A custom mobile application, developed using MIT App Inventor, empowers users with a convenient interface to interact with the biogas generation system. The application leverages a Bluetooth module to establish a wireless connection with the Arduino Uno, enabling users to:

- **Send Commands:** Users can control the system by sending commands such as opening or closing solenoid valves, adjusting parameters, and initiating specific actions.

- **Receive Data:** Real-time data from the electric sensors, including temperature and methane concentration, is displayed on the mobile application. This allows users to monitor the system's performance remotely.

- **Ensure Safety:** The application enhances safety by providing immediate alerts and notifications in case of abnormal conditions, ensuring users can respond promptly to any issues.

## Benefits

- **User-Friendly Interface:** The mobile application simplifies user interaction, making it accessible to individuals with varying levels of technical expertise.

- **Remote Monitoring:** Users can monitor and control the biogas generation system from a distance, enhancing convenience and accessibility.

- **Safety Features:** Integration of sensors and the mobile application enhances safety by providing real-time alerts and data monitoring.

## External Links 

**Full project documentation:** https://drive.google.com/drive/folders/17GDEv9xDjfDU_RmH8js9uK2EIT-XnCby?usp=sharing
