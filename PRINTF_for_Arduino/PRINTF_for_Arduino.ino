
char buff[128];
#define my_printf(pFmt, ...) { sprintf(buff, pFmt, __VA_ARGS__ ); Serial.print(buff);}

void setup() {
  Serial.begin( 9600 );
}

void loop() {
  my_printf("Hello %d www %s \r\n", 15, "string");
  delay(1000);
}
