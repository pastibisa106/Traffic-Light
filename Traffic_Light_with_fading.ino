/*
  membuat traffic lights
  Author : RAFIQUL HAKIM
  Date/Time : Sabtu, 15 Desember 2018
*/

int Green1  = 2;
int Yellow1 = 3; // PWM
int Red1    = 4;

int Green2  = 5; // PWM
int Yellow2 = 6;  // PWM
int Red2    = 7;

int Green3  = 8;
int Yellow3 = 9; // PWM
int Red3    = 10; // PWM

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
  digitalWrite(Red2, HIGH);
  digitalWrite(Red3, HIGH);
  
  // jalur 1
  // Red1 Off
  digitalWrite(Red1, LOW);
  // Yellow1 On and Off
  analogWrite(Yellow1, 255);
  delay(2000);
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Yellow1, fadeValue);
    delay(20);
  }
  analogWrite(Yellow1, 0);
  delay(400);

  // Green1 On and Off
  digitalWrite(Green1, HIGH);
  delay(4000);
  analogWrite(Green1, LOW);
  delay(400);
  digitalWrite(Red1, HIGH);

// =====================================

// jalur 2 Green2 dan Yellow2 PWM
  // Red2 Off
  digitalWrite(Red2, LOW);
  // Yellow2 On and Off
  analogWrite(Yellow2, 255);
  delay(2000);
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Yellow2, fadeValue);
    delay(20);
  }
  analogWrite(Yellow2, 0);
  delay(400);

  // Green2 On and Off
  analogWrite(Green2, 255);
  delay(4000);
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Green2, fadeValue);
    analogWrite(Red3, fadeValue);
    delay(20);
  }
  
  analogWrite(Green2, 0);
  analogWrite(Red3, 0);
  delay(400);
  // Red2 On
  digitalWrite(Red2, HIGH);

// =====================================

// jalur 3 Yellow3 dan Red3 PWM
  
  // Yellow3 On and Off
  analogWrite(Yellow3, 255);
  delay(2000);
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(Yellow3, fadeValue);
    delay(20);
  }
  analogWrite(Yellow3, 0);
  delay(400);

  // Green3 On and Off
  digitalWrite(Green3, HIGH);
  delay(4000);
  digitalWrite(Green3, LOW);
  delay(400);

  // Red3 On
  analogWrite (Red3, 255);

}
