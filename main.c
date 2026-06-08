#include<stdio.h>
#define HEIGHT 20
#define WIDTH 40
char canvas[HEIGHT][WIDTH];
void intializeCanvas()
{
  int i,j;
for(i=0;i<HEIGHT;i++)
{
for(j=0;j<WIDTH;j++)
{
canvas[i][j]='_';
}
}
}
void drawLine(int row,int startColumn, int end column)
{
  int j;
for(j=startcolumn;j<=endcolumn;j++)
{
  canvas[row][j]='*;
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

