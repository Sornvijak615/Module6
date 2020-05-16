long lastTimeStateChange = 0;
String state = "2";
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  long currentTime = millis();
  if (state == "2") {
    digitalWrite(2, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "3";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "3") {
    digitalWrite(3, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "4";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "4") {
    digitalWrite(4, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "5";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "5") {
    digitalWrite(5, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "6";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "6") {
    digitalWrite(6, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "7";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "7") {
    digitalWrite(7, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "8";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "8") {
    digitalWrite(8, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "9";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "9") {
    digitalWrite(9, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "10";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "10") {
    digitalWrite(10, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "11";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "11") {
    digitalWrite(11, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "12";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "12") {
    digitalWrite(12, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "13";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "13") {
    digitalWrite(13, 1);
    if (currentTime - lastTimeStateChange >= 250) {
        state = "OFF";
        lastTimeStateChange = currentTime;
    }
  }
  else if (state == "OFF") {
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(11, 0);
      digitalWrite(12, 0);
      digitalWrite(13, 0);
      if (currentTime - lastTimeStateChange >= 250) {
        state = "2";
        lastTimeStateChange = currentTime;
    }
  }
}