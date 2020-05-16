long lastTimeStateChange = 0;
String state = "ON";
void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}
void loop() {
  long currentTime = millis();
  if (state == "ON") {
    digitalWrite(5, 1);
    if (currentTime - lastTimeStateChange >= 500) {
      state = "OFF";
      lastTimeStateChange = currentTime;
    }
  } else if (state == "OFF") {
    digitalWrite(5, 0);
    if (currentTime - lastTimeStateChange >= 500) {
      state = "ON";
      lastTimeStateChange = currentTime;
    }
  }
}
