# include <stdio.h>

int main(){
    int arr[] = {11 , 22 ,33 ,44 , 55, 66 , 77, 88 , 99 , 110};
    int n = 10 ; 
    printf("enter the key that you want to find ");
    int key ; 
    scanf("%d" , &key );


    int low = 0 ;
    int high = n - 1 ; 
    int mid ; 
    int found = 0 ; 


    while( low <= high ){
        mid = (low + high ) /2 ; 

        if(arr[mid] == key ){
            printf("your key is found at %d ", mid );
            found = 1 ; 
            break ; 
        }

        else if( key > arr[mid] ) low = mid + 1 ;

        else high  = mid - 1; 

    }

    if(found != 1 ){
        printf("element  is not present in the array ");
    }

    return 0 ;
}