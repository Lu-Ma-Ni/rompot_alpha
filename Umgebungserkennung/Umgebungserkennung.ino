void setup();
void loop();
int sensorread();
String SerialInput();
struct objekt umgebungserkennung();
struct eingang{
  int winkel;
  int xkoor;
  int ykoor;
  int abstand;
  void *nextEingang
};

struct vektor{
  int xstrecke;
  int ystrecke;
  int winkel;
};

struct objekt{
  int xent;
  int yent;
  int entfernung;
  int winkel;
  byte art;
  void *nextObjekt = 0; //Pointer auf nächstes Objekt
};

int startwinkel;


void setup() {

}

void loop() {
  struct objekt objekt = umgebungserkennung();
  Serial.println(objekt.xent);
  delay(500);
}

struct objekt umgebungserkennung()  {
  //structinitialisierung;
  struct eingang 0e,5e,10e,15e,20e,25e,30e,35e,40e,45e,50e,55e,60e,65e,70e,75e,80e,85e,90e,95e,100e,105e,110e,115e,120e,125e,130e,135e,140e,145e,150e,155e,160e,165e,170e,175e,180e;
  struct eingang *current;
  current = &0e
  for(int i = 0; i<=180; i=i+5) {
    *current.abstand = sensorread();
    
  }
  
  }

