
const int sensorPin = A0;
float sensorValue;
float voltageOut;

float temperatureC;
float temperatureF;

// uncomment if using LM335
float temperatureK;

//temperature display Heater
//digit 1 Heater
int a_1 = 49;
int b_1 = 47;
int c_1 = 41;
int d_1 = 43;
int e_1 = 45;
int f_1 = 51;
int g_1 = 53;
int dp_1 = 39;

//digit 2 Heater
int a_2 = 25;
int b_2 = 23;
int c_2 = 33;
int d_2 = 35;
int e_2 = 37;
int f_2 = 27;
int g_2 = 29;
int dp_2 = 31;

//temperature display Heater
//digit 1 Heater
int a_3 = 48;
int b_3 = 46;
int c_3 = 26;
int d_3 = 24;
int e_3 = 22;
int f_3 = 50;
int g_3 = 52;
int dp_3 = 28;

//digit 2 Heater
int a_4 = 40;
int b_4 = 38;
int c_4 = 32;
int d_4 = 34;
int e_4 = 36;
int f_4 = 42;
int g_4 = 44;
int dp_4 = 30;

void setup() {
  Serial.begin(9600);

  pinMode(sensorPin, INPUT);
  //digit 1
  pinMode(a_1, OUTPUT);
  pinMode(b_1, OUTPUT);
  pinMode(c_1, OUTPUT);
  pinMode(d_1, OUTPUT);
  pinMode(e_1, OUTPUT);
  pinMode(f_1, OUTPUT);
  pinMode(g_1, OUTPUT);
  pinMode(dp_1, OUTPUT);
  //digit 2
  pinMode(a_2, OUTPUT);
  pinMode(b_2, OUTPUT);
  pinMode(c_2, OUTPUT);
  pinMode(d_2, OUTPUT);
  pinMode(e_2, OUTPUT);
  pinMode(f_2, OUTPUT);
  pinMode(g_2, OUTPUT);
  pinMode(dp_2, OUTPUT);

  //digit 3
  pinMode(a_3, OUTPUT);
  pinMode(b_3, OUTPUT);
  pinMode(c_3, OUTPUT);
  pinMode(d_3, OUTPUT);
  pinMode(e_3, OUTPUT);
  pinMode(f_3, OUTPUT);
  pinMode(g_3, OUTPUT);
  pinMode(dp_3, OUTPUT);

  //digit 2
  pinMode(a_4, OUTPUT);
  pinMode(b_4, OUTPUT);
  pinMode(c_4, OUTPUT);
  pinMode(d_4, OUTPUT);
  pinMode(e_4, OUTPUT);
  pinMode(f_4, OUTPUT);
  pinMode(g_4, OUTPUT);
  pinMode(dp_4, OUTPUT);

  
}

