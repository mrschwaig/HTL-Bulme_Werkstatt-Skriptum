# Dioden

Eine **Diode** ist ein elektronisches Bauelement, das den Stromfluss in nur eine Richtung erlaubt. Sie besteht in der Regel aus einem **p-n-Übergang**, der durch zwei unterschiedlich dotierte Halbleitermaterialien gebildet wird: eine **p-dotierte** und eine **n-dotierte** Schicht. Dioden finden in zahlreichen elektronischen Anwendungen Verwendung, von Gleichrichtern und Spannungsreglern bis hin zu Signalverarbeitung und Lichtemission.

## Grundlegende Funktionsweise einer Diode

Im **p-n-Übergang** der Diode treffen Elektronen aus dem n-Bereich auf Löcher aus dem p-Bereich, wodurch eine **Sperrschicht** entsteht. Diese Sperrschicht wirkt als Barriere für den Stromfluss. Sobald eine bestimmte Spannung (die sogenannte **Durchlassspannung**) an die Diode angelegt wird, überwindet der Strom diese Barriere und fließt durch die Diode.

### Spannungsmodi der Diode

1. **Durchlassrichtung**: Bei einer positiven Spannung am p-Bereich und einer negativen am n-Bereich verringert sich die Sperrschicht, und die Diode leitet Strom. Die Mindestspannung, die zum Leiten benötigt wird, ist die **Durchlassspannung** `U_F`.
   
   Für Siliziumdioden liegt diese Spannung bei etwa `0.7 V`, für Germaniumdioden bei `0.3 V`.

2. **Sperrrichtung**: Bei einer negativen Spannung am p-Bereich und einer positiven am n-Bereich vergrößert sich die Sperrschicht, und die Diode sperrt den Stromfluss. Ab einer bestimmten Spannung, der **Durchbruchspannung** `U_BR`, kann es jedoch zu einem plötzlichen Anstieg des Stroms kommen.

## Charakteristische Diodenkennlinie

Die **Diodenkennlinie** beschreibt die Beziehung zwischen der angelegten Spannung $$ U $$ und dem fließenden Strom $$ I $$ und zeigt zwei Hauptbereiche:
- **Durchlasskennlinie**: Sobald `U` ≤ `U_F`, steigt der Strom exponentiell an.
- **Sperrkennlinie**: Bei negativen Spannungen fließt nur ein minimaler Sperrstrom, bis die Durchbruchspannung `U_BR` erreicht wird.

### Strom-Spannungs-Gleichung der Diode

Die Strom-Spannungs-Charakteristik einer idealen Diode wird durch die **Diodengleichung** beschrieben:
$$I = I_S \cdot \left( e^{\frac{U}{n \cdot V_T}} - 1 \right)$$
wobei:
- `I`: der Diodenstrom,
- `I_S`: der **Sättigungsstrom** (typisch sehr klein),
- `U`: die anliegende Spannung,
- `n`: der Idealfaktor (meistens 1 bis 2),
- `V_T`: die **thermische Spannung**: $$ _T = \frac{k \cdot T}{q} = 26 \, mV $$ bei Raumtemperatur (300 K).

## Typen von Dioden und ihre Anwendungen

1. **Standard-Gleichrichterdiode**: Wird in Gleichrichterschaltungen verwendet, um Wechselstrom (AC) in Gleichstrom (DC) umzuwandeln. Häufig sind Siliziumdioden mit einer Durchlassspannung von etwa 0.7 V.

2. **Schottky-Diode**: Eine Diode mit geringerer Durchlassspannung (etwa 0.2–0.3 V), die eine schnelle Schaltgeschwindigkeit bietet. Sie eignet sich ideal für Hochfrequenz- und Gleichrichterschaltungen mit niedrigem Spannungsabfall.

3. **Zener-Diode**: Eine spezielle Diode, die in Sperrrichtung betrieben wird. Sie lässt bei einer genau definierten Durchbruchspannung $$ U_Z $$ Strom fließen und dient häufig zur Spannungsstabilisierung in Schaltungen. Die Zener-Diode wird bei Spannungsreferenzen und Überspannungsschutz eingesetzt.

4. **Leuchtdiode (LED)**: Die LED emittiert Licht, wenn Strom in Durchlassrichtung fließt. Die Farbe des Lichts hängt vom verwendeten Halbleitermaterial ab. LEDs finden breite Anwendung in Displays, Beleuchtung und Signalanzeigen.

5. **Fotodiode**: Diese Diode ist lichtempfindlich und erzeugt einen Strom, wenn sie beleuchtet wird. Sie wird in Lichtmessgeräten, Solarpanels und als Sensor in optischen Schaltungen verwendet.

6. **Avalanche-Diode**: Sie ist für hohe Durchbruchspannungen ausgelegt und wird meist in Hochspannungsanwendungen oder zum Schutz vor Überspannung verwendet.

## Diodenkennlinie und wichtige Formeln

Die **Diodenkennlinie** zeigt den exponentiellen Anstieg des Stroms bei Spannungen oberhalb der Durchlassspannung und den Sperrbereich. Der Sperrstrom ist klein, bis die Diode in den **Durchbruchbereich** gelangt.

### Beispiel: Berechnung des Diodenstroms im Durchlassbereich

Angenommen, wir haben eine Siliziumdiode mit einem Sättigungsstrom $$ I_S = 1 \, nA $$ und einer Spannung von $$ U = 0.7 \, V $$ bei Raumtemperatur (26 mV thermische Spannung).

Der Diodenstrom ist dann:
$$ I = 1 \, nA \cdot \left( e^{\frac{0.7}{0.026}} - 1 \right) = 1 \, nA \cdot (10^9 - 1) = 1 \, A $$

### Beispiel: Berechnung der Zener-Diode als Spannungsstabilisator

Eine Zener-Diode mit einer Zenerspannung $$ U_Z = 5.1 \, V $$ und einem Lastwiderstand $$ R_L = 1 \, k\Omega $$ wird an eine Spannungsquelle von $$ 10 \, V $$ angeschlossen. Der Strom $$ I_Z $$ durch die Zener-Diode beträgt:
$$I_Z = \frac{U_{in} - U_Z}{R_L} = \frac{10 - 5.1}{1000} = 4.9 \, mA$$