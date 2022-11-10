# include <stdio.h>

int checkNumber();

int main(){
    
    checkNumber();
    return 0;
}

int checkNumber(){
    
    int fNumber = 0;
    int sNumber = 0;
    int total = 0;
    
    for(int i = 10; i<=99;i++){
        fNumber = i/10;
        sNumber = i%10;;
        total = fNumber + sNumber;
        if(total == 5){
            printf("%d ",i);
        }
        
    }
    return 0;
}