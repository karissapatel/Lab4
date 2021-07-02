/*
 * Project Lab4
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
   
   
   pinMode(D5, OUTPUT);
   pinMode(D6, INPUT);



}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  bool value;
  value = digitalRead(D6);
  if (value == true) {

  digitalWrite(D5,HIGH);

  } else {

  digitalWrite(D5, LOW);

  
  }

}
  
  
  
