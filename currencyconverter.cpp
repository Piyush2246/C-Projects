#include<iostream>
using namespace std;
float converter(void);
int main() {
    char startvalue,selectagain;
    startagain:
    cout<<"------------------Welcome to Currency Converter Application----------------"<<endl;
    cout<<"--------------------Please follow below instructions-----------------------"<<endl;
    cout<<"Step 1 : You can have currencies like dollar,rupees,euro,pound"<<endl;
    cout<<"Step 2 : You can type a,b,c,d respectively for currencies dollar,rupees,euro,pound"<<endl;
    cout<<"Step 3 : Enter currency-1 which you want to convert"<<endl;
    cout<<"Step 3 : Enter value for currency-1"<<endl;
    cout<<"Step 4 : Enter currency-2 in which you want to convert currency-1"<<endl;
    cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound"<<endl;
    cout<<"Please press s to start"<<endl;
    cout<<"Please press e to exit"<<endl;
    start:
    cin>>startvalue;
    if(startvalue=='s'||startvalue=='S'){
        float finalvalue=converter();
        cout<<"Result is "<<finalvalue<<endl;
        againuse:
        cout<<"Do you want to use our application again, y or n?"<<endl;
        cin>>selectagain;
        if(selectagain=='y'||selectagain=='Y'){
        goto startagain;
        }
        else if(selectagain=='n'||selectagain=='N'){
        cout<<"Thank you for using our application"<<endl;
        }
        else{
        cout<<"Invalid choice!!"<<endl;
        goto againuse;
        }
    }
    else if(startvalue=='e'||startvalue=='E'){
        cout<<"Thank you for using our application"<<endl;
        return 0;
    }
    else{
        cout<<"Invalid choice!!,please type s"<<endl;
        goto start;
    }
    return 0;
}

float converter(){
    char currname1,currname2;
    float currency1,currency2;
    currencylevel:
    cout<<"Enter currency-1 name"<<endl;
    cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound"<<endl;
    cin>>currname1;
    cout<<"Enter value for currency-1"<<endl;
    cin>>currency1;
    switch(currname1){
        case 'a':
        currencylevel1:
        cout<<"Enter currency-2 name"<<endl;
        cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound  (e)Exit"<<endl;
        cin>>currname2;
        if(currname2=='a'||currname1=='A'){
            currency2=currency1*1;
        }
        else if(currname2=='b'||currname2=='B'){
            currency2=currency1*73.84;
        }
        else if(currname2=='c'||currname2=='C'){
            currency2=currency1*0.85;
        }
        else if(currname2=='d'||currname2=='D'){
            currency2=currency1*0.72;
        }
        else if(currname2=='e'||currname2=='e'){
            cout<<"Thank you for using our application"<<endl;
            return 0;
        }
        else{
            cout<<"Invalid choice!!"<<endl;
            goto currencylevel1;
        }
        break;

        case 'b':
        currencylevel2:
        cout<<"Enter currency-2 name"<<endl;
        cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound  (e)Exit"<<endl;
        cin>>currname2;
        if(currname2=='a'||currname1=='A'){
            currency2=currency1*0.01;
        }
        else if(currname2=='b'||currname2=='B'){
            currency2=currency1*1;
        }
        else if(currname2=='c'||currname2=='C'){
            currency2=currency1*0.01;
        }
        else if(currname2=='d'||currname2=='D'){
            currency2=currency1*0.009;
        }
        else if(currname2=='e'||currname2=='e'){
            cout<<"Thank you for using our application"<<endl;
            return 0;
        }
        else{
            cout<<"Invalid choice!!"<<endl;
            goto currencylevel2;
        }
        break;

        case 'c':
        currencylevel3:
        cout<<"Enter currency-2 name"<<endl;
        cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound  (e)Exit"<<endl;
        cin>>currname2;
        if(currname2=='a'||currname1=='A'){
            currency2=currency1*1.16;
        }
        else if(currname2=='b'||currname2=='B'){
            currency2=currency1*86.37;
        }
        else if(currname2=='c'||currname2=='C'){
            currency2=currency1*1;
        }
        else if(currname2=='d'||currname2=='D'){
            currency2=currency1*0.85;
        }
        else if(currname2=='e'||currname2=='e'){
            cout<<"Thank you for using our application"<<endl;
            return 0;
        }
        else{
            cout<<"Invalid choice!!"<<endl;
            goto currencylevel3;
        }
        break;

        case 'd':
        currencylevel4:
        cout<<"Enter currency-2 name"<<endl;
        cout<<"(a)dollar  (b)rupees  (c)euro  (d)pound  (e)Exit"<<endl;
        cin>>currname2;
        if(currname2=='a'||currname1=='2'){
            currency2=currency1*1.37;
        }
        else if(currname2=='b'||currname2=='B'){
            currency2=currency1*101.20;
        }
        else if(currname2=='c'||currname2=='C'){
            currency2=currency1*1.17;
        }
        else if(currname2=='d'||currname2=='D'){
            currency2=currency1*1;
        }
        else if(currname2=='e'||currname2=='e'){
            cout<<"Thank you for using our application"<<endl;
            return 0;
        }
        else{
            cout<<"Invalid choice!!"<<endl;
            goto currencylevel4;
        }
        break;

        default :
            cout<<"Invalid choice!!"<<endl;
            goto currencylevel;
        break;
    }
    return currency2;
}