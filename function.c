#include<stdio.h>


 void naturalno(){

    int n;

    printf("\n Enter the no.\n");
    scanf("%d",&n);


    printf("\n The no. of n is %d \n",n);

    for(int i=1; i<=n ; i++){

        printf("%d \n",i);
        }
    }






    void naturalnoinreverse(){

         int n;

    printf("\n Enter the no.\n");
    scanf("%d",&n);


    printf("\n The no. of n is %d \n",n);

    int i=n;

    while(i>=1){

        printf("%d \n",i);

        i--;

    }
    }

void alphabets(){

printf(" \n all alphabets and nos are:\n");

 for(int i=48; i<=122; i++)
    {
        printf("%c\t",i);
    }

    printf("\n");

}


void evenno(){


 int n;

    printf(" \n Enter the no. to print even no.s:\n");
    scanf("%d",&n);


    printf(" \n The even no.s are %d \n",n);

    int i=2;

    while(i <=n){

        
        if(i % 2 ==0){

            printf("%d \n",i);


        } 

        i++;

    }
    

}



void oddno(){
int n;

    printf(" \n Enter the no. to print the odd nos:");
    scanf("%d",&n);


    printf(" \n The odd nos are %d \n",n);

    int i=2;

    while(i <=n){

        
        if(i % 2 !=0){

            printf("%d \n",i);


        } 

        i++;

    }


}


void sumofnaturalno(){

int n;
printf(" \n Enter the number to the sum of natural nos: ");
scanf("%d",&n);


int sum = 0;

for(int i = 1; i <= n; i++){

// printf("%d \n",i);

  sum = sum+i;

}
printf(" \n  The Sum  of natural nos is :%d \n",sum);

}


 void sumofevenno(){

 int n;
    printf("\n Enter The Number to sum of even nos : ");
    scanf("%d",&n);

    int sumofevenno = 0;

    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
     
     sumofevenno = sumofevenno+i;
        }
    }
    printf(" \n The sum of even no is: %d \n",sumofevenno);

}


void sumofoddno(){
int num ;
printf(" \n Enter the number for sum of odd nos:");
scanf("%d",&num);

int oddsum = 0;

for(int i = 1; i <= num ; i++){
    if(i % 2 != 0){
        oddsum = oddsum + i;
    }
}
printf("\n The Sum of odd no.s is: %d \n",oddsum);

}


void multiplicationtable(){


int n;

printf("\n Enter the number for multiplication table \n");
scanf("%d",&n);

for(int i = 1; i <= 10; i++){

    printf(" %d \n", n*i);
}

}

void sumofdigits(){

 int n;
    int sum = 0;

    printf("\n Enter The digits  :\n");
    scanf("%d",&n);

    while(n > 0){

        int rem = n % 10;
        sum = sum + rem ;
        
        n = n / 10;

    }

    printf("\n The sum of the number is %d \n",sum);

}








int main(){


naturalno();

naturalnoinreverse();

alphabets();

evenno();

oddno();

sumofnaturalno();

sumofevenno();

sumofoddno();

multiplicationtable();

sumofdigits();


    return 0;
}