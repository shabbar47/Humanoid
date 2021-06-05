
#include <Servo.h>
Servo shldL;
Servo jointL;
Servo elbL;
Servo grpL;
Servo shldR;
Servo jointR;
Servo elbR;
Servo grpR;
char key;
int a=130;//140
int b=70;
int c=50;//105
int d=100;
int e=160;//100
int f=70;
int g=50;//100
int h=100;
int i;

void setup() {
  // put your setup code here, to run once:
    shldL.attach(7);
    jointL.attach(6);
    elbL.attach(3);
    grpL.attach(12);
    shldR.attach(9);
    jointR.attach(10);
    elbR.attach(11);
    grpR.attach(13);
    Serial.begin(9600);
    shldL.write(140);
    jointL.write(100);
    elbL.write(105);
    grpL.write(120);
    shldR.write(110);
    jointR.write(70);
    elbR.write(90);
    grpR.write(100);


}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()>0){
      key=Serial.read();

    }
    if(key=='F'){
      Serial.println("Forward");
      movR(130,70,50,100);
      movL(160,70,100,100);
      
    }
     if(key=='B'){
      Serial.println("Backward");
      movR(90,70,50,100);
      movL(100,70,100,100);
    }
   
}
void movL(int j, int k, int l,int m){
  set(140,j,shldL);
  set(100,k,jointL);
  set(105,l,elbL);
  set(120,m,grpL);

   
}
void movR(int n,int o,int p,int q){
  // setup take initial angle,final angle,servo key
  set(110,n,shldR);
  set(70,o,jointR);
  set(90,p,elbR);
  set(100,q,grpR);
}
void set(int j,int val,Servo s){
   if(j<=val){
   for(i=j;i<=val;i++){
    s.write(i);
    delay(15);
   }}
   else if(j>=val){
   for(i=j;i>=val;i--){
    s.write(i);
    delay(15);
   }}
}
