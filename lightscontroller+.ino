
#include <RBDdimmer.h>

#define USE_SERIAL  Serial

const int buttonPin = 3;
const int numPrograms = 2;
int actualProgram = 0;
int buttonState;
bool lightOFF = true;

dimmerLamp dimmer1(8);
dimmerLamp dimmer2(9);
dimmerLamp dimmer3(10);
dimmerLamp dimmer4(11);
dimmerLamp dimmer5(12);
dimmerLamp dimmer6(13);

void setup() {

  dimmer1.begin(NORMAL_MODE, ON); dimmer1.setPower(50);
  dimmer2.begin(NORMAL_MODE, ON); dimmer2.setPower(50);
  dimmer3.begin(NORMAL_MODE, ON); dimmer3.setPower(50);
  dimmer4.begin(NORMAL_MODE, ON); dimmer4.setPower(50);
  dimmer5.begin(NORMAL_MODE, ON); dimmer5.setPower(50);
  dimmer6.begin(NORMAL_MODE, ON); dimmer6.setPower(50);
  
  pinMode(buttonPin, INPUT);
  
  Serial.begin(9600);
  Serial.println("end_setup");
  
}

void loop() {

    /*buttonState = digitalRead(buttonPin);
    //delay(1000);
    //if(buttonState == HIGH){
      Serial.println("push_button");
      lightOFF = true;
      if(actualProgram == numPrograms)
        actualProgram = 0;
      changeProgram(actualProgram++);
      }
    else
        changeProgram(actualProgram);*/
        program1();

}

void changeProgram(int newProgram){

  Serial.println("changing...");
  switch(newProgram){
    case 0: program0(); break;
    case 1: program1(); break;
    case 2: program2(); break;
    default: program0();
    //case 3: program3(); break;
    //case 4: program4(); break;
    //case 5: program5(); break;
    //case 6: program6(); break;
  }
  
}

void program0(){

  Serial.println("program0");
  dimmer1.setState(OFF); dimmer2.setState(OFF); dimmer3.setState(OFF); dimmer4.setState(OFF); dimmer5.setState(OFF); dimmer6.setState(OFF);
    
}


void program1(){

  Serial.println("program1");  
  dimmer1.setState(ON); 
  delay(100);
  dimmer2.setState(ON);
  delay(100);
  dimmer3.setState(ON);
  delay(100);
  dimmer4.setState(ON);
  delay(100);
  dimmer5.setState(ON);
  delay(100);
  dimmer6.setState(ON);
  delay(100);
  dimmer1.setState(OFF); 
  delay(100);
  dimmer2.setState(OFF);
  delay(100);
  dimmer3.setState(OFF);
  delay(100);
  dimmer4.setState(OFF);
  delay(100);
  dimmer5.setState(OFF);
  delay(100);
  dimmer6.setState(OFF);
  delay(100);

  Serial.println("running...");

}

void program2(){

  Serial.println("program2");
  
  dimmer1.setState(ON); 
  delay(500);
  dimmer2.setState(ON);
  dimmer1.setState(OFF); 
  delay(500);
  dimmer3.setState(ON);
  dimmer2.setState(OFF);
  delay(500);
  dimmer4.setState(ON);
  dimmer3.setState(OFF);
  delay(500);
  dimmer5.setState(ON);
  dimmer4.setState(OFF);
  delay(500);
  dimmer6.setState(ON);
  dimmer5.setState(OFF);
  delay(500);
  dimmer6.setState(OFF);
  delay(500);
    
  Serial.println("running...");

}

 
