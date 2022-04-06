#include<bits/stdc++.h>
using namespace std;

string player1,player2;
int p1,p2,p3,p4,p5,p6,p7,p8,p9;

void conditions2(int p,char xo)
{
    if(p==1)
        p1=xo;
    else if(p==2)
        p2=xo;
    else if(p==3)
        p3=xo;
    else if(p==4)
        p4=xo;
    else if(p==5)
        p5=xo;
    else if(p==6)
        p6=xo;
    else if(p==7)
        p7=xo;
    else if(p==8)
        p8=xo;
    else if(p==9)
        p9=xo;
}

void tic_tac_toe_playername(void)
{
    char cont[1];
    nameentry:
    printf("\nEnter the name of player 1:");
    cin>>player1;
    printf("Enter the name of player 2:");
    cin>>player2;
    cout<< "So- Player 1 is "<<player1<<" and he/she will give x\n    Player 2 is "<<player2<<" and he/she will give y\n";
    printf("Sure?(Y/N)");
    cin>>cont;
    if (cont=="N" || cont=="n")
    {
        system("cls");
        goto nameentry;
    }
    else
    {
        system("cls");
        printf("\nDone!\nPress any key to start the game\n");
        system("pause");
        system("cls");
    }
}

int conditions(void)
{
    if(p1==p5 && p5==p9)
    {
        if(p1=='X')
            return 1;
        else if(p1=='O')
            return 2;
    }
    if(p1==p2 && p2==p3)
    {
        if(p1=='X')
            return 1;
        else if(p1=='O')
            return 2;
    }
    if(p1==p4 && p4==p7)
    {
        if(p1=='X')
            return 1;
        else if(p1=='O')
            return 2;
    }
    if(p2==p5 && p5==p8)
    {
        if(p2=='X')
            return 1;
        else if(p2=='O')
            return 2;
    }
    if(p3==p6 && p6==p9)
    {
        if(p3=='X')
            return 1;
        else if(p3=='O')
            return 2;
    }
    if(p4==p5 && p5==p6)
    {
        if(p4=='X')
            return 1;
        else if(p4=='O')
            return 2;
    }
    if(p3==p5 && p5==p7)
    {
        if(p3=='X')
            return 1;
        else if(p3=='O')
            return 2;
    }
    if(p7==p8 && p8==p9)
    {
        if(p7=='X')
            return 1;
        else if(p7=='O')
            return 2;
    }
    return 0;
}
void display(void)
{
    printf("\n\n\n\t\t\t %c|%c|%c\n",p1,p2,p3);
    printf("\t\t\t-------\n");
    printf("\t\t\t %c|%c|%c\n",p4,p5,p6);
    printf("\t\t\t-------\n");
    printf("\t\t\t %c|%c|%c\n",p7,p8,p9);
}

int main()
{
    system("cls");
    int x,count,input;
    p1='1';
    p2='2';
    p3='3';
    p4='4';
    p5='5';
    p6='6';
    p7='7';
    p8='8';
    p9='9';
    system("title TIC TAC TOE- by Mubasshir");
    system("color 74");
    tic_tac_toe_playername();
    count=0;
    while(1)
    {
        if(count>=9 || count ==9)
            break;
        display();
        if(count%2==0)
        {
            cout<<player1<<" Your turn to give X:";
            scanf("%d",&input);
            conditions2(input,'X');
            if(conditions()==1)
                break;
        }
        else if(count%2==1)
        {
            cout<<player2<<" Your turn to give O:";
            scanf("%d",&input);
            conditions2(input,'O');
            if(conditions()==2)
                break;
        }
        count++;
        system("cls");
    }
    system("cls");
    if(conditions()==1)
         cout<<"\nCongratulations! "<<player1<<" you have won the game.";
    else if(conditions()==2)
         cout<<"\nCongratulations! "<<player2<<" you have won the game.";
    else if(count ==9)
        printf("It's a draw!!!");
    display();
    printf("\n\n\n\n\n\n\n\n\n\n--------------------------------------------------------------------------Made by Mubasshir");
    return 0;
}
