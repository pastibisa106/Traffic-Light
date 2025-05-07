/*
  membuat traffic lights
  Author : RAFIQUL HAKIM
  Date/Time : Sabtu, 15 Desember 2018
*/

int Green1  = 2;
int Green2  = 5;
int Green3  = 8;
int Yellow1 = 3; 
int Yellow2 = 6; 
int Yellow3 = 9;
int Red1    = 4;
int Red2    = 7;
int Red3    = 10;

void setup() {
  // Initialize The LED Pins As Output Signals

  pinMode (Green1, OUTPUT);
  pinMode (Yellow1, OUTPUT);
  pinMode (Red1, OUTPUT);
  pinMode (Green2, OUTPUT);
  pinMode (Yellow2, OUTPUT);
  pinMode (Red2, OUTPUT);
  pinMode (Green3, OUTPUT);
  pinMode (Yellow3, OUTPUT);
  pinMode (Red3, OUTPUT);

  // Now The LEDs Are Initialized We Need To Tell The Arduino
  // Which Commands It Needs To Run In "VOID LOOP"
}

void loop() {
  // Turn On Red2 and Red3
  digitalWrite(Red2, HIGH);
  digitalWrite(Red3, HIGH);
  digitalWrite(Red1, HIGH);

  // Red1 Off
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Red1, fadeValue);
    delay(30);
  }
  
  // Yellow1 On and Off
  digitalWrite(Yellow1, HIGH);
  delay(2000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Yellow1, fadeValue);
    delay(30);
  }
  digitalWrite(Yellow1, LOW);
  delay(100);

  // Green1
  digitalWrite(Green1, HIGH);
  delay(6000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Green1, fadeValue);
    delay(30);
  }
  digitalWrite(Green1, LOW);
  delay(100);

  // Red1 On and Red2 Off
  digitalWrite(Red1, HIGH);
  digitalWrite(Red2, LOW);

  // Yellow2
  digitalWrite(Yellow2, HIGH);
  delay(2000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Yellow2, fadeValue);
    delay(30);
  }
  digitalWrite(Yellow2, LOW);
  delay(100);

  // Green2
  digitalWrite(Green2, HIGH);
  delay(6000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Green2, fadeValue);
    delay(30);
  }
  digitalWrite(Green2, LOW);
  delay(100);

  // Red2 On Red3 Off
  digitalWrite(Red2, HIGH);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Red2, fadeValue);
    delay(30);
  }
  digitalWrite(Red3, LOW);

  // Yellow3
  digitalWrite(Yellow3, HIGH);
  delay(2000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Yellow1, fadeValue);
    delay(30);
  }
  digitalWrite(Yellow3, LOW);
  delay(100);

  // Green3
  digitalWrite(Green3, HIGH);
  delay(6000);
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    digitalWrite(Green3, fadeValue);
    delay(30);
  }
  digitalWrite(Green3, LOW);
  delay(100);
}
