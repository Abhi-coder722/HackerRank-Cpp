
#include <iostream>

using namespace std;

int main()
{
    int size;
    int *ptr;
    cout<<"Enter number of values you want to store";
    cin>>size;
    ptr=new int [size];
    for (int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"Values are:";
        for (int i=0;i<size;i++){
        cout<<ptr[i];
    }

    return 0;
}