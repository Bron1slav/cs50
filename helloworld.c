#include <stdio.h>
#include "cs50.h"
#include <ctype.h>
//// Hello everyone ,now you are reading my code that i wrote during week 1(C)
//// p.s. That was pretty easy "week" but i was kinda bored in the starting day ,due to my other stuff, 
//// hence I completed it within 2 days :))))

int main(void) 
{                                        
    string firstname = get_string("What's your first name? ");
    string lastname = get_string("What's your last name? ");

    printf("Hi there, %s %s", firstname, lastname);
}

//// Calculator
// int main(void)
// {
//     printf("Print 2 integers\n");
//     int a = get_int("What's your first integer? ");
//     int b = get_int("What's your second integer? ");

//     if(a == b){
//         printf("Your integers are equal, because %i = %i", a ,b);
//     }
//     else if(a > b){
//         printf("Your first integer is greater than second, because %i > %i", a ,b);
//     }
//     else{
//         printf("Your first integer is lesser than second, because %i < %i", a ,b);
//     }
// }



//// The next lines of code have been made to sum up everything learned.
//// It is a little bit long code, but I tried to do everything working good.

// int main(void)
// {
//     int score_count = 0;
//     printf("QUIZ\n");
//     printf("The first question is:\nWhat is the result of sumary of two threes?\nA.6\nB.4\nC.9\n");
//     int answer;
//     do{
//     answer = toupper(get_char("Your answer is:  "));
//     }
//     while(
//         answer !='A'&&
//         answer !='B'&&
//         answer != 'C'
//         );

//     if(answer =='A'){
//         printf("   CORRECT!!!\n");
//         score_count++;
//     }
//     else{
//         printf("   WRONG\n");
//         score_count--;
//     }
//     printf("Your current score is %i points \n",score_count);


//     printf("The second question is:\nWhat is your name?\nA.Jonh\nB.Luke\nC.Jamal\n");
//     int answer2;
//     do{
//     answer2 = toupper(get_char("Your answer is:  "));
//     }
//     while(
//         answer2 !='A'&&
//         answer2 !='B'&&
//         answer2 != 'C'
//         );

//     if(answer2 =='C'){
//         printf("   CORRECT!!!\n");
//         score_count++;
//     }
//     else{
//         printf("   WRONG\n");
//         score_count--;
//     }
//     printf("Your current score is %i points \n",score_count);



//     printf("The third question is:\nHow many years you have been learning to code?\nA.1 year\nB.I do not know how to code yet\nC.5 years\n");
//     int answer3;
//     do{
//     answer3= toupper(get_char("Your answer is:  "));
//     }
//     while(
//         answer3 !='A'&&
//         answer3 !='B'&&
//         answer3 != 'C'
//         );
 
//     if(answer3 =='B'){
//         printf("   CORRECT!!!\n");
//         score_count++;
//     }
//     else{
//         printf("   WRONG\n");
//         score_count--;
//     }
//     printf("Your score is %i points \n",score_count);
//     return 0;
// }

