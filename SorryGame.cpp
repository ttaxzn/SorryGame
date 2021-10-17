#include <iostream>

using namespace std;

int main()
{
    int roll1;
    int roll2;
    int roll3;
    int round1total;
    
    srand(6);
    
    roll1=(rand()%6)+1;
    roll2=(rand()%6)+1;
    round1total=roll1+roll2;
    
    cout << "Round 1:" << endl;
    cout << "First dice: " << roll1 << endl;
    cout << "Second dice: " << roll2 << endl;
    
    int i;
    for (i=2; i<720; i++)
    {
        int roll3=(rand()%6)+1;
        int roll4=(rand()%6)+1;
        int roll2total=roll3+roll4;
        cout << "Round " << i << ":" << endl;
        cout << "First dice: " << roll3 << endl;
        cout << "Second dice: " << roll4 << endl;
    
        if(i<3 && roll2total==round1total)
        {
        cout << "**COMPUTER WON!**" << endl << endl;
        cout << "First dice == Second dice after " << i << " rounds" << endl << endl;
        break;
        }
        if(i>3 && roll2total==round1total)
        {
        cout << "Computer lost this turn" << endl << endl;
        cout << "First dice == Second dice after " << i << " rounds" << endl << endl;
        break;
        }
        
        
    }
    
    cout << "Do you want to play again? (Y/y)" << endl;
    char input;
    cin >> input;
    
    if(input == 'y' || input == 'Y')
    {
        
        roll1=(rand()%6)+1;
    roll2=(rand()%6)+1;
    round1total=roll1+roll2;
    
    cout << "Round 1:" << endl;
    cout << "First dice: " << roll1 << endl;
    cout << "Second dice: " << roll2 << endl;
    
    int i;
    for (i=2; i<720; i++)
    {
        int roll3=(rand()%6)+1;
        int roll4=(rand()%6)+1;
        int roll2total=roll3+roll4;
        cout << "Round " << i << ":" << endl;
        cout << "First dice: " << roll3 << endl;
        cout << "Second dice: " << roll4 << endl;
    
        if(i<3 && roll2total==round1total)
        {
        cout << "**COMPUTER WON!**" << endl << endl;
        cout << "First dice == Second dice after " << i << " rounds" << endl << endl;
        break;
        }
        if(i>3 && roll2total==round1total)
        {
        cout << "Computer lost this turn" << endl << endl;
        cout << "First dice == Second dice after " << i << " rounds" << endl << endl;
        break;
        
        }
    }
    }
    else
    {
        cout << endl << "Have a great day";
    }
    return 0;
    
}

