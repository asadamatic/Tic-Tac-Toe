#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct player_att
{
  string name;
  char   mark;
};
void output_tic(char tic[3][3]);
int main()
{
   int opposite = 0;
   srand(time(NULL));
   int turn = rand()%2;
    switch(turn)
   {
    case 0 :
  	opposite = turn + 1;
    break;
    case 1 :
    opposite = turn - 1;
    break;
    dafault:
   	cout <<"END";
   }

   
	//MARKS
	char cross, circle;
	cross  = 'X';
	circle = 'O';
    //PLAYER
    player_att player[2];
    string player_num[2] = {"PLAYER 1", "PLAYER 2"};
	//POSITION TO TARGET
	int possition;
	//GAME START
   	cout <<setw(65)<<"ENTER YOUR NAME"<<endl<<endl<<endl; 
    cout <<setw(62)<<player_num[0]<<endl<<endl<<endl;
    cout <<setw(57)<<" ";getline(cin, player[0].name);
    cout <<endl<<endl<<endl;
    cout <<setw(62)<<player_num[1]<<endl<<endl<<endl;
    cout <<setw(57)<<" ";getline(cin, player[1].name);
    cout <<endl<<endl<<endl;
    
   //WIN COUNTER
   int player2_wins, player1_wins;
   player1_wins = 0;
   player2_wins = 0;
   //DRAW COUNTER
   int draw = 0;
   //GAME COUNTER
   int game = 1;
   //QUIT
   char quit = '0';
   while( quit != 'Y' )
   {
     //BOXES
    char tic[3][3] = { {'1' , '2' , '3' } , { '4' , '5' , '6' } , { '7' , '8' , '9' } };
     //CHECK DRAW
    int check_draw = 0;
    cout <<setw(60)<<"GAME: "<<game<<endl<<endl<<endl<<endl; 
  
    

	////////

	

    
    cout <<setw(54)<<player[turn].name<<" GOES FIRST"<<endl<<endl<<endl;
    again_mark:
    cout <<setw(66)<<"SELECT YOUR MARK"<<endl<<endl<<endl
	     <<setw(58)<<"1. "<<cross<<endl<<endl
         <<setw(58)<<"2. "<<circle<<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>player[turn].mark;
    cout <<endl<<endl<<endl;
   

    switch(player[turn].mark)
    {

      case '1' :

     player[turn].mark     = cross;
     player[opposite].mark = circle;
     cout <<setw(56)<<player[turn].name<<"'s MARK = "<<player[turn].mark<<endl<<endl;
     cout <<setw(56)<<player[opposite].name<<"'s MARK = "<<player[opposite].mark<<endl<<endl;
     break;

     case '2' :

     player[turn].mark = circle;
     player[opposite].mark = cross;
     cout <<setw(52)<<player[turn].name<<"'s MARK = "<<player[turn].mark<<endl<<endl;
     cout <<setw(52)<<player[opposite].name<<"'s MARK = "<<player[opposite].mark<<endl<<endl;
     break;

     default:

     cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A MARK ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_mark;


    }
    
    cout  <<endl<<endl<<endl;
    
    int count   = 0;
    int reverse = 0;
    

    while(count <= 8)
{
    again_position:
    cout <<setw(57)<<player[turn].name<<"'s TURN"<<endl<<endl<<endl;
    output_tic( tic);
    
    cout  <<endl<<endl<<endl;

    
    cout <<setw(57)<<" ";cin >>possition;
    cout <<endl<<endl<<endl;
    switch(possition)
    {
    	case 1 :
        if( tic[0][0] == 'O' || tic[0][0] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[0][0] = player[turn].mark;
        count++;
        }
    	break;

        case 2 :
    	
    	 if( tic[0][1] == 'O' || tic[0][1] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[0][1] = player[turn].mark;
        count++;
        }
    	break;	

    	case 3 :
    	
    	if( tic[0][2] == 'O' || tic[0][2] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[0][2] = player[turn].mark;
        count++;
        }
    	break;

    	case 4 :

    	if( tic[1][0] == 'O' || tic[1][0] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[1][0] = player[turn].mark;
        count++;
        }
    	break;

    	case 5 :
    	
    	if( tic[1][1] == 'O' || tic[1][1] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[1][1] = player[turn].mark;
        count++;
        }
    	break;

    	case 6 :
    	
    	if( tic[1][2] == 'O' || tic[1][2] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[1][2] = player[turn].mark;
        count++;
        }
    	break;

    	case 7 :
    	
    	if( tic[2][0] == 'O' || tic[2][0] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[2][0] = player[turn].mark;
        count++;
        }
    	break;
 
    	case 8 :
    	
    	if( tic[2][1] == 'O' || tic[2][1] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[2][1] = player[turn].mark;
        count++;
        }
    	break;
        
        case 9 :
        if( tic[2][2] == 'O' || tic[2][2] == 'X')
        {	
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(92)<<"YOU CAN ONLY CHOOSE A LOCATION WHICH IS NOT PREVIOUSLY SELECTED";
             cout <<endl<<endl<<endl;
             goto again_position;
        } else 
        {
        	 
        tic[2][2] = player[turn].mark;
        count++;
        }
           	
    	break;
        
        default:
         cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A POSITION ONLY BY PRESSING THE NUMBER PRESENT ON IT.";
             cout <<endl<<endl<<endl;
             goto again_position;

    }
    //ROW 1
    if(tic[0][0] == tic[0][1] &&  tic[0][1]  == tic[0][2] &&  tic[0][0]  == tic[0][2] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }	
     //ROW 2
    else if(tic[1][0] == tic[1][1] &&  tic[1][1]  == tic[1][2] &&  tic[1][0]  == tic[1][2] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }	
     //ROW 3	
    else if(tic[2][0] == tic[2][1] &&  tic[2][1]  == tic[2][2] &&  tic[2][0]  == tic[2][2] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }	
     //COLUMN 1
    else if(tic[0][0] == tic[1][0] &&  tic[1][0]  == tic[2][0] &&  tic[0][0]  == tic[2][0] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }	
     //COLUMN 2
    else if(tic[0][1] == tic[1][1] &&  tic[1][1]  == tic[2][1] &&  tic[0][1]  == tic[2][1] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }
     //COLUMN 3
    else if(tic[0][2] == tic[1][2] &&  tic[1][2]  == tic[2][2] &&  tic[0][2]  == tic[2][2] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }
    //DIAGONAL RIGHT
    else if(tic[0][0] == tic[1][1] &&  tic[1][1]  == tic[2][2] &&  tic[0][0]  == tic[2][2] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }
    //DIAGONAL LEFT
    else if(tic[0][2] == tic[1][1] &&  tic[1][1]  == tic[2][0] &&  tic[0][2]  == tic[2][0] )
    {
    	output_tic( tic);
    	cout <<setw(55)<<player[turn].name<<setw(10)<<" HAS WON!";
    	check_draw++;
    	if(turn == 0)
    {
      player1_wins++;
    } 
    else if(turn == 1)  
    {
      player2_wins++;	
    }
    	cout <<endl<<endl<<endl;
    	break;
    }
   
   
    //SHIFTING VALUES
    reverse =turn;
    turn = opposite;
    opposite = reverse;
    
    	

    } 
    if(count >= 9 && check_draw == 0)
    {
    	cout <<setw(60)<<"DRAW!"<<endl<<endl<<endl;
    	draw++;
    }	
    
     cout <<setw(62)<<"SCORE"<<endl<<endl;
     cout <<setw(60)<<player[0].name<<setw(2)<<": "<<player1_wins;
     cout <<endl<<endl;
     cout <<setw(60)<<player[1].name<<setw(2)<<": "<<player2_wins;
     cout <<endl<<endl<<endl;
     cout <<setw(62)<<"DRAW: "<<draw;
     cout <<endl<<endl<<endl;
     cout <<setw(65)<<"WANT TO QUIT?"<<endl
          <<setw(66)<<"PRESS Y TO QUIT"<<endl<<endl
          <<setw(60)<<"OR"<<endl<<endl
          <<setw(72)<<"PRESS ANY KEY TO CONTINUE!"<<endl;
     cout <<endl<<endl; 
     cout <<setw(57)<<" ";cin >>quit;
     cout <<endl<<endl<<endl;     
     game++;
	}	 
    
	
	return 0;
}

void output_tic(char tic[3][3])
{
	for(int  i = 0; i <= 2; i++)
	    { cout <<setw(50)<<" ";
	for (int n = 0; n <= 2; n++)
		{
	
	 	cout <<tic[i][n]<<"      ";
        }	
          cout <<endl<<endl;
	    }
}
