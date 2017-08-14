int a;
int b;
char op;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  Serial.println("calc start");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter1stArg");
  if(Serial.available()>0){
    a = Serial.read();
    Serial.print("EnterOperator")
    if(Serial.available()>o{
      op = Seria.read();
      Serial.println("Enter2ndArg")
      if(Serial.available()>0[
      b = Serial.read();
    }
  }
}
int result;
if(op=='+'){
  result = a+b;
}
else if(op=='-'){
  result = a-b;
}
else if(op=='/'){
  result = a/b;
}
else if(op=='*'){
  result = a*b;
}
else if(op=='%'){
  result = a%b;
}
else{
  Serial.println("opError");
}
Serial.print("Result: ");
Serial.println(result);
}          

