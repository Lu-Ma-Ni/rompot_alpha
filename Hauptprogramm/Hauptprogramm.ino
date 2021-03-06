//Methodendeklarierung & Variablendeklarierung

void setup();
void loop();
struct Farbe Farbabfrage(byte sensor);    //http://stackoverflow.com/questions/2620146/how-do-i-return-multiple-values-from-a-function-in-c // http://www2.informatik.uni-halle.de/lehre/c/c_struct.html
void i2ctoggle(byte sensor);

struct Farbe{   //Struktur zur Übergabe mehrerer Farbwerte aus einer Funktion
uint16_t rot, gruen, blau, clearcol;  
};


uint16_t r,g,b,c; //r/g/b Werte, ominöser "Klarlichtwert" des Sensors - wofür?

//Bibliotheken

//#include <Wire.h>;    //I2C Bibliothek  //nicht benötigt bei Benutzung von TC347 Bibliothek
#include <Adafruit_TC34725.h> //Farbsensorbibliothek    //https://github.com/adafruit/Adafruit_TCS34725

void loop(){}
void setup(){}

//Sensorinitialisierung

Adafruit_TCS34725 fs = Adafruit_TCS34725(TCS_INTEGRATIONTIME_50MS, TCS34725_GAIN_1X);

struct Farbe Farbabfrage(byte sensor) {
  i2ctoggle(sensor);
  struct Farbe Ausgabe;
  fs.getRawData(&rot, &gruen, &blau, &clearcol);
  Ausgabe.rot = rot;
  Ausgabe.gruen = gruen;
  Ausgabe.blau = blau;
  Ausgabe.clearcol = clearcol;
  return Ausgabe;
  
}
