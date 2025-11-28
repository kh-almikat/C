#include <stdio.h>

char board[3][3] = {'1','2','3','4','5','6','7','8','9'};

void draw(){
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf(" %c ", board[i][j]);
        printf("\n");
    }
}

int checkWin(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return 1;
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]) return 1;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return 1;
    return 0;
}

int main(){
    int pos, turn=0;
    char mark;
    draw();
    while(1){
        mark = (turn%2==0)?'X':'O';
        printf("Player %d, enter position: ",(turn%2)+1);
        scanf("%d",&pos);
        board[(pos-1)/3][(pos-1)%3]=mark;
        draw();
        if(checkWin()){ printf("Player %d wins!\n",(turn%2)+1); break; }
        turn++;
        if(turn==9){ printf("Draw!\n"); break; }
    }
}

