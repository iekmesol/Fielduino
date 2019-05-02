#include <dht.h>

dht DHT;

#define DHT11_PIN 7 //Καθορισμός ακίδας S


int val = 0; //value for storing moisture value 
int soilPin = A0;//Δήλωση μεταβλητής για την ακίδα SIG
int soilPower = 8;//Μεταβλητή για τη διαχείριση της τάσης του αισθητήρα



void setup(){
  Serial.begin(9600);
  pinMode(soilPower, OUTPUT);//Ορίζουμε την ψηφιακή ακίδα 8 σαν έξοδο
  digitalWrite(soilPower, LOW);//Ορίζουμε σε LOW έτσι ώστε καμια τάση να μην διέρχεται του αισθητήρα
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature); //Επιστρεφόμενη τιμή θερμοκρασίας 
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity); //Επιστρεφόμενη τιμή υγρασίας αέρα


Serial.print("Soil Moisture = ");    
Serial.println(readSoil()); ////Επιστρεφόμενη τιμή υγρασίας εδάφους


  delay(1000); // Διάβασμα τιμών ανά ένα δευτερόλεπτο 
}



int readSoil()
{

    digitalWrite(soilPower, HIGH);//D8 "On"
    delay(10);//wait 10 milliseconds 
    val = analogRead(soilPin);//Διαβάσε την SIG τιμή απο τον αισθητήρα
    digitalWrite(soilPower, LOW);//D8 "Off"
    return val;//επεστρεψε την τρέχουσα τιμή του ασιθητήρα
}
