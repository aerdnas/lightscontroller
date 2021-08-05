
#include <RBDdimmer.h>

#define USE_SERIAL  Serial

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
    
  Serial.begin(9600);
  Serial.println("end_setup");
  
}

void loop() {

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

}
