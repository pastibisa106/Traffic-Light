// Traffic Light Arduino | RAQHA

int RED = 4; // pin 4 for Red
int GREEN = 2; // pin 2 for Green
int YELLOW = 3; // pin 3 for Yellow

int DELAY_GREEN = 5000; int DELAY_YELLOW = 2000; int DELAY_RED = 5000;

// basic functions
void setup() {
  pinMode(GREEN, OUTPUT); pinMode(YELLOW, OUTPUT); pinMode(RED, OUTPUT); }

void loop() {
  green_light(); delay(DELAY_GREEN); yellow_light(); delay(DELAY_YELLOW);
  red_light(); delay(DELAY_RED); }

void green_light() {
  digitalWrite(GREEN, HIGH); digitalWrite(YELLOW, LOW); digitalWrite(RED, LOW); }

void yellow_light() {
  digitalWrite(GREEN, LOW); digitalWrite(YELLOW, HIGH); digitalWrite(RED, LOW); }

void red_light() {
  digitalWrite(GREEN, LOW); digitalWrite(YELLOW, LOW); digitalWrite(RED, HIGH); }
