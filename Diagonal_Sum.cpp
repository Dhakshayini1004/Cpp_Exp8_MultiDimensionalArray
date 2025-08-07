/*Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    //Defining a Multi Dimensional Array
    int m,n;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>m;
    cin>>n;
    int matrix[m][n];
    
        // User Input
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            printf("Enter the element of Matrix1[%d][%d] :\n",i,j);
            cin>>matrix[i][j];
        }
    }
    // Printing Matrix
    cout<<"Matrix 1"<<endl;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    // Diagonal 1
    int diag1_sum = 0;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            if(i == j){
                diag1_sum += matrix[i][j];
            }
        }
    }
    cout<<"Diagonal 1 Sum :"<<diag1_sum<<endl;
    
    // Diagonal 2
    int diag2_sum = 0;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            if(j == n - 1 - i){
                diag2_sum += matrix[i][j];
            }
        }
    }
    cout<<"Diagonal 2 Sum :"<<diag2_sum<<endl;
    return 0;
}

/*Sample Output:
Enter number of rows and columns :
3
3
Enter the element of Matrix1[0][0] :
4
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[0][2] :
55
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
2
Enter the element of Matrix1[1][2] :
6
Enter the element of Matrix1[2][0] :
2
Enter the element of Matrix1[2][1] :
6
Enter the element of Matrix1[2][2] :
2
Matrix 1
4	2	55	
3	2	6	
2	6	2	
Diagonal 1 Sum :8
Diagonal 2 Sum :59
*/
