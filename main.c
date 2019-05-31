#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

int factoriel_For (int n);
int factoriel_Recur (int n);
int main ()
{
    int n = 10;
    printf("---Recursivité---\n");
    factoriel_Recur(n);
    printf("\n---Boucle pour :---\n");
    factoriel_For(n);



}
int factoriel_Recur (int n)
{
   if (n < 0) {
      return 0;
   }
   else if (n == 1 || n == 0) {
      return 1;
   }
    printf("%d\n",n);
    return n * factoriel_Recur(n - 1);
}

int factoriel_For (int n)
{
    int i=0;
    for(i=0; i< 11; i++){
    if (n < 0) {
        return 0;
    }
    else if (n == 1 || n == 0) {
        return 1;
    }
    else{
        n--;
    }
    printf("%d\n",n);
    }
    return 0;
}

