//temperature display Heater
//digit 1
int a_1 = 49;
int b_1 = 47;
int c_1 = 41;
int d_1 = 43;
int e_1 = 45;
int f_1 = 51;
int g_1 = 53;
int dp_1 = 39;

//digit 2
int a_2 = 25;
int b_2 = 23;
int c_2 = 33;
int d_2 = 35;
int e_2 = 37;
int f_2 = 27;
int g_2 = 29;
int dp_2 = 31;


void setup() {

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

}

void loop() {

}
//Number 1 Digit 1
void number_1_Digit_1 (){
  digitalWrite(a_1, LOW);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, LOW);
  digitalWrite(dp_1, LOW);

}
//Number 2 Digit 1
void number_2_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, LOW);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_3_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_4_Digit_1 (){
  digitalWrite(a_1, LOW);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_5_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, LOW);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);


}
void number_6_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, LOW);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_7_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, LOW);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, LOW);
  digitalWrite(g_1, LOW);
  digitalWrite(dp_1, LOW);

}
void number_8_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, HIGH);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_9_Digit_1 (){
  digitalWrite(a_1, HIGH);
  digitalWrite(b_1, HIGH);
  digitalWrite(c_1, HIGH);
  digitalWrite(d_1, HIGH);
  digitalWrite(e_1, LOW);
  digitalWrite(f_1, HIGH);
  digitalWrite(g_1, HIGH);
  digitalWrite(dp_1, LOW);

}
void number_0_Digit_1 (){
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
void number_1_Digit_2 (){
  digitalWrite(a_2, LOW);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);
}
void number_2_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, LOW);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_3_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_4_Digit_2 (){
  digitalWrite(a_2, LOW);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_5_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, LOW);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_6_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, LOW);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_7_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, LOW);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, LOW);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);

}
void number_8_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);

}
void number_9_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, LOW);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, HIGH);
  digitalWrite(dp_2, LOW);


}
void number_0_Digit_2 (){
  digitalWrite(a_2, HIGH);
  digitalWrite(b_2, HIGH);
  digitalWrite(c_2, HIGH);
  digitalWrite(d_2, HIGH);
  digitalWrite(e_2, HIGH);
  digitalWrite(f_2, HIGH);
  digitalWrite(g_2, LOW);
  digitalWrite(dp_2, LOW);


}
