#include <iostream>

using namespace std;

int main()
{



    string a,temp;
    int shift,j;
    cout <<"message:";
    getline(cin,a);
    cout <<"shift:";
    cin >>shift;
    temp=a;
    int i=0;
    while (i<a[i])
    {
        if((a[i]>=97) && (a[i]<=122))
        {
            a[i]=a[i+shift];

        }
        if((a[i]>=65) && (a[i]<=90))
        {
            a[i]=a[i+shift];
        }
        i++;
    }
    int c=0;
    while(c<shift)
    {
        j=a.length()-shift+c;
        a[j]=temp[c];
        c++;
    }
    cout <<"cipher:"<<a<<"\n";
    return 0;
}
