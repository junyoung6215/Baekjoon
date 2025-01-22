//N*M 크기의 두 행렬 A,B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성 하시오.
#include <iostream>
using namespace std;

int main()
{
    //Getting Matrix size
    int N,M;
    cin>>N>>M;
    int ** A=new int*[N];//행 포인터 배열
    int **B=new int*[N];

    for(int i=0;i<N;i++)//각 행의 열 포인터 배열
    {
        A[i] = new int[M];
        B[i]= new int[M];
    }
//Matrix A input
for (int i=0;i<N;i++){
    for(int j=0; j<M;j++)
    cin >>A[i][j];  
}
//Matrix B input
for (int i=0;i<N;i++){
    for(int j=0; j<M;j++)
    cin >>B[i][j];  
}
//printing output

for (int i=0;i<N;i++){
    for(int j=0; j<M;j++){
    cout<<A[i][j]+B[i][j]<<" "; 
}
cout<<endl;

}
//Releasing Memories
for(int i=0;i<N;i++){
    delete[] A[i];
    delete[] B[i];
}
delete[] A;
delete[] B;

return 0;
}