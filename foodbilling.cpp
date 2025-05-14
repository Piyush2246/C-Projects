#include<iostream>
using namespace std;
int returntotalbill(void);
int main() {
    int totalbill= returntotalbill();
    cout<<"Your total Bill Amount is "<<totalbill<<endl;
    cout<<"Thank you for ordering !!"<<endl;
    return 0;
}

int returntotalbill(){
    char startchoice;
    char item,vegitem,selectagain,nonvegitem,fastfooditem;
    float billamount=0;
    cout<<"------------------Welcome to charuni cloud kitchen----------------"<<endl;
    cout<<"--------Please follow below instructions for food ordering--------"<<endl;
    cout<<"Step 1 : Please press S to start your order"<<endl;
    cout<<"Step 2 : You can order both veg and non-veg items"<<endl;
    cout<<"Step 3 : Please press A to select veg item"<<endl;
    cout<<"Step 4 : Please press B to select non-veg item"<<endl;
    cout<<"Step 5 : Please press C to select fast food items"<<endl;
    cout<<"Step 6 : You will get your final bill after your order"<<endl;
    cout<<"Step 7 : Please press E to exit"<<endl;
    start:
    cin>>startchoice;
    if(startchoice=='s' || startchoice=='S'){
        items:
        cout<<"Please select the category of your choice"<<endl;
        cout<<"(A)Veg Items   (B)Non-veg Items   (C)Fast-food Items  (D)Exit"<<endl;
        cin>>item;
        if(item=='a' || item=='A'){
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)Palak Paneer  : Price : Rs-300"<<endl;
            cout<<"(2)Matar Paneer  : Price : Rs-100"<<endl;
            cout<<"(3)Mushroom fry  : Price : Rs-299"<<endl;
            cout<<"(4)Fruit salad   : Price : Rs-199"<<endl;
            cout<<"(5)Normal food   : Price : Rs-149"<<endl;
            cout<<"Press A to return to category Bar"<<endl;
            cout<<"Press E to exit"<<endl;
            vegitems:
            cin>>vegitem;
            if(vegitem=='1'){
                cout<<"Palak paneer selected"<<endl;
                billamount=billamount+300;
            }
            else if(vegitem=='2'){
                cout<<"Matar paneer selected"<<endl;
                billamount=billamount+100;
            }
            else if(vegitem=='3'){
                cout<<"Mushroom fry selected"<<endl;
                billamount=billamount+299;
            }
            else if(vegitem=='4'){
                cout<<"Fruit Salad selected"<<endl;
                billamount=billamount+199;
            }
            else if(vegitem=='5'){
                cout<<"Normal Food selected"<<endl;
                billamount=billamount+149;
            }
            else if(vegitem=='a'||vegitem=='A'){
                goto items;
            }
            else if(vegitem=='e'||vegitem=='E'){
                return 0;
            }
            else{
                cout<<"Invalid choice!!"<<endl;
                goto vegitems;
            }
            cout<<"Do you want to add more items from above list, y or n?"<<endl;
            cin>>selectagain;
            if(selectagain=='y'){
                goto items;
            }
            else {
                return billamount;
            }
        }
        else if(item=='b'|| item=='B'){
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)Chicken kari    : Price : Rs-300"<<endl;
            cout<<"(2)Chicken fry     : Price : Rs-199"<<endl;
            cout<<"(3)Non-veg biryani : Price : Rs-399"<<endl;
            cout<<"(4)Meat kabab      : Price : Rs-199"<<endl;
            cout<<"(5)Non-veg Thali   : Price : Rs-149"<<endl;
            cout<<"Press A to return to category Bar"<<endl;
            cout<<"Press E to exit"<<endl;
            nonvegitems:
            cin>>nonvegitem;
            if(nonvegitem=='1'){
                cout<<"Chicken Kari selected"<<endl;
                billamount=billamount+300;
            }
            else if(nonvegitem=='2'){
                cout<<"Chicken Fry selected"<<endl;
                billamount=billamount+199;
            }
            else if(nonvegitem=='3'){
                cout<<"Non-veg Biryani selected"<<endl;
                billamount=billamount+399;
            }
            else if(nonvegitem=='4'){
                cout<<"Meat kabab selected"<<endl;
                billamount=billamount+199;
            }
            else if(nonvegitem=='5'){
                cout<<"Non-veg Thali selected"<<endl;
                billamount=billamount+149;
            }
            else if(nonvegitem=='a'||nonvegitem=='A'){
                goto items;
            }
            else if(nonvegitem=='e'||nonvegitem=='E'){
                return 0;
            }
            else{
                cout<<"Invalid choice!!"<<endl;
                goto nonvegitems;
            }
            cout<<"Do you want to add more items from above list, y or n?"<<endl;
            cin>>selectagain;
            if(selectagain=='y'){
                goto items;
            }
            else {
                return billamount;
            }
        }
        else if(item=='c' || item=='C'){
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1)Burger    : Price : Rs-149"<<endl;
            cout<<"(2)Pizza     : Price : Rs-299"<<endl;
            cout<<"(3)Momos     : Price : Rs-109"<<endl;
            cout<<"(4)Sandwich  : Price : Rs-129"<<endl;
            cout<<"(5)Maggie    : Price : Rs-89"<<endl;
            cout<<"Press A to return to Category bar"<<endl;
            cout<<"Press E to exit"<<endl;
            fastfooditems:
            cin>>fastfooditem;
            if(fastfooditem=='1'){
                cout<<"Burger selected"<<endl;
                billamount=billamount+149;
            }
            else if(fastfooditem=='2'){
                cout<<"Pizza selected"<<endl;
                billamount=billamount+299;
            }
            else if(fastfooditem=='3'){
                cout<<"Momos selected"<<endl;
                billamount=billamount+109;
            }
            else if(fastfooditem=='4'){
                cout<<"Sandwich selected"<<endl;
                billamount=billamount+129;
            }
            else if(fastfooditem=='5'){
                cout<<"Maggie selected"<<endl;
                billamount=billamount+89;
            }
            else if(fastfooditem=='a'||fastfooditem=='A'){
                goto items;
            }
            else if(fastfooditem=='e'||fastfooditem=='E'){
                return 0;
            }
            else{
                cout<<"Invalid choice!!"<<endl;
                goto fastfooditems;
            }
            cout<<"Do you want to add more items from above list, y or n?"<<endl;
            cin>>selectagain;
            if(selectagain=='y'){
                goto items;
            }
            else {
                return billamount;
            }
        }
        else if(item=='d' || item=='D'){
            return 0;
        }
        else{
            cout<<"Invalid choice, please try again!!"<<endl;
            goto items;
        }
    }
    else if(startchoice=='e' || startchoice=='E'){
        return 0;
    }
    else{
        cout<<"Invalid choice,Please try again!!"<<endl;
        goto start;
    }
    return billamount;
}