/* This program is a game using a matrix. The user will start at position (0,0) and find the treasure on the matrix...*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    enum Cell {EMPTY, PLAYER, TREASURE};

    int playerX = 0, playerY = 0; //These are the coordinates of x,y.. Not two separate players...
    const int SIZE = 5;
    Cell grid[SIZE][SIZE];


    int treasureX, treasureY; 
    char move;

    srand(time(0));
    // These are x and y coordinates for the treasure...
    treasureX = rand() % SIZE; // Will give me the a random number below 5 
    treasureY = rand() % SIZE; // Will give me the a random number below 5


    cout<<"Welcome to the Treasure Hunt!!\n\n";

    //Draw the grid using nested for loops...
    while(true)
    {
        for(int i=0; i<SIZE ; i++)
        {
            for(int j=0; j<SIZE; j++)
            {
                if ( i==playerX && j==playerY)
                    cout<<"P";
                else if ( i == treasureX && j == treasureY)
                    cout<<"T";
                else 
                    cout <<".";    
            }
            cout<<endl;
        }

        //Ask the player to move...

        cout<<"Your move (W/A/S/D): ";
        cin >> move;

        //Handling the movement...

        if(move == 'A'){
            if ( playerY > 0)
                playerY--;
            else{
                cout<<"Can't move left!\n";
                continue;
            } 
        } else if (move == 'D'){
            if(playerY < SIZE - 1)
                playerY++;
            else {
                cout<<"Can't move right!\n";
                continue;
            }
        } else if (move == 'W'){
            if (playerX > 0) playerX--;
            else{
                cout<<"Can't move up! \n";
                continue;
            }
        } else if (move == 'S'){
            if (playerX < SIZE - 1)
                playerX++;
            else{
                cout<<"Can't move down!\n";
                continue;
            }
        } else {
            cout<<"Invalid input!\n";
            continue;
        }

        //checking for the win condition...
        if (playerX == treasureX && playerY == treasureY){
            cout<<"🙌🙌🙌🙌🙌🙌🙌🙌You found the treasure!!";
            break; 
        }
    }



}