/*Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    //Multi Dimensional Array
    int array[3][2];
    
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter the element[%d][%d] :\n",i,j);
            cin>>array[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<2; j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}

/*Sample Output: 
Enter the element[0][0] :
66
Enter the element[0][1] :
77
Enter the element[1][0] :
88
Enter the element[1][1] :
44
Enter the element[2][0] :
77
Enter the element[2][1] :
55
66	77	
88	44	
77	55
*/
