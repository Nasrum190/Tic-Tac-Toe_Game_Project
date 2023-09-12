#include<stdio.h>
#include<conio.h>
char box[10]={'o','1','2','3','4','5','6','7','8','9'};
void Game_Board()
{
    printf("                             Player 1 (O) --- Player 2 (X)\n\n\n");
    printf("                                        \x1b[36m|       |\x1b[0m       \n");
    printf("                                    %c   \x1b[36m|\x1b[0m   %c   \x1b[36m|\x1b[0m   %c  \n",box[1],box[2],box[3]);
    printf("                                \x1b[36m _______|_______|_______\x1b[0m\n");
    printf("                                    %c   \x1b[36m|\x1b[0m   %c   \x1b[36m|\x1b[0m   %c  \n",box[4],box[5],box[6]);
    printf("                                 \x1b[36m_______|_______|_______\x1b[0m\n");
    printf("                                    %c   \x1b[36m|\x1b[0m   %c   \x1b[36m|\x1b[0m   %c  \n",box[7],box[8],box[9]);
    printf("                                       \x1b[36m |       |\x1b[0m       \n");

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
int main()
{
    int player=1;
    int i,choice;
    char sign,start;
    printf("                          =================================\n");
    printf("\x1b[32m                            Welcome to My Tic-Tac-Toe Game\x1b[0m\n");
    printf("                          =================================\n\n");
    printf("1.Please Enter \x1b[32mS\x1b[0m to Start The Game\n2.Please Enter \x1b[31mE\x1b[0m for Exit From the Game\n");
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
    {   for(int a=1;a<=20;a++)
        {
            printf("_|*|_");
        }
        printf("\n\n\x1b[33mPlayer %d Won The Match\x1b[0m\n\n",player=player-1);
        for(int b=1;b<=20;b++)
        {
            printf("_|*|_");
        }
    }
    else{
        printf("\x1b[31m                                  -----Match Draw-----\x1b[0m");
    }
    }
    else if(start=='E')
    {
        return 0;
    }
    getch();


}
