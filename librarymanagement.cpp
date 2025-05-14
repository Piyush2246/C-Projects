#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Library{
    public :
    int bookid,price,pages;
    char bookname[100];
    char authorname[100];
    char studentname[100];

};
int main() {
    Library lib[20];
    int input=0;
    int count=0;
    while(input!=3){
        cout<<"Enter 1 to input details like bookid,name,author,student,price,pages"<<endl;
        cout<<"Enter 2 to display details"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;

        switch(input){
            case 1:
            start:
                cout<<"Enter Book Id"<<endl;
                cin>>lib[count].bookid;
                cout<<"Enter Book Name"<<endl;
                cin>>lib[count].bookname;
                //cin.getline(lib[count].bookname,100,',');
                cout<<"Enter Book Author Name"<<endl;
                cin>>lib[count].authorname;
                //cin.getline(lib[count].authorname,100,',');
                cout<<"Enter Student Name"<<endl;
                cin>>lib[count].studentname;
                //cin.getline(lib[count].studentname,100,',');//use comma to end the statement in running state
                cout<<"Enter Book Price"<<endl;
                cin>>lib[count].price;
                cout<<"Enter Book Pages"<<endl;
                cin>>lib[count].pages;
                count++;
                break;

            case 2:
                for(int i=0;i<count;i++){
                cout<<"Book Id is : "<<lib[i].bookid<<endl;
                cout<<"Book Name is : "<<lib[i].bookname<<endl;
                cout<<"Book Author Name is : "<<lib[i].authorname<<endl;
                cout<<"Student Name is : "<<lib[i].studentname<<endl;
                cout<<"Book Price is : "<<lib[i].price<<endl;
                cout<<"Book Pages is : "<<lib[i].pages<<endl;
                }
                break;

            case 3:
                exit(0);
                break;
            
            default:
                cout<<"Invalid choice!!, please try again...."<<endl;
                goto start;
        }
    }
    return 0;
}