#include <RBDdimmer.h>

#define USE_SERIAL  Serial

dimmerLamp dimmer1(8);
dimmerLamp dimmer2(9);
dimmerLamp dimmer3(10);
dimmerLamp dimmer4(11);
dimmerLamp dimmer5(12);
dimmerLamp dimmer6(13);

unsigned short power = 100;  // from 0% to 100%
unsigned long delayx = 125;
unsigned long delayy = 100;
unsigned long onesec = 1000;

void setup() {

  dimmer1.begin(NORMAL_MODE, ON); dimmer1.setPower(power);  //g
  dimmer2.begin(NORMAL_MODE, ON); dimmer2.setPower(power);  //y
  dimmer3.begin(NORMAL_MODE, ON); dimmer3.setPower(power);  //b
  dimmer4.begin(NORMAL_MODE, ON); dimmer4.setPower(power);  //g
  dimmer5.begin(NORMAL_MODE, ON); dimmer5.setPower(power);  //y
  dimmer6.begin(NORMAL_MODE, ON); dimmer6.setPower(power);  //b
    
  Serial.begin(9600);
  Serial.println("end_setup");

  dimmer1.setState(ON); 
  delay(onesec);
  dimmer2.setState(ON);
  delay(onesec);
  dimmer3.setState(ON);
  delay(onesec);
  dimmer4.setState(ON);
  delay(onesec);
  dimmer5.setState(ON);
  delay(onesec);
  dimmer6.setState(ON);
  delay(onesec);
  delay(onesec);
  dimmer1.setState(OFF); 
  dimmer2.setState(OFF);
  dimmer3.setState(OFF);
  dimmer4.setState(OFF);
  dimmer5.setState(OFF);
  dimmer6.setState(OFF);
}

void loop() {

  for(int i = 0; i < .10; i++){
    dimmer1.setState(ON); 
    delay(delayy);
    dimmer2.setState(ON);
    delay(delayy);
    dimmer3.setState(ON);
    delay(delayy);
    dimmer4.setState(ON);
    delay(delayy);
    dimmer5.setState(ON);
    delay(delayy);
    dimmer6.setState(ON);
    delay(delayy);
    dimmer1.setState(OFF); 
    delay(delayy);
    dimmer2.setState(OFF);
    delay(delayy);
    dimmer3.setState(OFF);
    delay(delayy);
    dimmer4.setState(OFF);
    delay(delayy);
    dimmer5.setState(OFF);
    delay(delayy);
    dimmer6.setState(OFF);
    delay(delayy);
  }
  
  for(int i = 0; i < .10; i++){
    dimmer3.setState(ON);
    dimmer6.setState(ON);
    delay(delayy);
    dimmer1.setState(OFF); 
    dimmer4.setState(OFF);
    delay(delayy); 
    dimmer2.setState(ON);
    dimmer5.setState(ON);
    delay(delayy); 
    dimmer3.setState(OFF);
    dimmer6.setState(OFF);
    delay(delayy);
    dimmer1.setState(ON); 
    dimmer4.setState(ON);
    delay(delayy);
    dimmer2.setState(OFF);
    dimmer5.setState(OFF);
    delay(delayy);
  }

  for(int i = 0; i < .10; i++){
    dimmer1.setState(ON);
    dimmer6.setState(OFF);
    delay(delayy);
    dimmer2.setState(ON);
    dimmer1.setState(OFF);
    delay(delayy);
    dimmer3.setState(ON);
    dimmer2.setState(OFF);
    delay(delayy);
    dimmer4.setState(ON);
    dimmer3.setState(OFF);
    delay(delayy); 
    dimmer5.setState(ON);
    dimmer4.setState(OFF);
    delay(delayy);
    dimmer6.setState(ON);
    dimmer5.setState(OFF); 
    delay(delayy);
  }

  for(int i = 0; i < .20; i++){
    dimmer1.setState(ON);
    dimmer2.setState(ON);
    dimmer3.setState(ON);
    dimmer4.setState(OFF);
    dimmer5.setState(OFF);
    dimmer6.setState(OFF);
    delay(delayx);
    dimmer4.setState(ON);
    dimmer5.setState(ON);
    dimmer6.setState(ON);
    dimmer1.setState(OFF);
    dimmer2.setState(OFF);
    dimmer3.setState(OFF);
    delay(delayx);
  }
  
  for(int i = 0; i < .20; i++){
    dimmer1.setState(ON);
    dimmer6.setState(ON);
    dimmer3.setState(OFF); 
    dimmer4.setState(OFF);
    delay(delayx); 
    dimmer2.setState(ON);
    dimmer5.setState(ON);
    dimmer1.setState(OFF);
    dimmer6.setState(OFF);
    delay(delayx);
    dimmer3.setState(ON); 
    dimmer4.setState(ON);
    dimmer2.setState(OFF);
    dimmer5.setState(OFF);
    delay(delayx);
  }

}
