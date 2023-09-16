#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
//.....................................................................
int sensor1 = 0;
int sensor2 = 0;
int sensor3 = 0;
int sensor4 = 0;
int sensor5 = 0;
int sensor6 = 0;

void setup() {
  //analogReference(EXTERNAL);
      servo1.attach(5);
      servo2.attach(6);
      servo3.attach(7);
      servo4.attach(10);
      servo5.attach(11);
      servo6.attach(12);


}
void loop() {
  
             sensor1 = analogRead(1);
             sensor1 = map(sensor1, 500, 700, 0, 180);
             servo1.write(sensor1);
      
             sensor2 = analogRead(2);
             sensor2 = map(sensor2, 500, 700, 0, 180);
             servo2.write(sensor2);

             sensor3 = analogRead(3);
             sensor3 = map(sensor3, 500, 700, 0, 180);
             servo3.write(sensor3);

             sensor4 = analogRead(4);
             sensor4= map(sensor4, 500, 700, 0, 180);
             servo4.write(sensor4);


             sensor5 = analogRead(5);
             sensor5 = map(sensor5, 500, 700, 0, 180);
             servo5.write(sensor5);


             sensor6 = analogRead(0);
             sensor6 = map(sensor6, 500, 700, 0, 180);
             servo6.write(sensor6);

                          
} 
