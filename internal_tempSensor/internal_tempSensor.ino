
//https://www.youtube.com/watch?v=pFZX_qdr4dY
// This code doesn't function properly
//https://www.youtube.com/watch?v=xPlN_Tk3VLQ&t=3s
//https://dronebotworkshop.com/esp32-intro/
//
//https://gndtovcc.home.blog/2020/04/15/solved-failed-to-connect-to-esp32-timed-out-waiting-for-packet-header/
//http://www.ayarafun.com/wp-content/uploads/2016/11/NODE32S_pinout.png

int value = 0;

uint8_t temprature_sens_read();


void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
}

void loop() {
  value = hallRead();
  // put your main code here, to run repeatedly:
    Serial.print("Hall sensor: " + String(value));
    Serial.println();


  delay(1000);

}
