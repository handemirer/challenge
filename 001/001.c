#include <stdio.h>

int grid[100][100]={0};
int stars[100]={0};
int stars_index=0;
int blob=0;
int m=0;
int n=0;

void sort() {
    for (int i = 0; i < stars_index; i++) {     
        for (int j = i+1; j < stars_index; j++) {     
           if(stars[i] > stars[j]) {    
               int temp = stars[i];    
               stars[i] = stars[j];    
               stars[j] = temp;    
           }     
        }     
    }    
}

void find_neighbor_number(int i,int j) {
    for(int k=-1;k<2;k++) {
        for(int l=-1;l<2;l++) {
            if (-1 < k+i && k+i < m && -1 < l+j && l+j < n) {
                if (grid[k+i][l+j]) {
                    grid[k+i][l+j] = 0;
                    stars[stars_index]++;
                    find_neighbor_number(k+i,l+j);
                }
            }
        }
    }
}

void find_star() {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (grid[i][j]==1) {
                blob++;
                grid[i][j] = 0;
                stars[stars_index]++;
                find_neighbor_number(i,j);
                stars_index += 1;
            }
        }
    }
}

int main() {
    /*
    m=3;
    n=10;
    grid[0][1]=1;
    grid[0][2]=1;
    grid[0][3]=1;
    grid[0][5]=1;
    grid[0][6]=1;
    grid[0][7]=1;
    grid[1][3]=1;
    grid[1][5]=1;
    grid[1][7]=1;
    grid[2][3]=1;
    grid[2][4]=1;
    grid[2][5]=1;
    */
    /*
    m=4;
    n=12;
    grid[1][0]=1;
    grid[1][2]=1;
    grid[1][4]=1;
    grid[1][8]=1;
    grid[1][9]=1;
    grid[1][10]=1;
    grid[2][5]=1;
    grid[2][9]=1;
    grid[3][0]=1;
    grid[3][4]=1;
    */
    
    m=3;
    n=11;
    grid[0][0]=1;
    grid[0][3]=1;
    grid[0][4]=1;
    grid[0][7]=1;
    grid[1][7]=1;
    grid[0][9]=1;
    grid[0][10]=1;
    grid[1][9]=1;
    grid[1][10]=1;
    
    find_star();
    printf(" %d",blob);
    sort();
    for (int i=0;i<stars_index;i++) {
        printf(" %d",stars[i]);
    }
    
    return 0;
}