#define buton 8
#define led 9
int buton_durumu = 0;

void setup() {

 pinMode(buton, INPUT);
 pinMode(led, OUTPUT);

}
void loop() {

buton_durumu = digitalRead(buton);  
 if(buton_durumu == 1){
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
 }
 else{
 digitalWrite(led, LOW);
 }
}
