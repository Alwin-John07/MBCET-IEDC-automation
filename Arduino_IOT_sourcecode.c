#include "thingProperties.h"

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  
  
}



/*
  Since L1 is READ_WRITE variable, onL1Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onL1Change()  {
  // Add your code here to act upon L1 change
}

/*
  Since L2 is READ_WRITE variable, onL2Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onL2Change()  {
  // Add your code here to act upon L2 change
}

/*
  Since L3 is READ_WRITE variable, onL3Change() is
  executed every time a new value is received from IoT Cloud.
*/
void onL3Change()  {
  // Add your code here to act upon L3 change
}
