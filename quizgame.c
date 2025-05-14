#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void record();
void changescore(float , char []);
int main()
     {
     int countr,r,p,count,i,n;
     float score;
     char choice;
     char playername[20];
     homepage:
     system("cls");
     printf("\n\t\t\t         WELCOME TO THE QUIZ GAME");
     printf("\n\t\t\t              OF PROGRAMMING ");
     printf("\n\t\t__________________________________________________________");
     printf("\n\t\t    THIS GAME IS BASICALLY MADE FOR TESTING YOUR ");
     printf("\n\t\t       KNOWLEDGE ABOUT C PROGRAMMING LANGUAGE");
     printf("\n\t\t__________________________________________________________");
     printf("\n\t\t    TEST YOUR KNOWLEDGE AND BECOME MASTER IN C LANGUAGE");
     printf("\n\t\t        **BEST WISHES FROM TEAM OF QUIZ GAME**");
     printf("\n\t\t__________________________________________________________");
     printf("\n\t\t      * Press 1 to start the game");
     printf("\n\t\t      * Press 2 to view the highest score of the game  ");
     printf("\n\t\t      * press 3 to quit the game            ");
     printf("\n\t\t__________________________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='2')
	{
	record();
	goto homepage;
	}
	else if (choice=='3')
	exit(1);
    else if(choice=='1')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\tResister your name for the game:");
     gets(playername);

    system("cls");
    printf("\n ----------------------  WELCOME %s TO C PROGRAMMING LANGUAGE QUIZ GAME --------------------------",playername);
    printf("\n\n Here are some general instructions for players:");
    printf("\n -------------------------------------------------------------------------------------------------");
    printf("\n\n * There are 2 rounds in this Game,BEGINER ROUND & ADVANCED ROUND.");
    printf("\n\n * In BEGINER round you will be asked a total of 3 questions");
    printf("\n   and You are eligible to play the game if you answer the 2 questions correctly");
    printf("\n   otherwise you are not eligible to play the ADVANCED ROUND.");
    printf("\n\n * In ADVANCED ROUND you will be asked a total of 10 questions.");
    printf("\n\n * Your game starts with BEGINER ROUND.");
    printf("\n\n * You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n   correct answer.");
    printf("\n\n * For each correct answer you'll get 100 points.");
    printf("\n\n * You will be asked questions continuously, till right answers are given.");
    printf("\n\n\n\t\t****************** BEST OF LUCK ******************");
    printf("\n\n\n\n Press 1  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='1')
		{
		    goto home;
        }
	else
		{
        goto homepage;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     p=i;

     switch(p)
		{
		case 1:
		printf("1) Who is the father of C language?\n\n");
        printf("A) Steve Jobs\n");
        printf("B) James Gosling\n");
        printf("C) Dennis Ritchie\n");
        printf("D) Rasmus Lerdorf\n\n");

        printf("Enter your answer :");

		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!! \n\nPress Enter for next question:");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.");
		           printf("\n\n Press Enter for next question :");
		           getch();
		       break;
		       }

        case 2:
		printf("2) Which of the following is not a valid C variable name?\n\n");
        printf("A) int number;\n");
        printf("B) float rate;\n");
        printf("C) int variable_count;\n");
        printf("D) int $main;\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='D')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.");
		       printf("\n\n Press Enter for next question");
		       getch();
		       break;}

        case 3:
		printf("3) Which is valid C expression?\n\n");
        printf("A) int my_num = 100,000;\n");
        printf("B) int my_num = 100000;\n");
        printf("C) int my num = 1000;\n");
        printf("D) int $my_num = 10000;\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='B')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.");
		       printf("\n\n Press Enter for next question");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE , BETTER LUCK NEXT TIME");
	getch();
	goto homepage;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("1) All keywords in C are in ____________\n\n");
        printf("A) LowerCase letters\n");
        printf("B) UpperCase letters\n");
        printf("C) CamelCase letters\n");
        printf("D) None of the mentioned\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='A')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.");
		       printf("\n\nPress Enter for next question");
               getch();
		       goto score;
		       break;}

		case 2:
		printf("2) Which of the following is true for variable names in C?\n\n");
        printf("A) They can contain alphanumeric characters as well as special characters\n");
        printf("B) It is not an error to declare a variable to be one of the keywords(like goto, static)\n");
        printf("C) Variable names cannot start with a digit\n");
        printf("D) Variable can be of any length\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='C')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.");
		       printf("\n\nPress Enter for next question");
		       getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("3) Which of the following declaration is not supported by C language?\n\n");
        printf("A) String str;\n");
        printf("B) char *str;\n");
        printf("C) float str = 3e2;\n");
        printf("D) Both String str; and float str = 3e2;\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='A')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.");
		       printf("\n\nPress Enter for next question");
		       getch();
		       goto score;
		       break;}

        case 4:
		printf("4) What is an example of iteration in C?\n\n");
        printf("A) for\n");
        printf("B) while\n");
        printf("C) do-while\n");
        printf("D) all of the mentioned\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='D')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("5) What is #include <stdio.h>?\n\n");
        printf("A) Preprocessor directive\n");
        printf("B) Inclusion directive\n");
        printf("C) File inclusion directive\n");
        printf("D) None of the mentioned\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='A')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.");
		           printf("\n\nPress Enter for next question");
		       getch();
		       goto score;
		       break;
		       }
        case 6:
		printf("6) How many number of pointer (*) does C have against a pointer variable declaration?\n\n");
        printf("A) 10\n");
        printf("B) 21\n");
        printf("C) 234\n");
        printf("D) No limit\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='D')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }
         case 7:
		printf("7) Which of the following is not possible statically in C language?\n\n");
        printf("A) Jagged Array\n");
        printf("B) Rectangular Array\n");
        printf("C) Cuboidal Array\n");
        printf("D) Multidimensional Array\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='A')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }
         case 8:
		printf("8) Which of the following return-type cannot be used for a function in C?\n\n");
        printf("A) char *\n");
        printf("B) void\n");
        printf("C) struct\n");
        printf("D) none of these\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='D')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }
         case 9:
		printf("9) What is the sizeof(char) in a 32-bit C compiler?\n\n");
        printf("A) 1 bit\n");
        printf("B) 2 bits\n");
        printf("C) 1 bytes\n");
        printf("D) 2 bytes\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='C')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }
         case 10:
		printf("10) Which of the following are C preprocessors?\n\n");
        printf("A) #ifdef\n");
        printf("B) #define\n");
        printf("C  #endif\n");
        printf("D) all of the mentioned\n\n");

        printf("Enter your answer : ");

		if (toupper(getch())=='D')
			{printf("\n\nCorrect!! \n\nPress Enter for next question");
			countr++;getch();break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.");
                printf("\n\nPress Enter for next question");
                getch();
		       goto score;
		       break;
		       }
		       }}
	score:
    system("cls");
	score=(float)countr*100;
	if(score>0.00 && score<1000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t You scored %.1f points",score);
	      printf("\n\t\t Thanks for your participation");
	     goto go;}
	 else if(score==1000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t You scored%.1f points",score);
        printf("\n\t\t Thanks for your participation");
	}
	 else
    {
	 printf("\n\n\t\t******** SORRY YOU DIDN'T SCORE ANYTHING ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t BETTER LUCK NEXT TIME");goto go;}

	go:
	puts("\n\n Press N if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='N')
		goto home;
	else
		{
		changescore(score,playername);
		goto homepage;}
		}
		}

void record()
    {system("cls");
	char piya[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&piya,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.1f",piya,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}


void changescore(float score, char piyu[20])
	{
    system("cls");
	float sco;
	char nam[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nam,&sco);
	if (score>=sco)
	  { sco=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.1f",piyu,sco);
	    fclose(f);}
    }
