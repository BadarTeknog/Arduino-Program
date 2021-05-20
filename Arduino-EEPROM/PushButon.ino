byte data;
void setup(){
 Serial.begin(9600);
 pinMode(11,INPUT_PULLUP);
 pinMode(13,OUTPUT);  
    delay(1000); 
 
}
void loop(){
  data=digitalRead(11);
    
  Serial.println(data);
      
  if(data==0){
        digitalWrite(13,HIGH);
    }else{
        digitalWrite(13,LOW);
    } 
    
}
// Jangan lupa subscribe nya 
// Badar Teknog
// video pembahasanhttps://youtu.be/Heeir4xSBwQ
