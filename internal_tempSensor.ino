
//https://www.youtube.com/watch?v=pFZX_qdr4dY
// This code doesn't function properly
//https://www.youtube.com/watch?v=xPlN_Tk3VLQ&t=3s
//https://dronebotworkshop.com/esp32-intro/
//
//https://gndtovcc.home.blog/2020/04/15/solved-failed-to-connect-to-esp32-timed-out-waiting-for-packet-header/
//http://www.ayarafun.com/wp-content/uploads/2016/11/NODE32S_pinout.png

extern "C" // Extern C is used when we are using a funtion written in "C" language in a C++ code.
{

  uint8_t temprature_sens_read(); // This function is written in C language
}

uint8_t temprature_sens_read();


void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.print("Temperature in deg Celcius: ");

  // Convert raw temperature in F to Celsius degrees
  Serial.print((temprature_sens_read() - 32) / 1.8);
  Serial.println(" C");
  delay(5000);

}
