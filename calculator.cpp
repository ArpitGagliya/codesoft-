#include<iostream>
using namespace std;

int main(){
    cout<<"\n\t\t....welcome to our calculator....\n";
    cout<<"*it's calculation depend to you choose what you select !!\n";
    
    while(true){
        cout<<"\t\n....select a choise...\n";
        cout<<"1..press 1 to calculate the sum of two number.. \n";
        cout<<"2..press 2 to calculate the substriction of two number..\n";
        cout<<"3..press 3 to calculate the multiplication of two number..\n";
        cout<<"4..press 4 to calculate the division of two number..\n";
        cout<<"5...EXIT..."<<"\n";
        
        double firstnumber;
        cout<<"Enter a first value :- ";
        cin>>firstnumber;
        
        double secondnumber;
        cout<<"Enter a second value :- ";
        cin>>secondnumber;
    
        int choice;
        cout<<"\nEnter a choice :- ";
        cin >> choice;
        
        if(choice == 1){
            double sum;
            sum = firstnumber + secondnumber;
            cout<<"the sum of two number is "<<sum<<"\n";
        }
        else if(choice == 2){
            double sub;
            sub = firstnumber - secondnumber;
            cout<<"the substriction of two number is "<<sub<<"\n";
        }
        else if(choice == 3){
            double mul;
            mul = firstnumber * secondnumber;
            cout<<"the multiplication of two number is "<<mul<<"\n";
        }
        else if(choice == 4){
            double div;
            div = firstnumber / secondnumber;
            cout<<"the division of two number is "<<div<<"\n";
        }
        else if(choice == 5){
            exit(5);
        }
        else{
            cout<<"\t\tsorry!! your choice is not valid please select valid choice!\n";
        }
    }
    return 0;
}