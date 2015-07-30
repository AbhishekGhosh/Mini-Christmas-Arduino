/*
  MiniChristmas 
  Blinks 3 LEDs like in Christmas Lights repeatedly in two patterns and keeps the onboard LED to OFF.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. It will be OFF. 
  This example code is derivative of the default Blink. 
  It needs a minimum stuffs - 3 LEDs attached to pin 7, pin 8, pin 12 and 3 Resisters.
  

  Circuit : 
  
  Red LED's positive -> 200 Ohm Resister -> Pin 7
  Blue LED's positive -> 200 Ohm Resister -> Pin 8
  Second Blue LED's positive -> Pin 12
  All the three Red and Blue LED's Negative's are inter-connected
            ending to a -> 10K Ohm Resister - > GND
  Second blue LED will not need any resister - power supplied is too for UNO.
  
  Created on 30 July 2015
  by Dr. Abhishek Ghosh
  This code is Licenced under GNU GPL 3.0
  https://thecustomizewindows.com/
 
 */

void setup() {
  pinMode(13, OUTPUT); // on board LED OFF
}

void loop() {
  digitalWrite(13, LOW);   // declaired pin value pinMode
  delay(10); 
// we will repeat the cycle for 6 times to create a visual impression, we will light up the 2nd blue LED at 3rd interval
// continuous blink starts
  digitalWrite(8, HIGH);   // LED on 8 ON
  delay(100);              // wait time
  digitalWrite(8, LOW);    // LED off
  delay(50);               // wait time

  digitalWrite(7, HIGH);   // LED on 7 ON
  delay(100);              // wait time
  digitalWrite(7, LOW);    // LED off
  delay(50); // wait time   
// add smoothing transition effect
  digitalWrite(8, HIGH); 
  delay(50); 
  digitalWrite(8, LOW); 
  delay(50);  
// this is the second blue LED without any resister
  digitalWrite(12, HIGH);  
  delay(100);  
  digitalWrite(12, LOW);   
  delay(50);   
// again add smoothing transition effect
  digitalWrite(7, HIGH);
  delay(50);      
  digitalWrite(7, LOW); 
  delay(50); 
  
  digitalWrite(8, HIGH); 
  delay(100);           
  digitalWrite(8, LOW); 
  delay(50);      

  digitalWrite(7, HIGH);   
  delay(100);       
  digitalWrite(7, LOW);   
  delay(50); 
  
  digitalWrite(8, HIGH);  
  delay(100);      
  digitalWrite(8, LOW);  
  delay(50);     

  digitalWrite(7, HIGH);  
  delay(100);  
  digitalWrite(7, LOW);   
  delay(50);
  
  digitalWrite(8, HIGH);  
  delay(100);   
  digitalWrite(8, LOW);  
  delay(50); 

  digitalWrite(7, HIGH);   
  delay(100);  
  digitalWrite(7, LOW);   
  delay(50); 
  
  digitalWrite(8, HIGH);   
  delay(100);         
  digitalWrite(8, LOW);   
  delay(50);    

  digitalWrite(7, HIGH);  
  delay(100);         
  digitalWrite(7, LOW);   
  delay(50); 
  // continuous blink ends
  // now do a bit delayed lighting creating another effect
  
  digitalWrite(8, HIGH);   // LED on 8 ON
  delay(1000);              // wait time prolonged 
  digitalWrite(8, LOW);    // LED off
  delay(50);               // wait time

  digitalWrite(7, HIGH);   // LED on 8 ON
  delay(1000);              // wait time prolonged
  digitalWrite(7, LOW);    // LED off
  delay(50); // wait time
  // give the second blue LED a shorter time to light up
  digitalWrite(12, HIGH);   // LED on 8 ON
  delay(100);              // wait time
  digitalWrite(12, LOW);    // LED off
  delay(50);   

}
  // Whole thing is getting repeated for nth times
