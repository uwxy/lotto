  #include <stdio.h>		/*   /home/brisbone/build/lotto   */
  #include <time.h>

  
  int testzahl;
  int lottozahl[49];
  int meinezahlen[6]={4,9,20,32,33,42};
  int gezogen[6];
  int Zahlentest(int nochda);
  int meinerichtigen;
  int sort(const void *xzeiger, const void *yzeiger) {return (*(int*)xzeiger - *(int*)yzeiger);}
  int x=0;
  int richtige;
  
  
  void main(void){				
    int i=0;
    int h=0;
    time_t t;					// Entropie herstellen
    time(&t);
    srand((unsigned)time(NULL));

    
   do {						// Schleife wird begonnen...			 
    testzahl=rand() % 49 + 1; 			// Zufallszahl ziehen 
    if (Zahlentest(testzahl)==testzahl){  	// Funktion Zahlentest zur überprüfung der Doppelziehung 
      x++;				  	// übergeben und nach Erfolg an array übergeben
      gezogen[x]=testzahl;
      }
      }
   while (x<=6);				// ...bis 6 Zahlen gezählt sind
     
 
  
  printf("\nsortiert:\n"); 			// und sortiert ausgeben
  qsort(gezogen, 6+1, sizeof(int), sort);
  for (i=1; i<=6; i++)
    printf("%d,", gezogen[i]);
  printf("\n\n");
  
   
  
  for (i=1; i<=6; i++ )
    for (h=1; h<=6; h++ ){
      if (meinezahlen[i]==gezogen[h])		// meine Zahlen mit gezogenen vergleichen
        richtige++;
    }						// meine Richtigen ausgeben
  printf("%d Richtige",richtige);
  printf("\n\n");
  
  }

  
  Zahlentest(int nochda)     			// Funtion Zahlentest prüft auf Doppelziehung
  {
    if (lottozahl[nochda]==0){ 			// Lottozahl noch im Pool? 
      lottozahl[nochda]=1;			// wenn ja: rausnehmen
      return nochda;				// und Lottozahl übergeben ;-)
    }
    else return 0;				// andernfalls 0 übergeben
  }
  
 