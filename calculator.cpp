#include<iostream>
using namespace std;
int addition();
int substraction();
int multiplication();
float division();
int modulo();
int main() {
    char selection,again;
    cout<<"----------Welcome to Our Calculator application-------------"<<endl;
    start:
    cout<<"------------Please follow below instructions----------------"<<endl;
    cout<<"Step 1 : Please press A for addition"<<endl;
    cout<<"Step 2 : Please press S for substraction"<<endl;
    cout<<"Step 3 : Please press D for division"<<endl;
    cout<<"Step 4 : Please press M for multiplication"<<endl;
    cout<<"Step 5 : Please press O for modulo"<<endl;
    cout<<"Step 6 : Please press E to exit"<<endl;
    cin>>selection;
    if(selection=='a'||selection=='A'){
        int addvalue=addition();
        cout<<"Addition is "<<addvalue<<endl;
        addagain:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>again;
        if(again=='y'||again=='Y'){
        goto start;
        }
        else if(again=='n'||again=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice"<<endl;
        goto addagain;
        }
    }
    else if(selection=='s'||selection=='S'){
        int subvalue=substraction();
        cout<<"Substraction is "<<subvalue<<endl;
        subagain:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>again;
        if(again=='y'||again=='Y'){
        goto start;
        }
        else if(again=='n'||again=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice"<<endl;
        goto subagain;
        }
    }
    else if(selection=='m'||selection=='M'){
        int mulvalue=multiplication();
        cout<<"multiplication is "<<mulvalue<<endl;
        mulagain:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>again;
        if(again=='y'||again=='Y'){
        goto start;
        }
        else if(again=='n'||again=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice"<<endl;
        goto mulagain;
        }
    }
    else if(selection=='d'||selection=='D'){
            float divvalue=division();
            cout<<"Division is "<<divvalue<<endl;
            divagain:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>again;
        if(again=='y'||again=='Y'){
        goto start;
        }
        else if(again=='n'||again=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice"<<endl;
        goto divagain;
        }
    }
    else if(selection=='o'||selection=='O'){
        int modvalue=modulo();
        cout<<"Modulo is "<<modvalue<<endl;
        modagain:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>again;
        if(again=='y'||again=='Y'){
        goto start;
        }
        else if(again=='n'||again=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice"<<endl;
        goto modagain;
        }
    }
    else if(selection=='e'||selection=='E'){
        cout<<"Thank you for using our application"<<endl;
        return 0;
    }
    else{
        cout<<"Invalid Choice! Please try again"<<endl;
        goto start;
    }
    return 0;
}

int addition(){
    int a;
    int total=0;
    char choice;
    add:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total=total+a;
    addmore:
    cout<<"Do you want to add more numbers, y or n?"<<endl;
    cin>>choice;
    if(choice=='y'||choice=='Y'){
        goto add;
    }
    else if(choice=='n'||choice=='N'){
        return total;
    }
    else{
        cout<<"Invalid choice"<<endl;
        goto addmore;
    }
}

int substraction(){
    int a,b;
    int total;
    char choice;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    total=a-b;
    return total;
}

float division(){
    float a,b;
    float total=0;
    char choice;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    total=a/b;
    return total;
}

int multiplication(){
    int a;
    int total=1;
    char choice;
    mul:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total=total*a;
    mulmore:
    cout<<"Do you want to multiply more numbers, y or n?"<<endl;
    cin>>choice;
    if(choice=='y'||choice=='Y'){
        goto mul;
    }
    else if(choice=='n'||choice=='N'){
        return total;
    }
    else{
        cout<<"Invalid choice"<<endl;
        goto mulmore;
    }
}

int modulo(){
    int a,b;
    float total=0;
    char choice;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    // if(a>b){
    //     total=a%b;
    // }
    // else{
    //     total=b%a;
    // }
    total=a%b;
    return total;
}