# Cloud-Controlled-LED-Relay-Automation

Project Overview

This project demonstrates a cloud-controlled IoT automation system using ESP32, Blynk Cloud, and Wokwi simulation. The system allows users to control LED and Relay modules remotely through a mobile application and web dashboard without requiring physical hardware.

#Features

Real-time LED control
Relay ON/OFF automation
Blynk mobile app integration
Blynk web dashboard monitoring
Wokwi ESP32 simulation
Live data streaming
Cloud

#Technologies Used

ESP32
Arduino IDE
Blynk IoT Cloud
Wokwi Simulator
WiFi Communication
Embedded C++

#Project Architecture

Mobile App / Web Dashboard ↓ Blynk Cloud ↓ ESP32 (Wokwi) ↓ LED & Relay

#Wokwi Circuit Connections

*LED Connection
Component	ESP32 Pin
LED Positive	GPIO2
LED Negative	GND

*Relay Connection
Relay Pin	ESP32 Pin
IN	GPIO5
VCC	3.3V
GND	GND

*Blynk Datastream Setup
Virtual Pin	Purpose
V0	LED Control
V1	Relay Control
V2	LED Status
V3	Relay Status
