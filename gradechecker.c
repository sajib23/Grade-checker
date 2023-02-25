#include<stdio.h>
int main(){
int marks;
printf("enter your marks (out of 100):\n");
scanf("%d", & marks);
if (100>=marks && marks>=80)
{
    printf("congratulations!You are a gpa 5\n");
}

 else if (79>=marks && marks>=70){
    printf("Congratulations!You got A in the exam\n");
}

else if (69>=marks && marks>=60){
    printf("Congratulations!You got A- in the exam\n");
}

 else if (59>=marks && marks>=50){
    printf("Congratulations!You got B in the exam\n");
}

else if (49>=marks && marks>=40){
    printf("Congratulations!You got C in the exam\n");
}

 else if(39>=marks && marks>=33){
    printf("Congratulations!You got d in the exam\n");
}

 else if(32>=marks && marks>=0){
    printf("Congratulations!You have failed in the exam\n");
}

else{
    printf("invalid marks!\n");
}


printf("Thank you\n");





    return 0;
}