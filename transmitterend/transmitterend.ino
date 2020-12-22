String stringToMorseCode;
int siz;
int pin = 5;   
int dotLen = 500;     
int dashLen = dotLen;   
int elemPause = dotLen;    
void MorseDot()
{
  analogWrite(pin,255);     
  delay(dotLen);             
}
void MorseDash()
{
  analogWrite(pin,20);     
  delay(dashLen);               
}
void LightsOff(int delayTime)
{
  analogWrite(pin, 0);    
  delay(delayTime);             
}
void GetChar(char tmpChar)
{
  switch (tmpChar) 
  {
    case 'a': 
    {for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}}break;
    
    case 'b':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'c':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'd':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'e':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'f':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'g':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'h':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'i':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'j':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'k':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'l':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'm':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'n':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'o':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'p':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'q':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'r':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 's':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 't':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    LightsOff(elemPause); break;
    }}break;
    
    case 'u':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'v':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'w':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    case 7:
    case 8:
    case 9:
    break;
    }}break;
    
    case 'x':
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'y':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 'z':
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    case 9:
    break;
    }}break;
    
    case 1:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDash(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;
    
    case 2:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDash(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;
    
    case 3:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDash(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;
    
    case 4:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDash(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 5:
    for(int j=0;j<10;j++){
    switch(j){
    case 0:
    MorseDot(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDot(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 6:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDot(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDot(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 7:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDot(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDot(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 8:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDot(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDot(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 9:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDot(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;;
    
    case 0:
    for(int j=0;j<10;j++){ 
    switch(j){
    case 0:
    MorseDash(); break;
    case 1: 
    LightsOff(elemPause); break;
    case 2:
    MorseDash(); break;
    case 3:
    LightsOff(elemPause); break;
    case 4:
    MorseDash(); break;
    case 5:
    LightsOff(elemPause); break;
    case 6:
    MorseDash(); break;
    case 7:
    LightsOff(elemPause); break;
    case 8:
    MorseDash(); break;
    case 9:
    LightsOff(elemPause); break;
    }}break;
    
    default: 
    break;    
  }
  
} 
void setup() 
{ 
  Serial.begin(9600);
  pinMode(pin,OUTPUT); 
}
void loop()
{ 
  analogWrite(pin,0);
  while(Serial.available())
  {
    stringToMorseCode=Serial.readString();
    siz=stringToMorseCode.length();
    for (int i = 0; i < siz - 1; i++)
    {
      char tmpChar = stringToMorseCode[i];
      GetChar(tmpChar);
      delay(500);
    }     
  }
}
