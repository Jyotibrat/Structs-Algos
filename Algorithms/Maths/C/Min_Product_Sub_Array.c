#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int mini = array[0], maximum = array[0], minimum = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > 0){
            maximum = (array[i] > (array[i] * maximum) ? array[i] : (array[i] * maximum));
            minimum = (array[i] < (array[i] * minimum) ? array[i] : (array[i] * minimum)); 
        }else if(array[i] == 0){
            maximum = minimum = 0;
        }else{
            maximum = (array[i] > (array[i] * minimum) ? array[i] : (array[i] * minimum));
            minimum = (array[i] < (array[i] * maximum) ? array[i] : (array[i] * minimum));
        }
        mini = (mini < minimum ? mini : minimum);
    }

    printf("The Minimum Product of a Sub array is: %d", mini);

    return 0;
}