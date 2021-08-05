/*
each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums (Indexing method use nahi kar sakte) and uses only constant extra space.

Approach:

Use equations wali method later..

XOR for misssing as well as missing

EX: { 1, 3, 4, 5, 5, 6, 2 }  Rep => 5  Missing => 7

//first XOR
{ 1, 3, 4 ,6, 2 }

//second XOR (with {1,2,3,4,5,6,7})
{5,7}
    

*/


#include <bits/stdc++.h>
using namespace std;

void getTwoElements(int arr[], int size,int* x, int* y)
{
	int XOR1=0,XOR2=0,ans=0;
	
	for (int i = 0; i < size; i++) 
	{
		//duplicates jitne bhi hoge vo nullufy hue hoge ab sirf non repeating bache hai
        XOR1=XOR1^arr[i];
    }
    
    //ab apne ko pata hai ki each integer is in the range [1, n] inclusive. Inhi ke saath XOR lo and I will get answer
    for (int i = 0; i < size; i++) 
	{
		XOR2=XOR2^(i+1);    //i 0 se start hoga apne ko [1, n] ke saath nikaalna hai
    }
    
//our answer
ans=XOR1^XOR2;
cout<<ans;
}

/* Driver code */
int main()
{
    int arr[] = { 1, 3, 4, 5, 5, 6, 2 };
    
    //apne ouputs
    int* x = (int*)malloc(sizeof(int));
    int* y = (int*)malloc(sizeof(int));
    
    int n = sizeof(arr) / sizeof(arr[0]);
 
    getTwoElements(arr, n, x, y);
    cout << " The missing element is " << *x << " and the repeating"
         << " number is " << *y;
   
}
