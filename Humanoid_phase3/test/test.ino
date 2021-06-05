
#include <Servo.h>

Servo shinl,kneel,anklel,ankler,hipl,thighl,shinr,kneer,thighr,hipr;     
void setup() {
  Serial.begin(9600);

    shinl.attach(9);
    kneel.attach(10);
    anklel.attach(8);
    thighl.attach(11);
    hipl.attach(12);
    shinr.attach(6);
    kneer.attach(5);
    ankler.attach(7);
    thighr.attach(4);
    hipr.attach(3);
  
  }

void loop() {
  anklel.write(73); 
  shinl.write(110); 
  kneel.write(98);
  thighl.write(115);
  hipl.write(105);
  ankler.write(97);
  shinr.write(90);
  kneer.write(83);
  thighr.write(105);
  hipr.write(105);
}

