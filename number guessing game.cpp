#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
cout<<"\n\t\t....welcome to number guessing game...."<<"\n";
cout<<"\n**choise is depend on you choose ! "<<"\n";

while(true){
    cout<<"\t\n....select a choise..."<<"\n";
    cout<<"1.you choose 2 chance to guess number.."<<"\n";
    cout<<"2.you choose 5 chance to guess number.."<<"\n";
    cout<<"3.you choose 8 chance to guess number.."<<"\n";
    cout<<"4.you choose 10 chance to guess number.."<<"\n";
    cout<<"5...EXIT..."<<"\n";
    
    int chances;
    cout<<"Enter a choise :- ";
    cin >> chances;
    
     srand(time(0));
        int secretnumber = 1 + (rand() % 100);
        int playerchoice;
        
        if(chances == 1){
            cout<<"\nYou have 2 choices for finding the "
                    "secret number between 1 and 100."<<"\n";
            int choiseleft = 2;
            for(int i = 1;i <= 10;i++){
                cout<<"Enter the number :- ";
                cin>>playerchoice;
            
            if(playerchoice == secretnumber){
                cout<<"congratulations!! , you won.."<<playerchoice
                    <<"is the right number ! "<<"\n";
                cout<<"\t\tthank you for playing game!..."<<"\n";
                break;
            }
            else{
                cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                if(playerchoice > secretnumber){
                    cout<<"the secret number is smaller then the number you have chosen"<<"\n";
                }
                else{
                    cout<<"the secret number is greater then the number you have chosen"<<"\n";
                }
                choiseleft--;
                cout<<choiseleft<<"choises left "<<"\n";
                if(choiseleft == 0){
                     cout << "You couldn't find the secret number you don't have more chance to guess"<<secretnumber<<", You lose!!\n\n";
                     cout << "Play the game again to win!!!\n\n";
                }
            }
            }
        }
        else if(chances == 2){
            cout<<"\nYou have 5 choices for finding the "
                    "secret number between 1 and 100."<<"\n";
            int choiseleft = 5;
            for(int i = 1;i <= 5;i++){
                cout<<"Enter the number :- ";
                cin>>playerchoice;
            
            if(playerchoice == secretnumber){
                cout<<"congratulations!! , you won.."<<playerchoice
                    <<"is the right number ! "<<"\n";
                cout<<"\t\tthank you for playing game!..."<<"\n";
                break;
            }
            else{
                cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                if(playerchoice > secretnumber){
                    cout<<"the secret number is smaller then the number you have chosen"<<"\n";
                }
                else{
                    cout<<"the secret number is greater then the number you have chosen"<<"\n";
                }
                choiseleft--;
                cout<<choiseleft<<"choises left "<<"\n";
                if(choiseleft == 0){
                     cout << "You couldn't find the secret number you don't have more chance to guess. it was"<< secretnumber<< ", You lose!!\n\n";
                     cout << "Play the game again to win!!!\n\n";
                }
            }
            }
        }
        else if(chances == 3){
            cout<<"\nYou have 8 choices for finding the "
                    "secret number between 1 and 100."<<"\n";
            int choiseleft = 8;
            for(int i = 1;i <= 8;i++){
                cout<<"Enter the number :- ";
                cin>>playerchoice;
            
            if(playerchoice == secretnumber){
                cout<<"congratulations!! , you won.."<<playerchoice
                    <<"is the right number ! "<<"\n";
                cout<<"\t\tthank you for playing game!..."<<"\n";
                break;
            }
            else{
                cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                if(playerchoice > secretnumber){
                    cout<<"the secret number is smaller then the number you have chosen"<<"\n";
                }
                else{
                    cout<<"the secret number is greater then the number you have chosen"<<"\n";
                }
                choiseleft--;
                cout<<choiseleft<<"choises left "<<"\n";
                if(choiseleft == 0){
                     cout << "You couldn't find the secret number you don't have more chance to guess. it was"<< secretnumber<< ", You lose!!\n\n";
                     cout << "Play the game again to win!!!\n\n";
                }
            }
            }
        }
        else if(chances == 4){
            cout<<"\nYou have 10 choices for finding the "
                    "secret number between 1 and 100."<<"\n";
            int choiseleft = 10;
            for(int i = 1;i <= 10;i++){
                cout<<"Enter the number :- ";
                cin>>playerchoice;
            
            if(playerchoice == secretnumber){
                cout<<"congratulations!! , you won.."<<playerchoice
                    <<"is the right number ! "<<"\n";
                cout<<"\t\tthank you for playing game!..."<<"\n";
                break;
            }
            else{
                cout << "Nope, " << playerchoice
                         << " is not the right number\n";
                if(playerchoice > secretnumber){
                    cout<<"the secret number is smaller then the number you have chosen"<<"\n";
                }
                else{
                    cout<<"the secret number is greater then the number you have chosen"<<"\n";
                }
                choiseleft--;
                cout<<choiseleft<<"choises left "<<"\n";
                if(choiseleft == 0){
                     cout << "You couldn't find the secret number you don't have more chance to guess. it was"<< secretnumber<< ", You lose!!\n\n";
                     cout << "Play the game again to win!!!\n\n";
                }
            }
            }
        }
        else if(chances == 5){
            exit(5);
        }
        else{
            cout<<"please select valid choise to play game like ->(1,2,3,4,5)"<<"\n";
        }
 
    }
    return 0;
}