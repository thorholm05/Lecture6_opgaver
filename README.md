# Opgaver til IMPR Lektion 6

## Gruppeopgaver
Disse opgaver laves sammen i gruppen. Der er rigeligt med opgaver.
Arbejd grundigt med de opgaver, I kan nå, i den skemalagte tid.

### [Opgave A](src/opgave-a.c): Timer, minutter og sekunder - igen, igen
Dette er Kurt Nørmark's [opgave 6.2](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-2.html).
Du kan skrive dit program i filen [`opgave-a.c`](src/opgave-a.c).
> Vi har på et [tidligt tidspunkt](https://homes.cs.aau.dk/~normark/impr-c/intro-circle-example-slide-exercise-1.html) i kurset skrevet et program, 
> som omregner et antal sekunder til timer, minutter og sekunder efter de sædvanlige principper.
> 
> Skriv nu en funktion, `hours_minutes_seconds`, som tager antal af sekunder som en input parameter, 
> og som returnerer de tre outputs (timer, minutter og sekunder) som output parametre (pointere, call-by-reference).

---
### [Opgave B](src/opgave-b.c): En valutaomregner
Dette svarer til Kurt Nørmark's [opgave 6.6](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ekstr-opg-slide-exercise-2.html). 
Du kan skrive dit program i filen [`opgave-b.c`](src/opgave-b.c).
> Skriv et C program som konverterer valuta i dollars til euro, kroner, rupier og yen. 
> I kan antage en én dollar er 0.88 euros, 6.58 kroner, 96.03 rupier og 158.93 yen.
> 
> I denne opgave skal der indgå en funktion med én input parameter (dollar-beløbet), 
> og fire output parametre (svarende til de fire andre valutaer).
> 
> Brug funktionen til at udskrive en omregningstabel til omregning af 1, 2, 3, ... 100 dollars til de fire andre valutaer.

---
### [Opgave C](src/opgave-c.c): Seddeludlevering i pengeautomat
Dette er Kurt Nørmark's [opgave 6.3](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-3.html).
Du kan skrive dit program i filen [`opgave-c.c`](src/opgave-c.c).
> Dette program handler om seddeludlevering fra en amerikansk pengeautomat, hvor der kun anvendes 100, 50, 20 og 10 dollar sedler.
> 
> Målet med programmet er at arbejde med både input og outputparametre af en funktion.
> 
> Programmet skal som input acceptere et dollar beløb, der er dividerbart med 10. 
> Programmet skal beregne antallet af udleverede 100, 50, 20 og 10 dollar sedler svarende til beløbet. 
> Der skal udleveres så få sedler som muligt.
> 
> Problemet skal løses med en funktion der tager både input og output parametre. 
> Beløbet, der skal veksles, skal være en input parameter. 
> Antallet af udleverede 100, 50, 20 og 10 dollar sedler skal være output parametre.


---
### [Opgave D](src/opgave-d.c): En funktion der kalder en anden funktion flere gange
Dette er Kurt Nørmark's [opgave 6.4](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ptr-fn-slide-exercise-1.html).
Du kan skrive dit program i filen [`opgave-d.c`](src/opgave-d.c).
> Skriv en funktion `multi_apply` med tre parametre:
> 1. En funktion `f` fra `double` til `double`. `f` er en pointer til en funktion.
> 2. Et heltal `n` der angiver hvor mange gange `f` skal kaldes.
> 3. En `double` `s`, som angiver den værdi som `f` bliver kaldt på første gang (i det 'inderste' kald).
> 
> `multi_apply(f, n, s)` skal beregne og returnere `f(f( ... f(s)))`, hvor `f` kaldes `n` gange.
> 
> Eksempelvis - og mere konkret - skal `multi_apply(f, 4, 16.0)` beregne og returnere `f(f(f(f(16.0))))`.
> 
> Afprøv f.eks. dit program hvor den aktuelle første parameter til `multi_apply` er
> ```c++
> double half(double x) {
>     return x/2;
> }
> ```
> på følgende måde: `multi_apply(half, 4, 16.0)`
> 
> Hvilken værdi forventer du at se fra dette kald?
> 
> ---
> Som en variant af ovenstående kan du overveje at programmere `multi_apply_2` med følgende fire parametre:
> 1. En funktion `f` fra `double` til `double`
> 2. En funktion `g` fra `double` til `double`
> 3. Et heltal `n` der angiver hvor mange gange `f` og `g` skal kaldes
> 4. En `double` `s`, som angiver den værdi som `g` bliver kaldt på første gang (i det 'inderste' kald).
> 
> `multi_apply_2(f, g, n, s)` skal beregne og returnere `f(g(f(g( ... f(g(s))))))`, hvor både `f` og `g` kaldes `n` gange.
> 
> Eksperimenter med forskellige kald af `multi_apply_2`.

---
### Opgave E: Genbesøg gerne opgaverne fra Lektion 5, f.eks.:
 - [Opgave 5-C](src/opgave-5-c.c) (Goldbachs Formodning): Kurt Nørmarks [opgave 5.3](https://homes.cs.aau.dk/~normark/impr-c/functions-par-ex-2-slide-exercise-2.html). 
 - [Opgave 5-D](src/opgave-5-d.c) (Programmering af en kvadratrodsfunktion): Kurt Nørmarks [opgave 5.6](https://homes.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-2.html).
 - [Opgave 5-E](src/opgave-5-e.c) (Skudårsfunktionen): Kurt Nørmarks [opgave 5.5](https://homes.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-1.html).

Programmér gerne varianter af funktionerne der bringer resultaterne tilbage via pointere (og som derfor bliver lavet om til `void` funktioner).

---
### Opgave F: Test af funktioner med output parametre
> Arbejd videre med test af funktioner. 
> Skriv denne gang test-cases til funktioner der bringer resultaterne tilbage via pointere. 
> 
> Automatisér kørsel af dine test ved hjælp af CTest. 
> 
> Se evt. videoen [Intro til CTest](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-ctest&course-id=impr&lecture-number=5&course-year=2026&video-width=640&lang=dk&video-start-time=00:00&auto-play=0) igen. 
> (Se evt. også videoerne [Programbibliotek i CMake](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-cmake-library&course-id=impr&lecture-number=5&course-year=2026&video-width=640&lang=dk&video-start-time=00:00&auto-play=0)
> og [Unit testing frameworks](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-cmake-mtest&course-id=impr&lecture-number=5&course-year=2026&video-width=640&lang=dk&video-start-time=00:00&auto-play=0).)

---
## Hjemmeopgaver:
Dette er opgaver, som I kan arbejde med derhjemme.
Enten som forberedelse inden lektionen, eller som afrunding og repetition efter lektionen.

### [Opgave G](src/opgave-g.c): Celcius til fahrenheit med output parameter
Dette er Kurt Nørmark's [opgave 6.1](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-1.html).
Du kan skrive dit program i filen [opgave-g.c](src/opgave-g.c)
> Vi har [tidligere](https://homes.cs.aau.dk/~normark/impr-c/functions-celcius-fahrenheit-slide-program-2.html) programmeret en simpel funktion, 
> der omregner fra en celcius temperatur til fahrenheit temperatur. 
> Det er helt naturligt at celcius temperaturen er en _call by value_ input parameter. 
> Ligeledes er det naturligt at fahrenheit temperaturen returneres med `return` fra funktionen.
>
> Omskriv nu funktionen således at fahrenheit temperaturen returneres gennem en output parameter - en pointer. 
> Omskriv også `main`, således at kaldet ændres til denne nye parameterprofil.
>
> Hvilken version foretrækker du?

---
### [Opgave H](src/opgave-h.c)
Dette er programmeringsopgave 7 på side 391 fra kapitel 6 af Problem Solving and Program Design in C, eighth edition.
Du kan skrive dit program i filen [opgave-h.c](src/opgave-h.c)

> The square root of a number `N` can be approximated by a repeated calculation using the formula
> 
> $NG = 0.5 (LG + N/LG)$
> 
> where $NG$ stand for the next guess and $LG$ stands for the last guess. 
> Write a function that calculates the square root of a number using this method.
>
> The initial guess will be the starting value of $LG$. 
> The program will compute a value for $NG$ using the formula given. 
> The difference between $NG$ and $LG$ is checked to see whether these two guesses are almost identical. 
> If they are, $NG$ is accepted as the square root; 
> otherwise, the next guess ($NG$) becomes the last guess ($LG$) and the process is repeated 
> (another value is computed for $NG$, the difference is checked, and so on). 
> The loop should be repeated until the difference is less than `0.005`. Use an initial guess of `1.0`.
> 
> Write a driver function and test your square root function for the numbers `4`, `120.5`, `88`, `36,01`, `10000`, and `0.25`.
