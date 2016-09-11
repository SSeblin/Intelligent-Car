/*******************************INTELLIGENT CAR ************************************
*  EQUIPMENT：XB-4WD + ARDUINO + L293D
*  Author：Sebastien Seblin       
*  Licence: Open Source
******************************************************************************************/

/******************************************************************************************
Analog Pins are used as GPIO
******************************************************************************************/
int leftFront=14;    //ARDUINO（A0）  
int leftBack=15;    //ARDUINO（A1）  
int rightFront=16;    //ARDUINO（A2） 
int rightBack=17;    //ARDUINO（A3)
int L_EN = 3;            //ARDUINO（3） Enable left Pin 
int R_EN = 5;            //ARDUINO（5） Enable Right Pin


/******************************************************************************************
Move Forward function
******************************************************************************************/
void moveForward()
{
      digitalWrite(leftFront, HIGH); 
      digitalWrite(leftBack, LOW); 
      digitalWrite(rightFront, HIGH); 
      digitalWrite(rightBack, LOW); 
      digitalWrite(L_EN, HIGH); 
      digitalWrite(R_EN, HIGH); 
}

/******************************************************************************************
Move Backward function
******************************************************************************************/
void moveBackward()
{
      digitalWrite(leftFront, LOW); 
      digitalWrite(leftBack, HIGH); 
      digitalWrite(rightFront, LOW); 
      digitalWrite(rightBack, HIGH); 
      digitalWrite(L_EN, HIGH); 
      digitalWrite(R_EN, HIGH); 
}


/******************************************************************************************
Move Left function
******************************************************************************************/
void moveLeft()
{
      digitalWrite(leftFront, LOW); 
      digitalWrite(leftBack, LOW); 
      digitalWrite(rightFront, HIGH); 
      digitalWrite(rightBack, LOW); 
      digitalWrite(L_EN, HIGH); 
      digitalWrite(R_EN, HIGH); 
}


/******************************************************************************************
Move Right function
******************************************************************************************/
void moveRight()
{
      digitalWrite(leftFront, HIGH); 
      digitalWrite(leftBack, LOW); 
      digitalWrite(rightFront, LOW); 
      digitalWrite(rightBack, LOW); 
      digitalWrite(L_EN, HIGH); 
      digitalWrite(R_EN, HIGH); 
}



/******************************************************************************************
* Ports Initialization
******************************************************************************************/
void setup()
{
      pinMode(leftFront, OUTPUT);       //定义数字14 接口为输出接口
      pinMode(leftBack, OUTPUT);       //定义数字15 接口为输出接口
      pinMode(rightFront, OUTPUT);       //定义数字16 接口为输出接口
      pinMode(rightBack, OUTPUT);       //定义数字17 接口为输出接口
      pinMode(L_EN, OUTPUT);                //定义数字3 接口为输出接口
      pinMode(R_EN, OUTPUT);                //定义数字5 接口为输出接口
}

/******************************************************************************************
Main Program
******************************************************************************************/ 
void loop()
{


     
}
/******************************************************************************************
*                                       END
******************************************************************************************/





