

#include <iostream>

using namespace std;
void StartGame(int player1, int player2)
{
int steps1=0;
int steps2=0;
int home=0;
int i; // rounds
int card1;
int card2;
int choice;
srand(time(0));

for(i=0; i<100; i++) //gameplay
{
    cout << "----------------------------------" << endl;
    cout << "*** Round " << i+1 << " ***" << endl;
    cout << "----------------------------------" << endl;
    cout << endl;
            card1=rand()%12 + 1;
            card2=rand()%12 + 1;
            
            
            if((card1 ==1 || card1==2) && steps1==0) // first player card INITAL MOVE
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 1 ***" << endl;
                cout << "----------------------------------" << endl;
                steps1=steps1+card1;
                cout << "You are lucky, you got " << card1 << endl;
                cout << "Total steps for Player 1: " << steps1 << endl;
                
            }
            
            
             if(card1!=1 && card1!=2 && steps1==0) // first player card INITAL MOVE FAIL
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 1 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "You got " << card1 << " ! Did not get (1 or 2)" << endl;
                cout << "Need to skip your turn" << endl;
                cout << "Total steps for Player 1: 0" << endl;
            }
            
              
                if((card2==1 || card2==2) && steps2==0 ) // second player card INITAL MOVE
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 2 ***" << endl;
                cout << "----------------------------------" << endl;
                steps2=steps2+card2;
                cout << "You are lucky, you got " << card2 << endl;
                cout << "Total steps for Player 2: " << steps2 << endl;
                
            }
            
            
            if(card2!=1 && card2!=2 && steps2==0) // second player card INITAL MOVE FAIL
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 2 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "You got " << card1 << " ! Did not get (1 or 2)" << endl;
                cout << "Need to skip your turn" << endl;
                cout << "Total steps for Player 2: 0" << endl;
            }
                
            if(steps1<30 && steps1>0) // player one moves !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 1
            {

            
                if(card1==4 && steps1!=0) // CARD 4
                {
                cout << "----------------------------------" << endl;
                cout << "*** Player 1 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "Your card is 4" << endl;
                cout << "You can move to your opponent spot, or move 4 steps" << endl;
                cout << "What is your choice? (1: move 4 steps, 2: take opponent spot)" << endl;
                cin >> choice;
                if(choice==1) // move 4 spots
                {
                    steps1=steps1+card1;
                }
                else // moving spots with opponent
                {
                    steps1=steps2;
                    cout << "You are at opponent spot" << endl;
                    cout << "Total steps for Player 1: " << steps1 << endl;
                    steps2=home;
                }
                }
                
                
                if(card1!=4 && steps1!=0) // ANY CARD NOT 4
            {
                if(steps1+card1<30)
                {
                    steps1=steps1+card1;
                    cout << "----------------------------------" << endl;
                    cout << "*** Player 1 ***" << endl;
                    cout << "----------------------------------" << endl;
                    cout << "Your card is " << card1 << endl;
                    cout << "You can move " << card1 << " more steps!" << endl;
                    cout << "Total steps for Player 1: " << steps1 << endl;
                }
                else
                {
                    cout << "----------------------------------" << endl;
                    cout << "*** Player 1 ***" << endl;
                    cout << "----------------------------------" << endl;
                    cout << "Your card is " << card1 << endl;
                    cout << "You can move " << card1 << " more steps!" << endl;
                    cout << "Oops! You need to get exactly 30 to win! Try again!" << endl;
                    cout << "Total steps for Player 1: " << steps1 << endl;
                }
            }
            
             if(steps1+card1==30) // PLAYER 1 WINS
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 1 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "Your card is " << card1 << endl;
                cout << "You can move " << card1 << " more steps!" << endl;
                cout << "Total steps for Player 1: 30" << endl;
                cout << "Player 1 is the winner" << endl;
                break;
            }
            
            
            }
            
            
            if(steps2<30 && steps2>0) // player two moves !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 2
            {
                
            if(card2==4 && steps2!=0) // CARD 4
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 2 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "Your card is 4" << endl;
                cout << "You can move to your opponent spot, or move 4 steps" << endl;
                cout << "What is your choice? (1: move 4 steps, 2: take opponent spot)" << endl;
                cin >> choice;
                if(choice==1) // move 4 spots
                {
                    steps2=steps2+card2;
                }
                else // moving spots with opponent
                {
                    steps2=steps1;
                    cout << "You are at opponent spot" << endl;
                    cout << "Total steps for Player 2: " << steps2 << endl;
                    steps1=home;
                }
            }
            
            
            
            if(card2!=4 && steps2!=0) // ANY CARD NOT 4
            {
                if(steps2+card2<30)
                {
                    steps2=steps2+card2;
                     cout << "----------------------------------" << endl;
                    cout << "*** Player 2 ***" << endl;
                    cout << "----------------------------------" << endl;
                    cout << "Your card is " << card2 << endl;
                    cout << "You can move " << card2 << " more steps!" << endl;
                    cout << "Total steps for Player 2: " << steps2 << endl;
                }
                else
                {
                    cout << "----------------------------------" << endl;
                    cout << "*** Player 2 ***" << endl;
                    cout << "----------------------------------" << endl;
                    cout << "Your card is " << card2 << endl;
                    cout << "You can move " << card2 << " more steps!" << endl;
                    cout << "Oops! You need to get exactly 30 to win! Try again!" << endl;
                    cout << "Total steps for Player 2: " << steps2 << endl;
                }
            }
       
        if(steps2+card2==30) // PLAYER 2 WINS
            {
                cout << "----------------------------------" << endl;
                cout << "*** Player 2 ***" << endl;
                cout << "----------------------------------" << endl;
                cout << "Your card is " << card2 << endl;
                cout << "You can move " << card2 << " more steps!" << endl;
                cout << "Total steps for Player 2: 30" << endl;
                cout << "Player 2 is the winner" << endl;
                break;
            }
            
            }
            
            
        cout << endl;
}
}

int main()
{
    int player1; 
    int player2;
    char playagain;
    cout << "------------------------------------------" << endl;
    cout << "***Welcome to Sorry Board Game***" << endl;
    cout << "***Game will be played with 2 players***" << endl;
    cout << "------------------------------------------" << endl;
    StartGame(player1,player2);
    cout << "Good game!" << endl;
    cout << "Do you want to have another turn? (Y/y for yes, N/n for no)" << endl;
    cin >> playagain;
    if(playagain=='Y' || playagain=='y')
    {
        StartGame(player1, player2);
    }
    return 0;
}




