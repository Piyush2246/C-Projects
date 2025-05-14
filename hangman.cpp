#include<iostream>
#include<ctime>
using namespace std;

int tries = 3;
string message="You have three chances!";
void hang_man(char);
int checkguess(char,string,string&);

int main() {
    char letter;
    string month;
    string months[] = {
        "january",
        "febuary",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "octomber",
        "november",
        "december",
    };
    srand(time(NULL));
    int month_number = rand()%12 ;
    month = months[month_number];

    string hide_month(month.length(),'X');
    system("cls");
    while(tries != 0){
        hang_man('n');
        
        cout<<"\t\t\tEnter 1 to exit the game..."<<endl;
        cout<<"\t\t\tLife : "<<tries<<endl;
        cout<<"\t\t\t"<<hide_month<<endl;
        cout<<"\t\t\tGuess a letter : ";
        cin>>letter;

        if(letter=='1'){
            return 0;
        }
        system("cls");

        if(checkguess(letter,month,hide_month)==0){
            message = "Incorrect Letter!";
            tries--;
        }
        else{
            message = "Nice! Correct Guess.";
        }
        if(hide_month == month){
            message="You are free!";
            hang_man('f');
            cout<<"\t\t\tLife : "<<tries<<endl;
            cout<<"\t\t\tThe month is : "<<month<<endl;
            break;
        }
    }
    if(tries == 0){
        message = "You are hanged!";
        hang_man('h');
        cout<<"\t\t\tLife : "<<tries<<endl;
        cout<<"\t\t\tThe month is : "<<month<<endl;
    }
    return 0;
}

int checkguess(char guess, string real_month, string &hidden_month){
    int matches=0;
    int len = real_month.length();
    for(int i=0;i<len;i++){
        if(guess==hidden_month[i]){
            return 0;
        }
        else if(guess == real_month[i]){
            hidden_month[i]=guess;
            matches++;
        }
    }
    return matches;
}

void hang_man(char state){
    cout<<"\t\t\t\t__________________"<<endl;
    cout<<"\t\t\t\t          |        |"<<endl;
    cout<<"\t\t\t\t          o        |"<<endl;
    cout<<"\t\t\t\t         / \\       |"<<"\t       " << message <<endl;
    cout<<"\t\t\t\t          |        |"<<"\t      /" << endl;
    cout<<"\t\t\t\t         / \\       |         o " << endl;
    cout<<"\t\t\t\t      =========    |        / \\" << endl;
    cout<<"\t\t\t\t      |       |    |         |" << endl;
    cout<<"\t\t\t\t      |       |    |        / \\" << endl;
    cout<<"\t\t\t\t========================================" <<endl;
}