
int Sensor = 12;   //Input Pin

 
int flg = 0;  //Change detection flag
void setup() {
  
  Serial.begin(9600);

 
  pinMode (Sensor, INPUT); 
  Serial.println("Waiting for motion");
}
 
void loop() {
  
     int val = digitalRead(Sensor);
     if((val > 0) && (flg==0))
     {
        Serial.println("Motion Detected");
        flg = 1;
     }
 
     if(val == 0)
     {
        
          Serial.println("NO Motion");
        flg = 0;
     }  
}