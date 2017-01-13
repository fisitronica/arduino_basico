/* Esta versión de Blink se usa para controlar el LED del circuito "Write() pin 5 version 2".
 * En este circuito el pin 5 actúa como sumidero, por lo que al ponerse en nivel LOW circula
 * corriente por el LED y éste se enciende.
 */
// La función setup se ejecuta una vez al alimentarse la placa o pulsarse el botón reset.
void setup() {
  // Inicializamos el pin 5 como una salida digital.
  pinMode(5, OUTPUT);
}

// La función loop se repite de forma continua una y otra vez hasta que deja de alimentarse la placa o se pulsa el botón reset.
void loop() {
  digitalWrite(5, LOW);   // Encendemos el LED poniendo en pin en el nivel de voltaje LOW (0 V).
  delay(1000);            // Esperamos 1000 ms.
  digitalWrite(5, HIGH);  // Apagamos el LED poniendo en pin en el nivel de voltaje HIGH (5 V).
  delay(1000);            // Esperamos 1000 ms.
}
