# Proiect-POO-2

Laborant: Adrian Claudiu Balica

Elev: Lem-Rău Dumitru Alexandru


Proiectul meu la POO are tema gestiunii unui lant de reprezentate ale companiei Telekom.
Clasele proiectului sunt: Telekom    -> locatie, nr angajati, id
                          Angajat    -> nume, prenume, cnp, nr. telefon, adresa, varsta, salariu, id
                          Client     -> nume, prenume, cnp, nr. telefon, adresa, varsta, id
                          Abonament  -> tip, nr.minute, pret, id
                          
Variabilele clasei Telekom vor sa reprezinte: locatia unde se afla reprezentantul
                                              numarul de angajati
                                              id-ul reprezentantului


Variabilele clasei Angajat vor sa reprezinte: numele angajatului
                                              prenumele angajatului
                                              cnp-ul angajatului
                                              nr. de telefon al angajatului
                                              adresa angajatului
                                              varsta angajatului
                                              salariul angajatului
                                              id-ul angajatului


Variabilele clasei Client vor sa reprezinte: numele clientului
                                             prenumele clientului
                                             cnp-ul clientului
                                             nr. de telefon al clientului
                                             varsta angajatului
                                             adresa clientului
                                             id-ul clientului



Variabilele clasei Abonament vor sa reprezinte: tipul de abonament                    Tipurile de abonament sunt C,B,A,S
                                                nr. de minute disponibile/ramase      In functie de tipul abonamentului clientul va avea un numar diferit de minute
                                                pretul abonamentului                  In functie de pretul abonamentului i se va schimba si pretul
                                                id-ul abonamentului


Abonamentul: C- este cel Normal de 5 lei si 100 de minute
             B- este cel Fancy de 10 lei si 200 de minute
             A- este cel Premium de 30 de lei si 500 de minute
             S- este cel pentru angajati, el costa 5 lei si are minute nelimitate


Functiile clasei: Telekom ii permit sa schimbe locatia (in cazul in care a fost scrisa gresit), nr de angajati si id-ul
                  Angajat ii permit sa schimbe numele, prenumele, cnp-ul, nr. de telefon,(acestea in cazul in care au fost introduse gresit) adresa, salariul si id-ul
                  Client ii permit sa schimbe numele, prenumele, cnp-ul, nr. de telefon,(acestea in cazul in care au fost introduse gresit) adresa si id-ul
                  Abonament ii permit sa schimbe tipul, nr. de minute ramase, pretul si id-ul

De asemenea orice variabila apare intr-o clasa poate fi returnata cu functia get_[nume-variabila]().
![image](https://user-images.githubusercontent.com/93475691/164320550-7567b312-a4f0-46f2-8423-1234e3816311.png)
![image](https://user-images.githubusercontent.com/93475691/164320593-5dff81bc-fe91-42b3-aaac-ad29a59f0f74.png)

Functiile au operatori supraincarcati.
De esxemplu ii poti mari salariul unui angajat in felul urmator:
![image](https://user-images.githubusercontent.com/93475691/164321523-030286a6-4335-4e7d-8318-3a184a8dc704.png)
![image](https://user-images.githubusercontent.com/93475691/164321580-c308dee5-1e42-4a10-b3ba-7c27b7d1bbdf.png)