void loop() {
  sensorValue = analogRead(sensorPin);
  voltageOut = (sensorValue * 5000) / 1024;

  // calculate temperature for LM35 (LM35DZ)
  // temperatureC = voltageOut / 10;
  // temperatureF = (temperatureC * 1.8) + 32;

  // calculate temperature for LM335
  temperatureK = voltageOut / 10;
  temperatureC = temperatureK - 273;
  temperatureF = (temperatureC * 1.8) + 32;

  Serial.print("Temperature(ºC): ");
  Serial.print(temperatureC);
  Serial.print("  Temperature(ºF): ");
  Serial.print(temperatureF);
  Serial.print("  Voltage(mV): ");
  Serial.println(voltageOut);
  delay(1000);

  int tensDigit = int(temperatureC / 10);              // Extract tens digit
  int onesDigit = int(temperatureC - tensDigit * 10);  // Extract ones digit

  // Function to display a single digit on the 7-segment display (replace with your actual display function)
  // void displayDigit(int digit) {
  //   // Logic to light up the appropriate segments based on the digit (implement according to your display driver and connections)
  // }
  if(tensDigit == 0){
    number_0_Digit_1();
  }else if(tensDigit == 1){
    number_1_Digit_1();
  }else if(tensDigit == 2){
    number_2_Digit_1();
  }else if(tensDigit == 3){
    number_3_Digit_1();
  }else if(tensDigit == 4){
    number_4_Digit_1();
  }else if(tensDigit == 5){
    number_5_Digit_1();
  }else if(tensDigit == 6){
    number_6_Digit_1();
  }else if(tensDigit == 7){
    number_7_Digit_1();
  }else if(tensDigit == 8){
    number_8_Digit_1();
  }else if(tensDigit == 9){
    number_9_Digit_1();
  }

  if(onesDigit == 0){
    number_0_Digit_2();
  }else if(onesDigit == 1){
    number_1_Digit_2();
  }else if(onesDigit == 2){
    number_2_Digit_2();
  }else if(onesDigit == 3){
    number_3_Digit_2();
  }else if(onesDigit == 4){
    number_4_Digit_2();
  }else if(onesDigit == 5){
    number_5_Digit_2();
  }else if(onesDigit == 6){
    number_6_Digit_2();
  }else if(onesDigit == 7){
    number_7_Digit_2();
  }else if(onesDigit == 8){
    number_8_Digit_2();
  }else if(onesDigit == 9){
    number_9_Digit_2();
  }
  
  Serial.print(tensDigit);
  Serial.print("    ");
  Serial.println(onesDigit);
  // // Display the separated digits
  // displayDigit(tensDigit);
  // displayDigit(onesDigit);
}
//Digit 1
void number_1_Digit_1() {
  digitalWrite(a_1, LOW);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, LOW);
  digitalWrite(dp_1, LOW);
}
void number_2_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, LOW);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_3_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_4_Digit_1() {
  digitalWrite(a_1, LOW);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_5_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, LOW);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_6_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, LOW);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_7_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, LOW);
  digitalWrite(dp_1, LOW);
}
void number_8_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_9_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);
}
void number_0_Digit_1() {
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, LOW);
  digitalWrite(dp_1, LOW);
}
//Number 1 Digit 2
void number_1_Digit_2() {
  digitalWrite(a_2, LOW);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);
}
void number_2_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, LOW);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_3_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_4_Digit_2() {
  digitalWrite(a_2, LOW);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_5_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, LOW);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_6_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, LOW);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_7_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);
}
void number_8_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_9_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);
}
void number_0_Digit_2() {
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);
}
//digit 3 
void number_1_Digit_3() {
  digitalWrite(a_3, LOW);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, LOW);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, LOW);
  digitalWrite(g_3, LOW);
  digitalWrite(dp_3, LOW);
}
void number_2_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, LOW);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, HIGH);
  digitalWrite(f_3, LOW);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_3_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, LOW);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_4_Digit_3() {
  digitalWrite(a_3, LOW);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, LOW);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_5_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, LOW);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_6_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, LOW);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, HIGH);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_7_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, LOW);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, LOW);
  digitalWrite(g_3, LOW);
  digitalWrite(dp_3, LOW);
}
void number_8_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, HIGH);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_9_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, LOW);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, HIGH);
  digitalWrite(dp_3, LOW);
}
void number_0_Digit_3() {
  digitalWrite(a_3, HIGH);
  digitalWrite(b_3, HIGH);
  digitalWrite(c_3, HIGH);
  digitalWrite(d_3, HIGH);
  digitalWrite(e_3, HIGH);
  digitalWrite(f_3, HIGH);
  digitalWrite(g_3, LOW);
  digitalWrite(dp_3, LOW);
}
//digit 4
void number_1_Digit_4() {
  digitalWrite(a_4, LOW);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, LOW);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, LOW);
  digitalWrite(g_4, LOW);
  digitalWrite(dp_4, LOW);
}
void number_2_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, LOW);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, HIGH);
  digitalWrite(f_4, LOW);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_3_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, LOW);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_4_Digit_4() {
  digitalWrite(a_4, LOW);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, LOW);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_5_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, LOW);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_6_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, LOW);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, HIGH);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_7_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, LOW);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, LOW);
  digitalWrite(g_4, LOW);
  digitalWrite(dp_4, LOW);
}
void number_8_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, HIGH);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_9_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, LOW);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, HIGH);
  digitalWrite(dp_4, LOW);
}
void number_0_Digit_4() {
  digitalWrite(a_4, HIGH);
  digitalWrite(b_4, HIGH);
  digitalWrite(c_4, HIGH);
  digitalWrite(d_4, HIGH);
  digitalWrite(e_4, HIGH);
  digitalWrite(f_4, HIGH);
  digitalWrite(g_4, LOW);
  digitalWrite(dp_4, LOW);
}