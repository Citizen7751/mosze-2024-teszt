#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];            // itt a helyes az N_ELEMENTS lenne, nem talája az 'NELEMENTS'-et
    std::cout << '1-100 ertekek duplazasa'  // hiányzik itt egy ';', és idézőjelekkel kell a kiírt stringet megadni, nem aposztrófokkal, azzal csak egy karakert jelölünk
                                            // (illetve illene ide egy kozmetikai sortörés is)
    for (int i = 0;)                        // itt nincs felső határ, sem inkrementálás megadva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)                 // itt sincs kifejezésbe téve, hogy mi történne az i-vel, itt csak annyi van, hogy: 'i != NULL'
    {
        std::cout << "Ertek:"               // nem írja ki a b[i] értékekeit és nincs a végén ';'
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                              // itt az átlagnak float-nak, vagy double-nak kéne lennie a tizedes jegyek miatt
    for (int i = 0; i < N_ELEMENTS, i++)    //az N_ELEMENTS után a ',' helyett egy ';' kell
    {
        atlag += b[i]                       // itt sincs ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
