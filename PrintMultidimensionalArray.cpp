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
    int array[m][n];
    
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
            printf("Enter the element[%d][%d] :\n",i,j);
            cin>>array[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}

/*Enter number of rows and columns :
3
2
Enter the element[0][0] :
33
Enter the element[0][1] :
44
Enter the element[1][0] :
55
Enter the element[1][1] :
66
Enter the element[2][0] :
77
Enter the element[2][1] :
88
33	44	
55	66	
77	88	
*/
