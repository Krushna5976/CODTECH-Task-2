#include <stdio.h>

int main(){
    char a;
    int b,c,d,e,f;
    int score=0;
    printf("This quiz contains 5 questions\nEach question carries 10 points\nMax points are 50\nTo qualify the quiz you need minimum 30 out of 50 points.");
    repeat:
    printf("\nEnter \"y\" to start the quiz.\n");
    scanf("%c",&a);
    if(a=='y'||a=='Y'){
        goto start;
    }
    else{
        printf("invalid input.");
        goto repeat;
    }
    start:
    printf("1)What is the chemical symmbol for the element Gold?\n");
    printf("\t1)Au\t\t2)Ag\n\t3)Pb\t\t4)Fe\n");
    printf("Ans.");
    scanf("%d",&b);
    if(b==1){
        score += 10;
        printf("Correct answer.\n");
        printf("Your current score is %d\n\n",score);
    }
    else{
        printf("Wrong answer.\n\n");
    }
    printf("2)What colour is sky on a clear day?\n");
    printf("\t1)Red\t\t2)Blue\n\t3)Green\t\t4)Yellow\nAns.");
    scanf("%d",&c);
    if(c==2){
        score+=10;
        printf("Correct answer.\nYour curent score is %d\n\n",score);
    }
    else{
        printf("Wrong answer.\n\n");
    }
    printf("3)Which of these is a continent?\n");
    printf("\t1)Brazil\t2)Africa\n\t3)India\t\t4)Paris\nAns.");
    scanf("%d",&d);
    if(d==2){
        score+=10;
        printf("Correct answer.\nYour curent score is %d\n\n",score);
    }
    else{
        printf("Wrong answer.\n\n");
    }
    char ch=248;
    printf("4)Water boils at what temperature?\n");
    printf("\t1)100%cC \t2)50%cC\n\t3)0%cC \t\t4)200%cC \nAns.",ch,ch,ch,ch);
    scanf("%d",&e);
    if(e==1){
        score+=10;
        printf("Correct answer.\nYour curent score is %d\n\n",score);
    }
    else{
        printf("Wrong answer.\n\n");
    }
    printf("5)How many players are there on a standard soccer team?\n");
    printf("\t1)11\t\t2)7\n\t3)9\t\t4)15\nAns.");
    scanf("%d",&f);
    if(f==1){
        score+=10;
        printf("Correct answer.\nYour curent score is %d\n\n",score);
    }
    else{
        printf("Wrong answer.\n\n");
    }
    if(score>=30){
        printf("Congratulations!!\nYou are qualified.\n");
        printf("Your total score is %d",score);
    }
    else{
        printf("Your total score is %d\n",score);
        printf("Better luck next time.");
    }
}
