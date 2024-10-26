
# Kondensator

Ein **Kondensator** ist ein elektronisches Bauteil, das elektrische Ladung speichern und bei Bedarf wieder abgeben kann. Kondensatoren sind ein zentrales Bauteil in vielen elektronischen Schaltungen, da sie Energie speichern, Spannung glätten, Hochfrequenzfiltern oder Impulse puffern können. Die Fähigkeit eines Kondensators, Ladung zu speichern, wird als **Kapazität** bezeichnet und in **Farad (F)** gemessen.

## Funktionsweise

Ein Kondensator besteht aus zwei leitenden Platten, die durch ein nichtleitendes Material, das sogenannte **Dielektrikum**, voneinander getrennt sind. Wenn eine Spannung an den Kondensator angelegt wird, wandern Elektronen auf eine Platte, wodurch diese negativ geladen wird, während die andere Platte positiv geladen ist. Die entstehende Ladung bleibt gespeichert, bis der Kondensator entladen wird.

Die Beziehung zwischen der gespeicherten Ladung $Q$, der Kapazität $C$, und der angelegten Spannung $U$ lautet: $ Q = C * U $
Dabei gilt: Je größer die Kapazität und die Spannung, desto mehr Ladung kann gespeichert werden.

## Arten von Kondensatoren

1. **Keramikkondensatoren**: Kleine Kapazitäten, oft in Hochfrequenzanwendungen.
2. **Elektrolytkondensatoren**: Große Kapazitäten, gepolt, häufig zur Glättung von Gleichspannungen.
3. **Folienkondensatoren**: Gute Spannungsfestigkeit und Stabilität, oft in Filteranwendungen.
4. **Tantalkondensatoren**: Hohe Kapazität bei kompakter Größe, meist gepolt.
5. **Superkondensatoren**: Extrem hohe Kapazitäten, geeignet für Energiespeicheranwendungen.

## Berechnung

Die Berechnung der Kapazität und der Reaktion eines Kondensators in einem Stromkreis hängt stark von der Anordnung ab.

### Berechnung der Gesamtkapazität

1. **Serienschaltung**: Bei einer Reihenschaltung von Kondensatoren ergibt sich die Gesamtkapazität $C_{ges}$ aus dem Kehrwert der Summe der Einzelkapazitäten: $ \frac{1}{C_{ges}} = \frac{1}{C_1} + \frac{1}{C_2} + ... + \frac{1}{C_n} $ Dies führt dazu, dass die Gesamtkapazität immer kleiner ist als die kleinste Einzelkapazität.

2. **Parallelschaltung**: Bei einer Parallelschaltung von Kondensatoren summieren sich die Kapazitäten direkt: $ C_ges = C_1 + C_2 + ... + C_n $ Die Gesamtkapazität ist hier größer als jede Einzelkapazität und wird hauptsächlich verwendet, um die Kapazität zu erhöhen.

### Lade- und Entladevorgänge

Der Lade- und Entladevorgang eines Kondensators in einem Gleichstromkreis ist zeitabhängig und wird von einer **Exponentialfunktion** beschrieben:

- Beim Laden gilt: $ U(t) = U_0 * (1 - e^{\frac{-t}{RC}}) $
- Beim Entladen lautet die Gleichung: $ U(t) = U_0 * e^{\frac{-t}{RC}}) $

wobei:
- `U_0` die anfängliche Spannung ist,
- `R` der Widerstand im Stromkreis,
- `t` die Zeit und
- `RC` die sogenannte **Zeitkonstante** ist, die die Geschwindigkeit der Lade- und Entladevorgänge beschreibt.

Ein Kondensator hat eine Vielzahl von Anwendungen in der Elektronik, etwa zur Energiespeicherung, Frequenztrennung und Impulsfilterung.
