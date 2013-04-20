
//what pin everything is set to
int led = 0;
int shortLed = 3;
int led2 = 6;
int shortLed2 = 8;
int led3 = 11;

int button = 13;
int button2 = 12;
int input = LOW;
int input2 = LOW;

//begins the setup of the leds and buttons 
void setup() {
  pinMode(led, OUTPUT);
  pinMode(shortLed, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(shortLed2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button, INPUT);
  pinMode(button2, INPUT);       
}
// starts a never ending loop until you pick press a buttton
//you have two options
void loop() {
  input = digitalRead(button);
  input2 = digitalRead(button2);
 //this says if the input voltage is turned high or on
 //it will choose option 1
 //turn on by button 1
 if (input == HIGH){
   output();
 }   
 //this says if the input voltage is turned high or on
 //it will choose option 2
 //turn on by button 2
 if (input2 == HIGH){
   output2();
 }  
 //The first light show
}
void output() {
  //The led's are lit until they are set back to low
  //the delay allows them to stay on for so long
  
  //This is the start with one light from right to left
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        delay(1000);
        digitalWrite(shortLed, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(1000);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led3, LOW);
        delay(100);
        
        //This is all of the lights being lit
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //this is them being lit one at a time from left to right
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(1000);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        delay(1000);
        digitalWrite(shortLed, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(100);
        
        //The two tall lights being lit 
        //then the three small lights
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(750);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        delay(750);
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //This is when they light up the two outside
        //then it lights up the two middle
        //then the middle one and reverse
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(500);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(500);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //the end of the first show
        //all lights light up twice
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        
}

//second light show
void output2() {
  //The led's are lit until they are set back to low
  //the delay allows them to stay on for so long
  
  //beginning of second light show all lights light up twice
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(750);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //outside leds light up twice
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //lights up the two tall inner lights
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(500);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        
        //lights up the middle twice
        digitalWrite(led2, HIGH);
        delay(1000);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(100);
        
        //lights up the two tall inner lights
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        digitalWrite(shortLed2, HIGH);
        delay(500);
        digitalWrite(shortLed, LOW);
        digitalWrite(shortLed2, LOW);
        delay(100);
        
        //outside leds light up twice
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
        //light up left to right
        digitalWrite(led3, HIGH);
        delay(750);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(shortLed2, HIGH);
        delay(750);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(750);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        delay(750);
        digitalWrite(shortLed, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        delay(750);
        digitalWrite(led, LOW);
        delay(100);
        
        //light up right to left
        digitalWrite(led, HIGH);
        delay(750);
        digitalWrite(led, LOW);
        delay(100);
        digitalWrite(shortLed, HIGH);
        delay(750);
        digitalWrite(shortLed, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(shortLed2, HIGH);
        delay(750);
        digitalWrite(shortLed2, LOW);
        delay(100);
        digitalWrite(led3, HIGH);
        delay(750);
        digitalWrite(led3, LOW);
        delay(100);
        //lights up right to left small leds
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led2, HIGH);
        delay(1000);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led2, LOW);
        delay(1000);
        digitalWrite(led3, LOW);
        delay(100);
        
        //lights up left to right small leds
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led2, HIGH);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led3, LOW);
        delay(1000);
        digitalWrite(led2, LOW);
        delay(1000);
        digitalWrite(led, LOW);
        delay(100);
        
        //lights up the tall leds right to left
        digitalWrite(shortLed, HIGH);
        delay(1000);
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed, LOW);
        delay(1000);
        digitalWrite(shortLed2, LOW);
        delay(100);
        //lights up the tall leds left to right
        digitalWrite(shortLed2, HIGH);
        delay(1000);
        digitalWrite(shortLed, HIGH);
        delay(1000);
        digitalWrite(shortLed2, LOW);
        delay(1000);
        digitalWrite(shortLed, LOW);
        delay(100);
        
        //lights up all the leds twice
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led, HIGH);
        digitalWrite(shortLed, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(shortLed2, HIGH);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(shortLed, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(shortLed2, LOW);
        digitalWrite(led3, LOW);
        delay(100);
        
}
