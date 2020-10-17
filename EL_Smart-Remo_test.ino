#include <M5Stack.h>
#include <WiFi.h>

#define WIFI_SSID "9CAD97C2505C"  // !!!! change
#define WIFI_PASS "2211585110241" // !!!! change

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("");
  M5.begin();
  M5.Lcd.setTextSize(2);
  M5.Lcd.println("wifi connect start");
  
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.println("wait...");
    delay(1000);
  }
  M5.Lcd.println("wifi connect ok");
  M5.update();
}

void loop() {
  // put your main code here, to run repeatedly:
println("loop")

}
