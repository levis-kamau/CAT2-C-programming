An array is a data structure that consists of a collection of elements,all of the same type, stored in contiguous memory locations


#include<stdio.h>

int main(){
    //Declaration and initialization of a 2D array named scores
    int scores[2][2][2]={
      { 
             {62,   92}
             {94,   72}
      };
      { 
             {35,   70}
             {58,   67}
      }  
    };
    
    //Verification of the values
    for (int i = 0;  i<2;   i++)  {
        for  (int j = 0; j<2;  j++)  {
            printf("{%d,  %d}",  scores[i][j][0], scores[i][j][1]);
        } 
        printf("\n");
    } 
    
    return 0;
 }   