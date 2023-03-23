#include <ButtonDebounce.h> 
#include <Arduino.h> 
#include <AdvancedSevenSegment.h> 
int count = 0; 

int main(){
    
AdvanceSevenSegmentsevenSegment(11, 12, 6, 7, 8, 10, 9, 5);
ButtonDebouncebutton1(2, 100); 
ButtonDebouncebutton2(3, 100) 
Voidsetup() { 
button1.setCallback (button1Changed); 
button2.setCallback (button2Changed); 
pinMode(4,OUTPUT); 
} 
void button1Changed(int state) { 
if (state)count++; 
if (count > 9) count = 9; 
} 
void button2Changed(int state) { 
if (state)count--; 
if (count < 0) count = 0; 
} 
void loop() { 
button1.update(); 
button2.update(); 
sevenSegment.setNumber(count); 
if (count > 0) 
{ 
digitalWrite(4, LOW); 
 } 
else 
digitalWrite(4, HIGH); 
 } 
} 