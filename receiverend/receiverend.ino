const char MorseTree[] = {'\0','E', 'T', 'I', 'A', 'N', 'M', 'S',
                          'U', 'R', 'W', 'D', 'K', 'G', 'O', 'H',
                          'V', 'F', '\0', 'L', '\0', 'P', 'J', 'B',
                          'X', 'C', 'Y', 'Z', 'Q', '\0','\0','5',
                          '4', '\0','3', '\0','\0','\0','2', '\0',
                          '\0','\0', '\0','\0','\0','\0','1', '6',
                          '\0','\0', '\0','\0','\0','\0', '\0','7',
                          '\0','\0','\0','8', '\0','9', '0'};
int val;
int var=0;
int pin=5;
void setup() {
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
}

void loop() {
  val=analogRead(pin);
  if(val>900)
  {
    for(int i=0;i<10;i++)
    {
      val=analogRead(pin);
      if(val>800 && val<=960)
      {
         var=(2*var)+2;
         delay(1000);
        // Serial.println("-");
      }
      else if (val>960)
      {
        var=(2*var)+1;
        delay(1000);
        //Serial.println(".");
      }
    }
    Serial.print(MorseTree[var]);
    delay(500);
    var=0;
  }

}
