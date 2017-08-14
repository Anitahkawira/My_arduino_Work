int a;
int b;
char op;
void setup()  {
   while(!Serial.available()) {    
}
Serial. begin(19200);
}
void loop() {
//  Serial.println("Enter 1st Argument:");
  while(!Serial.available()>0){    
  }
  a= Serial.read() - '0';
  while(!Serial.available()>0){    
  }
  op=Serial.read();
  while(!Serial.available()>0){    
  }
    b= Serial.read() - '0';
    int result;
    if(op == '+'){
    result = a+b;
    }
    else if(op == '-'){
    result = a-b;
    }
    else if(op == '/'){
    result = a/b; 
    }
    
    else if(op == '*'){
    result = a*b;
    }
    
    else if(op == '%'){
    result = a%b;
    }
    else{
    Serial.println("operator error");
    }
    Serial.print("result:");
    Serial.println(result);
}
