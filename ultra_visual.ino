#include <NewPing.h>

#define TRIGGER_PIN  12     
#define ECHO_PIN     11
#define MAX_DISTANCE 200
int afstand = 0;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(115200);
 }

void loop() {
  delay(50);
  afstand = sonar.ping_cm();
  for (int i = afstand; i > 0; i--){
  Serial.print("-");
  }
  Serial.println("");
}
