#include<iostream>
using namespace std;
float onlineshopping(void);
int main() {
    char startvalue,shopagain;
    cout<<"------------------Welcome to Maa online shop----------------"<<endl;
    start:
    cout<<"----Please follow below instructions for Online shopping----"<<endl;
    cout<<"Please press S to start shopping"<<endl;
    cout<<"Please press E to exit shopping"<<endl;
    cin>>startvalue;
    if(startvalue=='s'||startvalue=='S'){
        float totalamount=onlineshopping();
        cout<<"Total bill amount is "<<totalamount<<endl;
        shopagain1:
        cout<<"Do you want to do shopping again? Y or N"<<endl;
        cin>>shopagain;
        if(shopagain=='y'||shopagain=='Y'){
            goto start;
        }
        else if(shopagain=='n'||shopagain=='N'){
            cout<<"Thank you for using our application!!"<<endl;
            return 0;
        }
        else {
            cout<<"Invalid choice!!,please try again...."<<endl;
            goto shopagain1;
        }
    }
    else if(startvalue=='e'||startvalue=='E'){
        cout<<"Thank you for using our application!!"<<endl;
        return 0;
    }
    else{
        cout<<"Invalid choice!!,Please try again..."<<endl;
        goto start;
    }
    return 0;
}

float onlineshopping(){
    char choice,item;
    int quantity;
    float billamount=0;
    cout<<"------------------Welcome to online shopping----------------"<<endl;
    cout<<"----Please follow below instructions for Online shopping----"<<endl;
    cout<<"(1) Please enter m to order mobile phones"<<endl;
    cout<<"(2) Please enter l to order laptops"<<endl;
    cout<<"(3) Please enter d to order desktops"<<endl;
    cout<<"(4) Please enter s to order speaker"<<endl;
    cout<<"(5) Please enter h to order headphones"<<endl;
    cin>>choice;
/*************************mobile*******************************/
    if(choice=='m'||choice=='M'){
        mobile:
        cout<<"Mobile Details"<<endl;
        cout<<"(1) Apple  => Price : 1,50,000"<<endl;
        cout<<"(2) Vivo   => Price : 50,000"<<endl;
        cout<<"(3) Oppo   => Price : 35,000"<<endl;
        cout<<"(4) Realme => Price : 20,000"<<endl;
        cout<<"(5) Redmi  => Price : 10,000"<<endl;
        cout<<"(6) Poco   => Price : 15,000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity of Apple iphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*150000;
        }
        else if(item=='2'){
            cout<<"Enter quantity of Vivo phones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*50000;
        }
        else if(item=='3'){
            cout<<"Enter quantity of Oppo phones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*35000;
        }
        else if(item=='4'){
            cout<<"Enter quantity of Realme phones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*20000;
        }
        else if(item=='5'){
            cout<<"Enter quantity of Redmi phones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*10000;
        }
        else if(item=='6'){
            cout<<"Enter quantity of Poco phones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*15000;
        }
        else {
            cout<<"Invalid choice!,please try again..."<<endl;
            goto mobile;
        }
    }
/*************************laptop*******************************/
    else if(choice=='l'||choice=='L'){
        laptop:
        cout<<"Laptop Details"<<endl;
        cout<<"(1) Macbook  => Price : 1,80,000"<<endl;
        cout<<"(2) Vivobook => Price : 90,000"<<endl;
        cout<<"(3) samsung  => Price : 1,60,000"<<endl;
        cout<<"(4) Sony     => Price : 80,000"<<endl;
        cout<<"(5) Asus     => Price : 60,000"<<endl;
        cout<<"(6) Lenovo   => Price : 1,20,000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity of Macbook"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*180000;
        }
        else if(item=='2'){
            cout<<"Enter quantity of Vivobook"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*90000;
        }
        else if(item=='3'){
            cout<<"Enter quantity of Samsung laptop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*160000;
        }
        else if(item=='4'){
            cout<<"Enter quantity of Sony laptop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*80000;
        }
        else if(item=='5'){
            cout<<"Enter quantity of Asus laptop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*60000;
        }
        else if(item=='6'){
            cout<<"Enter quantity of Lenovo laptop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*120000;
        }
        else {
            cout<<"Invalid choice!,please try again..."<<endl;
            goto laptop;
        }
    }
