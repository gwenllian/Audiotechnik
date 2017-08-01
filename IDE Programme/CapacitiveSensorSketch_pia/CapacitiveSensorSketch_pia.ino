#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */


CapacitiveSensor   cs_1 = CapacitiveSensor(4,0);        // 100K resistor between pins 4 & 0, pin 0 is sensor pin
CapacitiveSensor   cs_2 = CapacitiveSensor(4,1);        
CapacitiveSensor   cs_3 = CapacitiveSensor(4,2);
CapacitiveSensor   cs_4 = CapacitiveSensor(4,3);
CapacitiveSensor   cs_5 = CapacitiveSensor(4,5);
CapacitiveSensor   cs_6 = CapacitiveSensor(4,6);
CapacitiveSensor   cs_7 = CapacitiveSensor(4,7);
CapacitiveSensor   cs_8= CapacitiveSensor(4,8);
CapacitiveSensor   cs_9 = CapacitiveSensor(4,9);
CapacitiveSensor   cs_10 = CapacitiveSensor(4,10);
CapacitiveSensor   cs_11 = CapacitiveSensor(4,11);
CapacitiveSensor   cs_12 = CapacitiveSensor(4,12);
CapacitiveSensor   cs_13 = CapacitiveSensor(4,13);

void setup()                    
{
   pinMode(LED_BUILTIN, OUTPUT);
   cs_8_6.set_CS_AutocaL_Millis(50);
   Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long total1 =  cs_4_0.capacitiveSensor(30);
    if(total1 > 50){
      tone(10, 262, 200);
    }
    long total2 =  cs_4_1.capacitiveSensor(30);
    if(total2 > 50){
      tone(10, 277, 200);
    }
    long total3 =  cs_4_2.capacitiveSensor(30);
    if(total3 > 50){
      tone(10, 294, 200);
    }
    long total4 =  cs_4_3.capacitiveSensor(30);
    if(total4 > 50){
      tone(10, 311, 200);
    }
    long total5 =  cs_4_5.capacitiveSensor(30);
    if(total5 > 50){
      tone(10, 330, 200);
    }
    long total6 =  cs_4_6.capacitiveSensor(30);
    if(total6 > 50){
      tone(10, 349, 200);
    }
    long total7 =  cs_4_7.capacitiveSensor(30);
    if(total7 > 50){
      tone(10, 370, 200);
    }
    long total8 =  cs_4_8.capacitiveSensor(30);
    if(total8 > 50){
      tone(10, 392, 200);
    }
    long total9 =  cs_4_9.capacitiveSensor(30);
    if(total9 > 50){
      tone(10, 415, 200);
    }
    long total10 =  cs_4_10.capacitiveSensor(30);
    if(total10 > 50){
      tone(10,440, 200);
    }
    long total11 =  cs_4_11.capacitiveSensor(30);
    if(total11 > 50){
      tone(10, 466, 200);
    }
    long total12 =  cs_4_12.capacitiveSensor(30);
    if(total12 > 50){
      tone(10, 494, 200);
    }
    long total13 =  cs_4_13.capacitiveSensor(30);
    if(total13 > 50){
      tone(10, 523, 200);
    }

    

    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug window spacing

   
    Serial.print(total1);                 // print sensor output 1
    Serial.print("\t");
    Serial.print(total2);                  // print sensor output 2
    Serial.print("\t");
    Serial.print(total3);                  // print sensor output 3
    Serial.print("\t");
    Serial.print(total4);                  // print sensor output 4
    Serial.print("\t");
    Serial.print(total5);                  // print sensor output 5
    Serial.print("\t");
    Serial.print(total6);                  // print sensor output 6
    Serial.print("\t");
    Serial.print(total7);                  // print sensor output 7
    Serial.print("\t");
    Serial.print(total8);                  // print sensor output 8
    Serial.print("\t");
    Serial.print(total9);                  // print sensor output 9
    Serial.print("\t");
    Serial.print(total10);                  // print sensor output 10
    Serial.print("\t");
    Serial.print(total11);                  // print sensor output 11
    Serial.print("\t");
    Serial.print(total12);                  // print sensor output 12
    Serial.print("\t");
    Serial.print(total13);                  // print sensor output 13
    

    delay(10);                             // arbitrary delay to limit data to serial port 
}
