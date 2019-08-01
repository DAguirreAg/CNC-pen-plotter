/*     Code for testing A4988 driver controlled stepper motors
 *      
 *  by Daniel Aguirre
 *  
 */
 
// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4;  
const int buttonPin = 5; 
 
void setup() {
  // Set the pins
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(buttonPin,INPUT);
  
}
void loop() {

  // Check if button was pressed
  if (digitalRead() == true){
    digitalWrite(dirPin,HIGH); 
    for(int x = 0; x < 200; x++) {
      digitalWrite(stepPin,HIGH); 
      delayMicroseconds(500); 
      digitalWrite(stepPin,LOW); 
      delayMicroseconds(500); 
    }
    
    delay(1000); 
    
    digitalWrite(dirPin,LOW); 
    for(int x = 0; x < 200; x++) {
      digitalWrite(stepPin,HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(500);
    }
    
    delay(1000);
  }
}
