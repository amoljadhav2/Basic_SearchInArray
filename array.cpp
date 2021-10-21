// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool find (int *arr, int sizeArr,int k)
{
    //int sizeArr = sizeof(arr)/sizeof(arr[0]);
    cout<<"\n Size Arr = "<<sizeArr;
    for (int j=0; j < sizeArr;j++)
    {
        cout<< "\n check with "<<arr[j]<< " with "<<k<<"\n";
     if(arr[j] == k)
        return true;
     
    }
    return false;
    
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int arr[]={7,9,11,13,1,3,5,6};
    int k []= {10/*,2,4,11, 7, 1, 5*/};
    int searchCnt = sizeof(k)/sizeof(k[0]);
    int searchCnt1 = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nCnt = "<<searchCnt<<"\n searchCnt1 = "<<searchCnt1;
    for(int i=0;i< searchCnt;i++)
    {
        std::cout<< "\n"<<k[i] <<" found = " <<find(arr,searchCnt1, k[i]);
     }   
     return 0;
}
