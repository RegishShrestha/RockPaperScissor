
#include<iostream>
#include <cstdlib>
#include<fstream>
using namespace std;


int main()
{
    int counter=0;
    int highest_score;
    
    


const char *rock = R"""(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___) )""";

cout<<rock;

const char *paper = R"""(
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
)""";
cout<<paper;

const char *scissors = R"""( 
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)""";
cout<<scissors<<endl;


bool game_is_on=true;
while(game_is_on){
    srand( time(NULL) ); //Randomize seed initialization
    int randNum = rand() % 3;//dd mm yyyy
    //int randNum=0;
    cout<< randNum;

    int choice;
    cout<<"What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors.";
    cin>>choice;
        


    switch(choice){
        case 0:
                cout<<"Your choice"<<rock;
                if(randNum==1){
                cout<<"computer chose"<<paper;
                cout<<"You Lose!!";
                counter=0;
                game_is_on=false;
                }
                else if(randNum==2){
                cout<<"computer chose"<<scissors;
                cout<<"You Win!!";
                counter++;}
                else if(randNum==0){
                cout<<"computer chose"<<rock;
                cout<<"Draw!!";}
                break;

        case 1:
                cout<<"Your choice"<<paper;
                if(randNum==2){
                cout<<"computer chose"<<scissors;
                cout<<"You Lose!!";
                counter=0;
                game_is_on=false;
                }
                else if(randNum==0){
                cout<<"computer chose"<<rock;
                cout<<"You Win!!";
                counter++;}
                else if(randNum==1){
                cout<<"computer chose"<<paper;
                cout<<"Draw!!";}
                break;

        case 2:
                cout<<"Your choice"<<scissors;
                if(randNum==0){
                cout<<"computer chose"<<rock;
                cout<<"You Lose!!";
                counter=0;
                game_is_on=false;
                }
                else if(randNum==1){
                cout<<"computer chose"<<paper;
                cout<<"You Win!!";
                counter++;}
                else if(randNum==2){
                cout<<"computer chose"<<scissors;
                cout<<"Draw!!";}
                break;     
        }
        cout<<"Your point: "<<counter<<endl;

        //fix this
        ifstream ifn;
        ifn.open("data.txt");
        ifn>>highest_score;
        ifn.close();
        cout<<"Highest point: "<<highest_score<<endl;
        
        if (counter>highest_score)
        {
            
            ofstream ofn;
            ofn.open("data.txt");
            ofn<<counter;
            ofn.close();
        }

        //fix this
        // twhen the highest value is 0 there is a bug try it yourself
        
   }
    // int n;
    // char name[20];
    // ofstream ofn;
    // ofn.open("data.txt");
    // cout<<"Enter n and name: ";
    // cin>>n>>name;
    // ofn<<n<<name;
    
   
    return 0;
}