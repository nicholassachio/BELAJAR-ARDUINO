int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
 pinMode(pinLED, OUTPUT); //menyiapken LED siap bekerja
 Serial.begin(9600); // Menyiapkan Serial Monitor
 Serial.println("Alat menyala dan siap digunakan !"); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
 digitalWrite(pinLED, HIGH); //Menyalakan LED Board Arduino
 Serial.println("Alat nyala"); 
 delay(500); //1000=1 detik (jeda)
 digitalWrite(pinLED, LOW); //Menatikan LED Board Arduino
 Serial.println("Alat mati"); 
 delay(500); //1000=1 detik (jeda)
 

}
