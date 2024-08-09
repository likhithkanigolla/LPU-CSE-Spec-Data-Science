#include<iostream>
using namespace std;
main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={9,8,7,6,5,4,3,2,1};
int C[3][3],r,c,k;

for ( r=0;r<3;r++)
{
    for( c=0;c<3;c++)
    {
        C[r][c]=0;
        for( k=0;k<3;k++)
        {
C[r][c]=C[r][c]+ a[r][k]*b[k][c];
        }
        cout<<"c["<<r<<"]["<<c<<"]= "<<C[r][c]<<"\t";
    }
cout<<endl;
}

}
