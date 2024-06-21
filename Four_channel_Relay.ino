#define BLYNK_TEMPLATE_ID "TMPL3NUP7DA59"
#define BLYNK_TEMPLATE_NAME "Relay appliance"
#define BLYNK_AUTH_TOKEN "oUGx6pfPPcBj3s_NVD3cnxP50x29eUVF"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials
char ssid[] = "Andy Dufresne";
char pass[] = "sana@001";

// Blynk Auth Token
char auth[] = "oUGx6pfPPcBj3s_NVD3cnxP50x29eUVF";

// Relay pins
const int relay1 = D1;
const int relay2 = D2;
const int relay3 = D3;
const int relay4 = D4;

void setup() {
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);

  // Set relay pins as output
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Set all relays to off
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
}

void loop() 
{
  Blynk.run();
}

// Blynk virtual write functions to control relays
BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  digitalWrite(relay1, pinValue ? LOW : HIGH);
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  digitalWrite(relay2, pinValue ? LOW : HIGH);
}

BLYNK_WRITE(V3) {
  int pinValue = param.asInt();
  digitalWrite(relay3, pinValue ? LOW : HIGH);
}

BLYNK_WRITE(V4) {
  int pinValue = param.asInt();
  digitalWrite(relay4, pinValue ? LOW : HIGH);
}
