#define ROW 3
#define COL 3

#include<stdio.h>//"game.h"��ͷ�ļ���"game.c"����Ϸ����
#include<stdlib.h>
#include<time.h>

//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
//�涨������Ϸ״̬��
//���Ӯ����*����
//����Ӯ����#����
//ƽ�֣���Q����
//��������C����
