#include <iostream>
using namespace std;
#define SIZE 5
int maze[SIZE][SIZE]=
{
  {1,1,0,1,0},
  {0,0,0,0,0},
  {1,0,1,0,1},
  {0,0,1,0,0},
  {0,1,0,0,1}
};
int solution[SIZE][SIZE];
#funtion to print solution matrix
void printsolution()
{
  int i,j,cost=0;
  for(i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE;j++)
    {
      printf("%d\t",solution[i][j]);
      if(solution[i][j]==1)
      {
        cost++;
      }
    }
    printf("\n\n");
  }
  printf("cost of this path is: %d",cost);
}

#funtion to solve the maze using backtracking

int solvemaze(int r,int c)
{
  #if destination is reached maze solved then destination is top right
  corner(maze[0][SIZE-1] if((r==0) && (c==SIZE-1))
         {
           solution[r][c] = 1;
           return 1;
         }
         #checking if we can visit the cell
         if(r>=0 && c>=0 && r<SIZE && c<=SIZE && solution[r][c] == 0 && maze[r][c] == 0)
         {
           solution[r][c] = 1;
           #going down
           if(solvemaze(r+1,c))
             return 1;
           #going right
           if(solvemaze(r,c+1))
             return 1;
           #going up
           if(solvemaze(r-1,c))
             return 1;
           #going left
           if(solvemaze(r,c-1))
             return 1;
           #backtracking
           solution[r][c]=0;
           return 0;
         }
         return 0;
         }
         int main()
         //Elemets of solution matrix 0
         {
           for(i=0;i<SIZE;i++)
           {
             for(j=0;j<SIZE;j++)
             {
               solution[i][j] = 0;
             }
           }
           if(solvemaze(SIZE-1,0))
             printsolution();
           else
             printf("No Solution\n");
           return 0;
         }
  
         
    
