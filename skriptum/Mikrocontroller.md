# Mikrocontroller

Ein **Mikrocontroller** ist ein kleines, integriertes Computersystem, das häufig in eingebetteten Systemen verwendet wird. Er kombiniert einen Prozessor, Speicher und verschiedene Peripherie-Komponenten auf einem einzigen Chip und ist speziell für die Steuerung und Regelung elektronischer Systeme ausgelegt. Mikrocontroller sind in einer Vielzahl von Geräten zu finden, von einfachen Haushaltsgeräten bis hin zu komplexen industriellen Steuerungssystemen.

## Funktionsweise eines Mikrocontrollers

Der Mikrocontroller arbeitet nach einem einfachen Schema:
1. **Eingabe**: Über digitale oder analoge Pins empfängt er Signale von Sensoren, Tastern oder anderen Bauteilen.
2. **Verarbeitung**: Im Mikrocontroller wird der empfangene Input durch den Prozessor (CPU) verarbeitet. Der Code, der im internen Speicher gespeichert ist, bestimmt, wie der Mikrocontroller auf die Eingabe reagieren soll.
3. **Ausgabe**: Die verarbeiteten Daten werden in Form von Steuersignalen an die Ausgänge weitergeleitet, um Aktoren, Motoren, LEDs oder andere Komponenten zu steuern.

## Arduino: Mikrocontroller-Board

Das **Arduino-Board** ist eine weit verbreitete Plattform, die einen Mikrocontroller mit einem leicht zugänglichen Entwicklungsumfeld kombiniert. Es wird häufig in Bildungs- und Hobbyprojekten eingesetzt. Ein Arduino besteht aus dem Mikrocontroller selbst, einem Spannungsregler, einem Quarz, Anschlüssen und einer USB-Schnittstelle.

### Anschlüsse des Arduino Uno

Das **Arduino Uno** ist eines der bekanntesten Arduino-Boards und basiert auf dem ATmega328P-Mikrocontroller. Hier sind die wichtigsten Anschlüsse:

1. **Stromanschlüsse**:
   - **Vin**: Versorgungsspannung (meist 7–12 V), die direkt an den Mikrocontroller weitergeleitet wird.
   - **5V und 3.3V**: Diese Anschlüsse liefern 5V und 3,3V Spannung, um externe Komponenten zu versorgen.
   - **GND**: Die Masse (Ground), die mit externen Komponenten verbunden werden muss, um eine gemeinsame Bezugsspannung zu gewährleisten.

2. **Digitale Pins (D0–D13)**:
   - Diese Pins können als digitale Eingänge oder Ausgänge genutzt werden.
   - Einige Pins haben spezielle Funktionen, z. B. `D0` und `D1` (Rx, Tx) zur seriellen Kommunikation.
   - **PWM-Pins**: Die Pins `D3`, `D5`, `D6`, `D9`, `D10` und `D11` unterstützen **PWM-Signale** (Pulsweitenmodulation) zur Simulation analoger Ausgänge.

3. **Analoge Pins (A0–A5)**:
   - Die analogen Eingänge können Spannungen im Bereich von 0 bis 5 V messen und in digitale Werte (0–1023) umwandeln.
   - Diese Pins sind nützlich, um analoge Sensoren wie Temperaturfühler oder Potentiometer anzuschließen.

4. **Reset-Pin**: Wird genutzt, um den Mikrocontroller neu zu starten.

5. **I2C (A4 – SDA, A5 – SCL)**: Diese Pins dienen der Kommunikation mit I2C-fähigen Geräten.

6. **SPI-Schnittstelle (Pins 10–13)**: Diese wird für die Kommunikation mit Geräten verwendet, die das SPI-Protokoll unterstützen.

## Arduino C++ Framework (PlatformIO)

Das **Arduino C++ Framework** ist eine leicht zu verwendende Entwicklungsumgebung für Arduino-Boards und wird häufig über **PlatformIO** entwickelt. PlatformIO bietet zahlreiche Werkzeuge und Bibliotheken und ist eine erweiterte, plattformübergreifende Umgebung für eingebettete Systeme.

### Grundlagen des Arduino C++ Frameworks

1. **Setup- und Loop-Funktionen**:
   - `Setup()`: Diese Funktion wird einmalig beim Start ausgeführt und dient zur Initialisierung der Pins und Kommunikation.
   - `Loop()`: Hier befindet sich die Hauptschleife des Programms. Der Code in dieser Funktion wird fortlaufend ausgeführt, solange der Mikrocontroller läuft.

2. **Digitaler I/O**:
   - `pinMode(pin, mode)`: Setzt einen Pin als Eingang (`INPUT`) oder Ausgang (`OUTPUT`).
   - `digitalWrite(pin, value)`: Setzt den digitalen Pin auf `HIGH` (5V) oder `LOW` (0V).
   - `digitalRead(pin)`: Liest den Zustand eines digitalen Eingangs (HIGH oder LOW).

3. **Analoger I/O**:
   - `analogRead(pin)`: Liest den Wert eines analogen Eingangs (Wertebereich 0–1023).
   - `analogWrite(pin, value)`: Gibt eine PWM-Signalstärke aus (Wertebereich 0–255).

4. **Serielle Kommunikation**:
   - `Serial.begin(baudrate)`: Startet die serielle Kommunikation.
   - `Serial.print() und Serial.println()`: Wird verwendet, um Daten über den USB-Port auszugeben, z. B. zur Fehlersuche.

## PWM (Pulsweitenmodulation)

**PWM (Pulsweitenmodulation)** ist eine Methode, mit der ein digitales Signal so manipuliert wird, dass es wie ein analoges Signal wirkt. Dabei wird ein digitaler Ausgang schnell zwischen `HIGH` und `LOW` geschaltet. Der Anteil der Zeit, die der Ausgang auf `HIGH` steht, wird als **Duty Cycle** bezeichnet und in Prozent ausgedrückt. Ein Duty Cycle von 100 % bedeutet, dass der Ausgang dauerhaft auf `HIGH` steht, ein Duty Cycle von 0 % bedeutet, dass der Ausgang auf `LOW` bleibt.

- **Beispiel**: Mit einem Duty Cycle von 50 % (50 % `HIGH`, 50 % `LOW`) entspricht das Ausgangssignal im Durchschnitt einer Spannung von 2,5V (bei einem 5V Ausgang).

PWM wird häufig zur Steuerung von LEDs (Helligkeit) und Motoren (Drehzahl) verwendet.

## Unterschied zwischen analogen und digitalen Signalen

- **Digitale Signale** bestehen nur aus zwei Zuständen: `HIGH` (5V) und `LOW` (0V). Sie sind klar definiert und werden in digitalen Schaltungen verwendet.
- **Analoge Signale** können kontinuierlich variierende Spannungen annehmen und repräsentieren damit eine Vielzahl von Werten. Solche Signale sind typisch für Sensoren, die Umgebungsvariablen messen (z. B. Temperatur, Licht).