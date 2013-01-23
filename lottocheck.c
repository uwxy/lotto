#include <stdio.h>
#include <graphics.h>

  
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
  int x=0;
  int richtige;
  void perror (const char *message);
  
  int main(int a){				
    int i=0;
    int h=0;
    int m=0;

  printf("\n\n");				
  for (i=1; i<=6; i++ ){
    printf("Bitte gib die %d. Zahl ein: ",i);
    scanf("%i", &gezogen[i]);
  }
  printf("Bitte gib die Zusatzzahlahl ein: ");
  scanf("%i", &gezogen[7]);
  for (i=1; i<=7; i++ ){
    if ((gezogen[i]<1) || (gezogen[i]>49))
       return 0;
  }
  
  printf("\nLotto Hessen:\n\n"); 			// und sortiert ausgeben

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

  
 
  
 