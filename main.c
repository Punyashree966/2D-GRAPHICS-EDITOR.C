#include<stdio.h>
#include<math.h>
#define ROWS 10
#define COLS 20
char canvas[ROWS][COLS];
void intializeCanvas()
{
for(int i=0;i<ROWS;i++)
{
for(int j=0;j<COLS;j++)
{
canvas[i][j]='_';
}
}
}
void display()
{
for(int i=0;i<ROWS;i++)
{
for(int j=0;j<COLS;j++)
{
printf("%c",canvas[i][j]);
}
printf("\n");
}
}
void drawRectangle(int row,int col,int height,int width, char ch)
{
for(int i=col;i<col+width;i++)
{
canvas[row][i]=ch;
canvas[row+height-1][i]=ch;
}
  for(int i=row;i<row+height;i++)
    {
      canvas[i][col]=ch;
      canvas[i][col+width-1]=ch;
}
void drawLine(int row,int startCol, int end column,char ch)
{
  int i;
  if(row<0||row>=ROWS)
    return;
for(i=startCol;i<=endCol&&i<COLS;i++)
{
  if(i>=0)
  canvas[row][i]=ch;
    }
}
void displayCanvas()
{
  int i,j;
for(i=0;i<HEIGHT;i++)
{
for(j=0;j<WIDTH;j++)
{
printf("%c",canvas[i][j]);
}
print("\n");
}
}
int main()
{
  printf("====2D GRAPHICS EDITOR====\n");
initializeCanvas();
drawLine(5,10,30);
displayCanvas();
return 0;
}

