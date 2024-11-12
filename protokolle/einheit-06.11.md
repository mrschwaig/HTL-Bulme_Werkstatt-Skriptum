# Werkstättenprotokoll `06.11`

| Titel | Daten                                        |
|---------|----------------------------------------------|
| Einheit | `06.11`                                      |
| Inhaltsübersicht | Ampellicht nach öster. Ampelsteuerung schalten |
| Stunden (Einheiten) | `7`                                          |
| Fachlehrer | `Martin GIMPL`                               |
| Werkstätte | `EMC`                                        |

# Inhalt

1. **Ampelschaltung**
   - Ziel: Eine funktionierende Ampelschaltung nach österreichischen Anforderungen
   - Umsetzung
     1. Schaltplan erstellen mit easyEDA (Protokoll 23.10 [siehe hier](einheit-23.10.md))
     2. Schaltung berechnen
     3. Prototypen mit der Hilfe des Steckbretts schaltplangetreu aufbauen
     4. Mikrocontroller (ESP32) programmieren

# Protokoll

## Ampelschaltung

Ziel der Ampelschaltung war es, eine Ampelschaltung umzusetzen, welche nach den österreichischen Anforderungen schaltet.

### Schaltplan

Dies ist bereits im Protokoll vom 23.10 zufinden. Es kann [hier](einheit-23.10.md) geöffnet werden.

### Berechnung

Da die Lampe bereits einen Innenwiderstand verbaut hat, ist dieser Punkt überfällig.

### Programmierung

Wir nutzten wir `switch case`. Diese Funktion hat folgenden Syntax:

```c++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

Die `expression` ist mit `enum` (~ Enumeration) definiert:

````c++
enum Level {
  LOW,
  MEDIUM,
  HIGH
};
````

{% alert type="note", style="callout" %}
`enum` ist eine Gruppe von konstanten Variablen. Dabei steht wie im oben Beispiel beschrieben `LOW` für `0`, `MEDIUM` für `1` und `HIGH` für `2`.
{% endalert %}

# Code

Der gesamte Code befindet sich auf Github und kann unter [diesem Link](https://github.com/mrschwaig/HTL-Bulme_Werkstatt_GIM) geöffnet werden.