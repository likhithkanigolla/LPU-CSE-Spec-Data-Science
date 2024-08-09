 #include<iostream>
 using namespace std;

 class test
 { static int count;
 public:
   test()
    {
   count++;
   cout<<"object number"<< count<< "created"<<endl;
   }
  ~ test()
  {
  cout<<" Destructor msg: object number" << count <<" destroyed.."<<endl;
  count--;
}
};
int test::count;
int main()
{
 cout<< " inside main block"<<endl;
 cout<<": creating first object"<<endl;
test T1;

 { cout<<" Inside block 1"<<endl;
 cout<<"creating two more objects T2 and T3"<<endl;
 test T2, T3;
cout<<"Leaving block 1"<<endl;
}
cout<<"Back inside main"<<endl;
return 0;
}
