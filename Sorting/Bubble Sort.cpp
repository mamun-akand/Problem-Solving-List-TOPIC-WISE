#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
               swap(arr[j], arr[j+1]);
        }
    }  
}

int main(){
   
   int n = 6;
   int ara[6] = {11, 24, 23, 13, 10, 23};
   
   bubble(ara, n);
   
   for(int i=0; i<n; i++){
      cout << ara[i] << " ";
   }
}

















