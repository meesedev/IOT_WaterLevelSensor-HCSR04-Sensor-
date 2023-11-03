//-----HCSR04 Sensor------------------
#define TRIGPIN_PIN  12
#define ECHO_PIN    14
long duration;
int distance;


//-------------------------------------------------
void setup() 
{
  Serial.begin(9600);
  pinMode(TRIGPIN_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}
//-----------------------------------------
void loop() 
{

  //while(1)
  //{

      pinMode(TRIGPIN_PIN, OUTPUT);
      digitalWrite(TRIGPIN_PIN, LOW);
      delayMicroseconds(2);  //sustain at least 10us HIGH pulse
      digitalWrite(TRIGPIN_PIN, HIGH);
      delayMicroseconds(10);  //sustain at least 10us HIGH pulse
      digitalWrite(TRIGPIN_PIN, LOW);
      pinMode(ECHO_PIN, INPUT);
      duration= pulseIn(ECHO_PIN, HIGH);
      distance= duration/29/2;
      if (duration!=0) 
      {
        Serial.print("Distance is :");
        Serial.print(distance);
        Serial.println("cm");
      }
    


  //}



}
//----------------------------------------
