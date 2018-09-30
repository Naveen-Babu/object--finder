int motor1Pin1 = D3; 
int motor1Pin2 = D4; 
int enable1Pin = D2;

const int trigPin = D5;
const int echoPin = D6;
// defines variables
long duration;
int distance;
void setup() {

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
  
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(115200); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, 0);
delay(2000);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, 1);
delay(1000);
digitalWrite(trigPin, 0);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, 1);
// Calculating the distance
distance = duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

if (distance <= 10){
    Serial.println("Moving Backwards");
          digitalWrite(motor1Pin1, LOW);
          digitalWrite(motor1Pin2, HIGH); 
          digitalWrite(enable1Pin, 250);
          delay(3000);
  
}
else{
   Serial.println("Moving Forward");
          digitalWrite(motor1Pin1, HIGH);
          digitalWrite(motor1Pin2, LOW);
          digitalWrite(enable1Pin, 10);
          delay(3000);
}

}

