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
    //Transpose
    cout<<"Transpose"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<matrix[j][i]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}

/*Sample Output: 
Enter number of rows and columns :
3
3
Enter the element of Matrix1[0][0] :
2
Enter the element of Matrix1[0][1] :
3
Enter the element of Matrix1[0][2] :
4
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
5
Enter the element of Matrix1[1][2] :
4
Enter the element of Matrix1[2][0] :
7
Enter the element of Matrix1[2][1] :
6
Enter the element of Matrix1[2][2] :
8
Matrix 1
2	3	4	
3	5	4	
7	6	8	
Transpose
2	3	7	
3	5	6	
4	4	8
*/
