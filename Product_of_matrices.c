/*
Given 2 matrices, find the product.

Input Format
First line of input contains T - number of test cases. 
First line of each test case contains N1, M1 - size of the 1st matrix.
Its followed by N1 lines each containing M1 intergers - elements of the 1st matrix.
The next line contains N2, M2 - size of the 2nd matrix. 
Its followed by N2 lines each containing M2 intergers - elements of the 2nd matrix. 
Note that M1 = N2.

Constraints
1 <= T <= 100
1 <= N1,M1,N2,M2 <= 50
-100 <= mat[i][j] <= 100

Output Format
For each test case, print the resultant product matrix, separated by newline.

Sample Input 
2
2 2
1 2 
3 -1 
2 3
1 -2 3 
2 3 -1 
2 3
27 29 53 
-28 49 -24 
3 4
23 52 -38 72 
-64 15 -59 -10 
-75 43 10 25 

Sample Output 
5 4 1 
1 -9 10 
-5210 4118 -2207 2979 
-1980 -1753 -2067 -3106 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        
        int n1,n2,m1,m2;
        
        scanf("%d %d",&n1,&m1);
        int arr1[n1][m1];
        for(int j=0; j<n1; j++){
            for(int k=0; k<m1; k++){
                scanf("%d", &arr1[j][k]);
            }
        }
        
        scanf("%d %d",&n2,&m2);
        int arr2[n2][m2];
        for(int l=0; l<n2; l++){
            for(int m=0; m<m2; m++){
                scanf("%d", &arr2[l][m]);
            }
        }
        
        
        if(m1 == n2){
            int arr3[n1][m2];
            
            for(int n=0; n<n1; n++){
                for(int o=0; o<m2; o++){
                    arr3[n][o]=0;
                    for(int p=0; p<n2 ; p++){
                        arr3[n][o] += arr1[n][p]*arr2[p][o];
                    }
                    printf("%d ",arr3[n][o]);
                }
                printf("\n");
            }
            
            
        }
        
    }
    return 0;
}
