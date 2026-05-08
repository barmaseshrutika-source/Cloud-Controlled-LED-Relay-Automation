#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "ESP32 LED RELAY CONTROL"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// WiFi Credentials
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// Pins
int ledPin = 2;
int relayPin = 5;

// Variables
int ledState = 0;
int relayState = 0;

// ---------------- LED CONTROL ----------------
BLYNK_WRITE(V0)
{
  ledState = param.asInt();

  digitalWrite(ledPin, ledState);

  // Send LED status to dashboard
  Blynk.virtualWrite(V2, ledState);

  Serial.print("LED State: ");
  Serial.println(ledState);
}

// ---------------- RELAY CONTROL ----------------
BLYNK_WRITE(V1)
{
  relayState = param.asInt();

  digitalWrite(relayPin, relayState);

  // Send Relay status to dashboard
  Blynk.virtualWrite(V3, relayState);

  Serial.print("Relay State: ");
  Serial.println(relayState);
}

void setup()
{
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(relayPin, OUTPUT);

  digitalWrite(ledPin, LOW);
  digitalWrite(relayPin, LOW);

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected to Blynk");
}

void loop()
{
  Blynk.run();
}