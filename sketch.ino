#include <WiFi.h> 
// Wi-Fi Credentials 
const char* ssid = "Wokwi-GUEST"; 
const char* password = ""; 
void connectWiFi() { 
    Serial.begin(115200);  // Initialize Serial Monitor 
    WiFi.begin(ssid, password);  // Start Wi-Fi connection 
    // Wait for Wi-Fi to connect 
    while (WiFi.status() != WL_CONNECTED) { 
        delay(1000); 
        Serial.println("Connecting to WiFi..."); 
    } 
    // Once connected, print the IP address 
    Serial.println("WiFi Connected"); 
    Serial.print("IP Address: "); 
    Serial.println(WiFi.localIP());  
} 
void setup() { 
    connectWiFi();  // Call the Wi-Fi setup function 
} 
void loop() { 
    // Nothing needed here for this exercise 
}
