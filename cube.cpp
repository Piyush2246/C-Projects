#include<iostream>
#include<cstdlib>       //rand function
#include<ctime>
#include<windows.h>

using namespace std;

enum Color {RED, GREEN, BLUE, YELLOW, PURPLE };

Color generaterandomcolor(){
    int randomnum = rand() % 5;
    return static_cast<Color>(randomnum);
}

string colortostring(Color color){
    switch(color){
        case RED : 
            return "Red";
        case GREEN : 
            return "Green";
        case BLUE : 
            return "Blue";
        case YELLOW : 
            return "Yellow";
        case PURPLE : 
            return "Purple";
        default : 
            return "Unknown";
    }
}

int main() {
    srand(time(0));     //return seed value  ctime and stdlib

    Color targetcolor = generaterandomcolor();

    string guess;
    while(true){
        system("cls");     //windows.h clear screen
        cout<<"------------------Welcome to the Colored Sqare game!!----------------"<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        cout<<"Guess the color of the square(RED, GREEN, BLUE, YELLOW or PURPLE)"<<endl;
        cout<<"Enter Exit to exit the game...."<<endl;
        cout<<"Enter your guess!!"<<endl;
        cin>>guess;
        for(int i=0;i<guess.length();++i){
            guess[i] = tolower(guess[i]);
        }

        if(guess=="red" || guess=="green" || guess=="blue" || guess=="yellow" || guess=="purple"){
            Color usercolor;
            if(guess == "red")
            usercolor = RED;

            else if(guess == "green")
            usercolor = GREEN;

            else if(guess == "blue")
            usercolor = BLUE;
            
            else if(guess == "yellow")
            usercolor = YELLOW;

            else if(guess == "purple")
            usercolor = PURPLE;

            if(usercolor == targetcolor){
                cout<<endl;
                cout<<"Congratulations! you guessed the correct color."<<endl;
                break;
            }
            else{
                cout<<"Wrong guess, try again........"<<endl;
            }
        }
        else if(guess == "exit"){
            cout<<"Thank you for playing our game......"<<endl;
            return 0;
        }
        else{
            cout<<"Invalid color!! Please enter a valid color."<<endl;
        }
        Sleep(1000);    //1000ms windows.h
    }
    return 0;
}