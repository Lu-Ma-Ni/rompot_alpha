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
  
  0e.nextEingang = &5e;
  5e.nextEingang = &10e;
  10e.nextEingang = &15e;
  15e.nextEingang = &20e;
  20e.nextEingang = &25e;
  25e.nextEingang = &30e;
  30e.nextEingang = &35e;
  35e.nextEingang = &40e;
  40e.nextEingang = &45e;
  45e.nextEingang = &50e;
  50e.nextEingang = &55e;
  55e.nextEingang = &60e;
  60e.nextEingang = &65e;
  65e.nextEingang = &70e;
  70e.nextEingang = &75e;
  75e.nextEingang = &80e;
  80e.nextEingang = &85e;
  85e.nextEingang = &90e;
  90e.nextEingang = &95e;
  95e.nextEingang = &100e;
  100e.nextEingang = &105e;
  105e.nextEingang = &110e;
  110e.nextEingang = &115e;
  115e.nextEingang = &120e;
  120e.nextEingang = &125e;
  125e.nextEingang = &130e;
  130e.nextEingang = &135e;
  135e.nextEingang = &140e;
  140e.nextEingang = &145e;
  145e.nextEingang = &150e;
  150e.nextEingang = &155e;
  155e.nextEingang = &160e;
  160e.nextEingang = &165e;
  165e.nextEingang = &170e;
  170e.nextEingang = &175e;
  175e.nextEingang = &180e;
  180e.nextEingang = &180e;
  
  
  struct eingang *current;
  current = &0e
  for(int i = 0; i<=180; i=i+5) {
    *current.abstand = sensorread();    //Funktion wird benötigt, damit automatische nächste Varible gewählt oder neu erstellt wird - Keine Ahnung wie!
    
  }
  
  }

