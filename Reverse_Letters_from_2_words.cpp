#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    system("color f1");
           string w1,w2;
           char c;
           int minsize;
           int i;
           cout<<"Write name1 : ";
           cin>>w1;
           cout<<"Write name2 : ";
           cin>>w2;
    
           if (w1.size()>=w2.size())
           {
                   minsize=w2.size();
           }else{
                   minsize=w1.size();
           }
           
           for (i=1; i<minsize; i=i+2)
           {
                   c=w1[i];
                   w1[i]=w2[i];
                   w2[i]=c;
           }
           
           cout<<endl<<w1<<endl<<w2<<endl<<endl;
    
    system("pause");
}
