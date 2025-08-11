#include <stdio.h>

int main (){

    int elements ;

    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &elements);

    int arr[elements];
    printf("Enter %d integers: ", elements);
    for(int i = 0; i < elements ; i++ ){
        scanf("%d" ,&arr[i]);
    }
    printf("\n");
    
    int printed[elements] ;
    for(int i = 0; i < elements; i++) printed[i] = 0;

    int count = 0;
    for(int i = 0; i < elements ; i++){

        if (printed[i]) continue;

        for(int j = 0; j < elements ;j++){
            if(arr[i] == arr[j]){
            count ++;
            printed[j] = 1;
            }            
        }
        
        printf("Element %d occurs %d times\n", arr[i], count);
        count = 0;        
    }
    
    return 0;
}