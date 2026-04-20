#include <stdio.h>
int main(void) {
    int n = 0;
    char ch = 0;
    
    scanf("%d", &n); 
    getchar();
    
    int small = 0, countSmall = 0;    
    int number = 0, countNumber = 0;  
    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch);  
        

        if (ch >= 'a' && ch <= 'z') {
            small++;        
            number = 0;     
            
           
            if (small > countSmall)
                countSmall = small;
        }
       
        else if (ch >= '0' && ch <= '9') {
            number++;      
            small = 0;     
            
   
            if (number > countNumber)
                countNumber = number;
        }
        else {
            small = 0;
            number = 0;
        }
    }
    
    printf("%d\n", countSmall);   
    printf("%d\n", countNumber); 
    
    return 0;
}
