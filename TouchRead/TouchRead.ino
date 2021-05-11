// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
const int threshold = 20;

// variable for storing the touch pin value
int touchValue;

void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
   // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value:
   touchValue = touchRead(T0); 
  Serial.println(touchRead(T0));  // get value using T0
  // check if the touchValue is below the threshold
  // if it is , set LED_BUILTIN to HIGH
  if(touchValue < threshold ){
    // turn LED on
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    
  }
  else{
    //turn LED off
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  }
  
  delay(500);
}
