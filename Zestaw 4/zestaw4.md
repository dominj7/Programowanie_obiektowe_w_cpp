# Zestaw 4

## Zadanie 1

Zaimplementuj szablon funkcji sumującej elementy dla podanego zakresu wskaźników. Przygotowując odpowiednie klasy cech sum_traits dla każdego z typów (char, int, float, double) zadbaj o poprawność typu zmiennej total, która w szablonie sum przechowuje wartość kolejnych kroków sumowania.

## Zadanie 2

Rozwiązać za pomocą klas cech również problem inicjalizacji zmiennej total.

## Zadanie 3

Szablony funkcji nie dopuszczają stosowania parametrów domyślnych. Można to ograniczenie obejść za pomocą przeciążenia szablonu definiując szablon o mniejszej ilości argumentów, który zwraca wynik podstawienia domyślnych parametrów do bardziej ogólnego szablonu. Zmienić implementację funkcji sum tak aby podając odpowiednią klasę cech (sum_char) jako pierwszy z argumentów szablonu można było zażądać sumowania znaków char do zmiennej total również typu char. Równocześnie, w przypadku gdy nie jest podana klasa cech, szablon powinien działać tak jak w zad. 2.

## Zadanie 4

Uogólnić funkcję sum, aby działała nie tylko ze wskaźnikami, ale i iteratorami. Widać, że tu użycie klas cech jest już niezbędne, musimy bowiem dowiedzieć się na obiekty jakiego typu wskazuje iterator. Nie można do tego celu użyć typów stowarzyszonych IT::value_type, bo jako iterator może zostać podstawiony zwykły wskaźnik. Dlatego w STL istnieje klasa iterator_traits, definiująca podstawowe typy dla każdego rodzaju iteratora. Korzystając z tej klasy zdefiniuj ogólny szablon funkcji sum.
