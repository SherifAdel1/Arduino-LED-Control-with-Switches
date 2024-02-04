const int red = 3;
const int green = 5;
const int yellow =6;
const int red2=9;
const int button =4;
const int button2= 7;


void setup() {
  pinMode(red,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(button,INPUT);
  pinMode(button2,INPUT);

  // put your setup code here, to run once:

}

void loop() {
  switch (digitalRead(button)){
    case 1:for ( int i=0;i<=255;i+=5){
      analogWrite(red,i);
      analogWrite(red2,i);
      delay(50);
      
      
      break;
    }
   case 0:for (int i=255;i>=0;i-=5){
     analogWrite(red,i);
      analogWrite(red2,i);
      delay(50);
      
      
     break;

   }

  }
  
 switch (digitalRead(button2)){
    case 1:for ( int i=0;i<=255;i+=5){
      analogWrite(green,i);
      analogWrite(yellow,i);
      delay(50);
      
      
      break;
    }
   case 0:for (int i=255;i>=0;i-=5){
     analogWrite(green,i);
      analogWrite(yellow,i);
      delay(50);
      
      
      break;

   }
   
  }
 
      
    
}