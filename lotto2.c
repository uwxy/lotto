  #include </home/brisbone/build/lotto2/lotto3.h>

  
  int testzahl;
  int meinezahlen[10][6]={	{8,12,23,25,27,37},
				{3,4,7,9,27,40},
				{2,4,7,9,38,42},
				{5,24,27,28,41,43},
				{4,10,19,24,27,45},
				{2,7,9,10,24,31},
				{2,15,17,22,41,49},
				{3,26,30,33,35,37},
				{2,9,13,27,31,45},
				{2,14,18,23,40,46}};
  int losnummer[7]={4,5,6,8,8,6,2};
  int zusatzzahl;
  int gezogen[6];
  int meinerichtigen;
  int sort(const void *xzeiger, const void *yzeiger) {return (*(int*)xzeiger - *(int*)yzeiger);}
  int x=0;
  int richtige;
  
  int main(int a){				
    int i=0;
    int h=0;
    int m=0;
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
     
  
  printf("\nZufallsgenerator sortiert:\n\n"); 			// und sortiert ausgeben
  qsort(gezogen, 6+1, sizeof(int), sort);
  for (i=1; i<=6; i++)
    printf("%d, ", gezogen[i]);
  printf("Zusatzzahl %d\n\n", gezogen[7]);
  
   
  for (m=0; m<10; m++ ){
    richtige=0;
    for (i=1; i<=6; i++ ){
      if (meinezahlen[m][i]==gezogen[7])		// meine Zahlen mit gezogenen vergleichen
	zusatzzahl++;
	for (h=1; h<=6; h++ )
	   if (meinezahlen[m][i]==gezogen[h])		// meine Zahlen mit gezogenen vergleichen
	      richtige++;
    }	
							// meine Richtigen ausgeben
  printf("%d Richtige",richtige);
  if (zusatzzahl==1) printf(" + Zusatzzahl");
  zusatzzahl=0;
  printf("\n\n");
  
  }
  return 0;
  }

  
 
  
 