#include <Servo.h>

Servo anklel;
Servo shinl;
Servo kneel;
Servo thighl;
Servo hipl;
Servo ankler;
Servo shinr;
Servo kneer;
Servo thighr;
Servo hipr;
//int a,b,c,d,e,f,g,h,i,j;
int i;

void setup(){
  //anklel.attach(11);
  //shinl.attach(10);
  kneel.attach(9);
  thighl.attach(8);
  hipl.attach(7);
  ankler.attach(2);
  shinr.attach(3);
  kneer.attach(4);
  thighr.attach(5);
  hipr.attach(6);
 // Serial.begin(9600);
  anklel.write(77);
  shinl.write(115);
  kneel.write(120);
  thighl.write(105);//---
  hipl.write(140);
  ankler.write(95);
  shinr.write(75);
  kneer.write(72);
  thighr.write(94);
  hipr.write(60);
  Serial.begin(9600);
  //mov(72,105,120,105,145,100,80,85,110,50);
  //slave('F');
}
void loop(){
  //mov accepts angles order as follows and the initial angles as well first {left ankle=73,left shin=110,left knee=93,left thigh=100,left hip=104}
  //second {right ankle=97,right shin=90,right knee93,right thigh=90,right hip=90}
  //slave accepts first {key F=forward HAND B=backword HAND} the rest are the angles of hands {sholder,joint,elbow,grip}
  //mov(72,105,120,105,145,100,80,85,110,50);F=right hand  forwar left  hand backward  ;B=right  hand backward  left hand forward
 //while (1){
  //delay(5000);
  //Serial.println("start");
/*mov(la,ls.lk-.lth+,lh,ra,rs,rk,rth,rh)*/
  //mov(60,115,120,105,140,110,75,82,94,60);
  //delay(300);
  /*mov(la,ls.lk-. lth+,lh, ra,rs,rk,rth,rh)*/
  //ankler.write(95);
  //mov(60,115,120,105,140,95,75,80,150,60);
  //delay(1000);
//  break;
 }
  
  

//}
void mov(int a,int b,int c,int d,int e,int f,int g,int h,int k,int j){
  set(77,a,anklel);
  set(115,b,shinl);
  set(120,c,kneel);
  set(105,d,thighl);
  set(140,e,hipl);
  set(95,f,ankler);
  set(75,g,shinr);
  set(80,h,kneer);
  set(94,k,thighr);
  set(60,j,hipr);
}
void slave(char key){
  Serial.write(key);


}
void set(int j,int val,Servo s){
   if(j<=val){
   for(i=j;i<=val;i++){
    s.write(i);
    Serial.println(i);
    delay(20);
   }}
   else if(j>=val){
   for(i=j;i>=val;i--){
    s.write(i);
    delay(20);
   }}
}
