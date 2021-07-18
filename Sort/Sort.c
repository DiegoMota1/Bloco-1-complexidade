#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#include "MergeSort.h"
#include "quicksort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"

int gerador(int *list, int maior){    
    int  i;

    
    



    list = malloc (maior * sizeof (int));
    // gerando um array até o valor selecionado
        for (i = 0; i < maior; i++){
            list[i] = rand() % 10000000;
            //printf ("%8d", list [i]);
            }

    return list;
}

void print (int *list, int max){

    for (int i = 0; i < max; i++){
            printf ("%8d", list [i]);
            }

}

void menu(int *list, int max){
    
    
    int  i;
    int selecionador;
    clock_t t;

    //printf ("%d\n",isdigit(max));


   
    printf ("\n");

    
 
    do{
    printf ("\nselecione a operacao que deseja:\n <1> bubble sort\n <2> insertion sort\n <3> selection sort\n <4> merge sort\n <5> quick sort\n <0> sair\n");
    scanf ("%d", &selecionador);
    
    
    switch (selecionador){
    
    case 0:
    printf ("saindo...\n");
    exit (0);

    case 1:
    t = clock();
    bubble_sort (list, max);
    printf ("\n");
    t = clock() - t;
    printf("tempo: %lf", ((double)t)/((CLOCKS_PER_SEC/1)));
    break;
    
    case 2:
    t = clock();
    insertion_sort(list, max); 
    printf ("\n");
    t = clock() - t;
    printf("tempo: %lf", ((double)t)/((CLOCKS_PER_SEC/1)));
    break;
    
    case 3:
    t = clock();
    selection_sort(list, max);
    printf ("\n");
    t = clock() - t;
    printf("tempo: %lf", ((double)t)/((CLOCKS_PER_SEC/1)));
    break;

    case 4:
    t = clock();
    merge_sort (list, 0, max-1);
    printf ("\n");
    t = clock() - t;
    printf("tempo: %lf", ((double)t)/((CLOCKS_PER_SEC/1)));
    break;

    case 5:
    t = clock();
    quick_sort (list, 0, max);
    printf("\n");
    t = clock() - t;
    printf("tempo: %lf", ((double)t)/((CLOCKS_PER_SEC/1)));
    break;

    default:
        printf ("entrada invalida\n");
   }
       if (max <= 20){
    printf ("\n");
    print(list, max);
    }


} while(selecionador != 0);
free (list);

}

int main(){

    int  i;
    int max;
    int *list;
       
    printf ("digite a quantidade de registros que deseja ordenar  \n");
    
    scanf ("%d", &max);
    list = gerador(list, max);

    if (max <= 20){
    print(list, max);
    }
    


    //printf ("%d\n",isdigit(max));


    
    menu(list, max);
    if (max <= 20){
    printf ("\n");
    print(list, max);
    }
    return 0;
}
