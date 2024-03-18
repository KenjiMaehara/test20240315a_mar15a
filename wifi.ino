

bool connectToWifi(const char* ssid, const char* pass) {
  Serial.print("Attempting to connect to SSID: ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  int attempts = 10;
  while ((WiFi.status() != WL_CONNECTED) && (attempts-- > 0)) {
    delay(1000);
    Serial.print(".");
  }
  
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Connected to WiFi");
    return true;
  } else {
    Serial.println("Failed to connect to WiFi");
    return false;
  }
}