/*************************desktop*******************************/
    else if(choice=='d'||choice=='D'){
        desktop:
        cout<<"Desktop Details"<<endl;
        cout<<"(1) Apple  => Price : 1,50,000"<<endl;
        cout<<"(2) Vivo   => Price : 50,000"<<endl;
        cout<<"(3) Oppo   => Price : 35,000"<<endl;
        cout<<"(4) Realme => Price : 20,000"<<endl;
        cout<<"(5) Redmi  => Price : 10,000"<<endl;
        cout<<"(6) Poco   => Price : 15,000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity of Apple desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*150000;
        }
        else if(item=='2'){
            cout<<"Enter quantity of Vivo desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*50000;
        }
        else if(item=='3'){
            cout<<"Enter quantity of Oppo desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*35000;
        }
        else if(item=='4'){
            cout<<"Enter quantity of Realme desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*20000;
        }
        else if(item=='5'){
            cout<<"Enter quantity of Redmi desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*10000;
        }
        else if(item=='6'){
            cout<<"Enter quantity of Poco desktop"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*15000;
        }
        else {
            cout<<"Invalid choice!,please try again..."<<endl;
            goto desktop;
        }
    }
/*************************speaker*******************************/
    else if(choice=='s'||choice=='S'){
        speaker:
        cout<<"Speaker Details"<<endl;
        cout<<"(1) Apple    => Price : 1,80,000"<<endl;
        cout<<"(2) Vivo     => Price : 90,000"<<endl;
        cout<<"(3) samsung  => Price : 1,60,000"<<endl;
        cout<<"(4) Sony     => Price : 80,000"<<endl;
        cout<<"(5) Asus     => Price : 60,000"<<endl;
        cout<<"(6) Lenovo   => Price : 1,20,000"<<endl;
        cout<<"Please enter your choice"<<endl;
         cin>>item;
        if(item=='1'){
          cout<<"Enter quantity of apple speaker"<<endl;
          cin>>quantity;
          billamount=billamount+quantity*180000;
         }
        else if(item=='2'){
          cout<<"Enter quantity of Vivo speaker"<<endl;
             cin>>quantity;
             billamount=billamount+quantity*90000;
        }
        else if(item=='3'){
            cout<<"Enter quantity of Samsung speaker"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*160000;
        }
        else if(item=='4'){
            cout<<"Enter quantity of Sony speaker"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*80000;
        }
        else if(item=='5'){
            cout<<"Enter quantity of Asus speaker"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*60000;
        }
        else if(item=='6'){
            cout<<"Enter quantity of Lenovo speaker"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*120000;
        }
        else {
            cout<<"Invalid choice!,please try again..."<<endl;
            goto speaker;
        }
    }
/*************************headphones*******************************/
    else if(choice=='h'||choice=='H'){
        headphones:
        cout<<"Headphones Details"<<endl;
        cout<<"(1) Apple    => Price : 1,80,000"<<endl;
        cout<<"(2) Vivo     => Price : 90,000"<<endl;
        cout<<"(3) samsung  => Price : 1,60,000"<<endl;
        cout<<"(4) Sony     => Price : 80,000"<<endl;
        cout<<"(5) Asus     => Price : 60,000"<<endl;
        cout<<"(6) Lenovo   => Price : 1,20,000"<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity of Apple Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*180000;
        }
        else if(item=='2'){
            cout<<"Enter quantity of Vivo Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*90000;
        }
        else if(item=='3'){
            cout<<"Enter quantity of Samsung Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*160000;
        }
        else if(item=='4'){
            cout<<"Enter quantity of Sony Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*80000;
        }
        else if(item=='5'){
            cout<<"Enter quantity of Asus Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*60000;
        }
        else if(item=='6'){
            cout<<"Enter quantity of Lenovo Headphones"<<endl;
            cin>>quantity;
            billamount=billamount+quantity*120000;
        }
        else {
            cout<<"Invalid choice!,please try again..."<<endl;
            goto headphones;
        }
    }
    return billamount;
}