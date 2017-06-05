/*******************************INTELLIGENT CAR ************************************
*  EQUIPMENT: ARDUINO + L293D
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
      pinMode(2, OUTPUT);       // Define the number 14 interface as the output interface
      pinMode(3, OUTPUT);       // Define the number 15 interface as the output interface
      pinMode(4, OUTPUT);       // Define the number 16 interface as the output interface
      pinMode(5, OUTPUT);       // Define the number 16 interface as the output interface
      pinMode(6, OUTPUT);       // Define the number 16 interface as the output interface
      pinMode(7, OUTPUT);       // Define the number 16 interface as the output interface
      
      
}

/******************************************************************************************
Main Program
******************************************************************************************/ 
void loop()
{

//Tests 

moveForward();
//moveBackward();
//moveRight();
//moveLeft();
//carStop();
     
}
/******************************************************************************************
*                                       END
******************************************************************************************/





