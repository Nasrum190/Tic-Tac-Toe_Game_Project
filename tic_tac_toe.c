#include<stdio.h>
#include<conio.h>
char box[10]={'o','1','2','3','4','5','6','7','8','9'};
int main()
{
    int player=1;
    int i,choice;
    char sign,start;
    printf("                          =================================\n");
    printf("                            Welcome to My Tic-Tac-Toe Game \n\n");
    printf("                          =================================\n\n");
    printf("1.Please Enter S to Start The Game\n2.Please Enter E for Exit From the Game\n");
    scanf("%c",&start);
    if(start=='S'){
    do
    {
        Game_Board();
        if(player % 2!=0)
        {
            player=1;
        }
        else
        {
            player=2;
        }
        printf("Player %d Enter Your Box Number=",player);
        scanf("%d",&choice);
        if(player==1)
        {
            sign='O';
        }
        else
        {
            sign='X';
        }
        if(choice==1 && box[1]=='1')
        {
            box[1]=sign;
        }
        else if(choice==2 && box[2]=='2'){
            box[2]=sign;
        }
        else if ( choice==3 && box[3]=='3'){
            box[3]=sign;
        }
        else if( choice==4 && box[4]=='4'){
        box[4]=sign;
        }
        else if ( choice==5 && box[5]=='5'){
            box[5]=sign;
        }
        else if ( choice==6 && box[6]=='6'){
            box[6]=sign;
        }
        else if ( choice==7 && box[7]=='7'){
            box[7]=sign;
        }
        else if ( choice==8 && box[8]=='8'){
            box[8]=sign;
        }
        else if( choice==9 && box[9]=='9'){
            box[9]=sign;
        }
        else {
            printf("Your move is invalid. Please Try Again\n");
            player=player-1;
            getch();
        }
        i=check_for_winner();
        player++;

    }
     while (i==-1);

    Game_Board();
    if(i==1)
    {
        printf("Player %d Won The Match",player=player-1);
    }
    else{
        printf("-----Match Draw-----");
    }
    }
    else if(start=='E')
    {
        return 0;
    }
    getch();


}
void Game_Board()
{
    printf("                           Player 1 (O) --- Player 2 (X)\n\n\n");
    printf("                                        |       |       \n");
    printf("                                    %c   |   %c   |   %c  \n",box[1],box[2],box[3]);
    printf("                                 _______|_______|_______\n");
    printf("                                    %c   |   %c   |   %c  \n",box[4],box[5],box[6]);
    printf("                                 _______|_______|_______\n");
    printf("                                    %c   |   %c   |   %c  \n",box[7],box[8],box[9]);
    printf("                                        |       |       \n");

}
int check_for_winner()
{
    if(box[1]==box[2] && box[2]==box[3])
    {
        return 1;
    }
    else if(box[4]==box[5] && box[5]==box[6])
    {
        return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }

    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
        return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {

        return 1;
    }
    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[3] == box[5] && box[5] == box[7])
    {
        return 1;
    }
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
        != '7' && box[8] != '8' && box[9] != '9')
   {
        return 0;
   }
      else
    {
        return  -1;

    }
}
