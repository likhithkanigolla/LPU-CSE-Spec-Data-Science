#include<iostream.h>
main()
{

    int a,b,c;
    cin>>a>>b;

    try
    {
    if (b==0)
        throw 'z';
    else
        cout<<a/b;
    }

    catch(int i)
    {
        cout<<endl<<"division with zero is not possible";
    }

     catch(char i)
    {
        cout<<endl<<"division with char";

    }
}
