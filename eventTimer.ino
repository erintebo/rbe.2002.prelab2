#include "eventTimer.h"
eventTimer myTimer;
  
void setup() {
  Serial.begin(115200); //set baud rate for serial moniter
  myTimer.Start(1000); //A Start() method that takes an interval (in ms) as an argument (sets timer for 500 ms) 
}

void loop() {
  if(myTimer.CheckExpired()){
    if(millis() <= 10000){
      Serial.println(millis());
    }
    else myTimer.Cancel();
  }
}
