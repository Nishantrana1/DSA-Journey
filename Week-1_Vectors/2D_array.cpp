#include<iostream>
using namespace std;
int main(){
    int matrix[4][2]={{1,2},{3,4},{5,6},{7,8}};
    int row=4;
    int col=2;
    int target = 6;
  
   /*
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        
    if(matrix[i][j]==target){
        cout<<i<<j<<endl;
    }
}

}
*/
int sum=0;
int high=0;
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum=sum+matrix[i][j];
       
        }
         if(high<sum){
            high=sum;
        
    }
    sum=0;
}
cout<<high;


}


