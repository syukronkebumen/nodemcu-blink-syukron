#include <ESP8266WiFi.h>;
#include <BlynkSimpleEsp8266.h>;

#define BLYNK_PRINT Serial
 
char auth[] = "ZoOMvMXgwwFP1GmGVG6bZnZNM0JF9Pwi"; //token blynk via e-mail
 
char ssid[] = "aaa12345"; //nama wifi
char pass[] = "bismillah123#"; //password wifi
 
void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
 
void loop(){
  Blynk.run();
}
