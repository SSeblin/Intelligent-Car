/*******************************INTELLIGENT CAR ************************************
*  EQUIPMENT: ARDUINO + L293D + Ulltra Sonic Sensor 
*  Author：Sebastien Seblin       
*  Licence: Open Source
******************************************************************************************/

/******************************************************************************************
L293D Pins declaration
******************************************************************************************/

//Enable pins
int enable1=2;     
int enable2=7;     

//Input Pins Motor 1
int input1=3;      
int input2=4;    

//Input Pins Motor 2
int input3=5;
int input4=6;

/******************************************************************************************
Ultrasonic Sensor Pins Declaration
******************************************************************************************/
int const trigPin = 10;
int const echoPin = 9;

/******************************************************************************************
Security Distance
******************************************************************************************/
 
int securityDistance=10; 


/******************************************************************************************
Move Forward function
******************************************************************************************/

void moveForward()
{
      //Left wheel
      digitalWrite(enable1, HIGH); 
      digitalWrite(input1, HIGH); 
      digitalWrite(input2, LOW); 

      //Right wheel 
      digitalWrite(enable2, HIGH);
      digitalWrite(input3, HIGH); 
      digitalWrite(input4, LOW);  
}

/******************************************************************************************
Move Backward function
******************************************************************************************/

void moveBackward()
{
    
           //Left wheel
      digitalWrite(enable1, HIGH); 
      digitalWrite(input1, LOW); 
      digitalWrite(input2, HIGH); 

      //Right wheel 
      digitalWrite(enable2, HIGH);
      digitalWrite(input3, LOW); 
      digitalWrite(input4, HIGH);
      
}

/******************************************************************************************
Turn Left function
******************************************************************************************/

void moveLeft()
{
           //Left wheel
      digitalWrite(enable1, HIGH); 
      digitalWrite(input1, LOW); 
      digitalWrite(input2, LOW); 

      //Right wheel 
      digitalWrite(enable2, HIGH);
      digitalWrite(input3, HIGH); 
      digitalWrite(input4, LOW);
}

/******************************************************************************************
Turn Right function
******************************************************************************************/

void moveRight()
{    
           //Left wheel
      digitalWrite(enable1, HIGH); 
      digitalWrite(input1, HIGH); 
      digitalWrite(input2, LOW); 

      //Right wheel 
      digitalWrite(enable2, HIGH);
      digitalWrite(input3, LOW); 
      digitalWrite(input4, LOW);
}


/******************************************************************************************
Stop function
******************************************************************************************/

void carStop()
{
      //Left wheel
      digitalWrite(2, HIGH); 
      digitalWrite(3, LOW); 
      digitalWrite(4, LOW); 

      //Right wheel 
      digitalWrite(7, HIGH);
      digitalWrite(5, LOW); 
      digitalWrite(6, LOW);  
}

/******************************************************************************************
* Ports Initialization
******************************************************************************************/
void setup()
{
      //L293D PinMode
      pinMode(2, OUTPUT);       // Define the number 2 interface as the output interface
      pinMode(3, OUTPUT);       // Define the number 3 interface as the output interface
      pinMode(4, OUTPUT);       // Define the number 4 interface as the output interface
      pinMode(5, OUTPUT);       // Define the number 5 interface as the output interface
      pinMode(6, OUTPUT);       // Define the number 6 interface as the output interface
      pinMode(7, OUTPUT);       // Define the number 7 interface as the output interface

      //Ultra Sonic PinMode
      pinMode(trigPin, OUTPUT); // trig pin will have pulses output
      pinMode(echoPin, INPUT); // echo pin should be input to get pulse width

      //Serial Port Initialization
      Serial.begin(9600);
}

/******************************************************************************************
Main Program
******************************************************************************************/ 
void loop()
{


/******************************************************************************************
Ultra Sonic Sensor Distance Calculation
******************************************************************************************/ 

 
int duration, distance; // Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters

digitalWrite(trigPin, HIGH); // Output pulse with 1ms width on trigPin
delay(1);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH); // Measure the pulse input in echo pin
// Distance is half the duration devided by 29.1 (from datasheet)

distance = (duration/2) / 29.1;
delay(60);


/******************************************************************************************
Movement Loop
******************************************************************************************/ 

/*Tests on the Serial Port if needed
Serial.print("Distance: "); 
Serial.println(distance );
*/
    moveForward(); // Normal condition

if (distance < securityDistance){ // If obstacle is close, move right to avoid it
  moveRight(); 
}

if (distance < securityDistance/2){ // If obstacle is too close, Stop 
  carStop(); 
}

  }
    

/******************************************************************************************
*                                       END
******************************************************************************************/





