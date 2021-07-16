#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
            list[i] = rand() % 100;
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
       
   

    //printf ("%d\n",isdigit(max));


   
    printf ("\n");

    printf ("selecione a operacao que deseja:\n <1> bubble sort\n <2> insertion sort\n <3> selection sort\n <4> merge sort\n <5> quick sort\n <0> sair\n");
  
    int selecionador;
    scanf ("%d", &selecionador);
    
    
    switch (selecionador){
    
    case 0:
    printf ("saindo...\n");
    exit (0);

    case 1:
    bubble_sort (list, max);
    printf ("\n");
    break;
    
    case 2:
    insertion_sort(list, max); 
    printf ("\n");
    break;
    
    case 3:
    selection_sort(list, max);
    printf ("\n");
    break;

    case 4:
    merge_sort (list, 0, max-1);
    printf ("\n");
    break;

    case 5:
    quick_sort (list, 0, max);
    printf("\n");
    break;

    default:
        printf ("entrada invalida\n");
   }

}

int main(){

    int  i;
    int max;
    int *list;
       
    printf ("digite a quantidade de registros que deseja ordenar  \n");
    
    scanf ("%d", &max);
    list = gerador(list, max);

    
    


    //printf ("%d\n",isdigit(max));


    
    menu(list, max);

    print(list, max);
    return 0;
}
