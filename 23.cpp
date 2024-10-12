using namespace std;
#include <iostream>

int main()
{
    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arr2[10] = { 10,22,33,44,55,66,77,88,99,100 };
    //int* fd = arr;
    //int* poka = arr2;
    //for (int i = 0; i < 10; i++)
    //{
    //    *(poka + i) = *(fd + i);
    //    cout << *(poka + i) << endl;
    //}


    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int* poka = arr;
    //for (int i = 9; i >= 0; i--)
    //{
    //    
    //    cout << *(poka + i) << endl;
    //}



int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int arr2[10] = { 10,22,33,44,55,66,77,88,99,100 };
int* fd = arr;
int* poka = arr2;
for (int i = 0; i < 1; i++)
{
    
    for (int j = 9; j >= 0; j--)
    {
        *(poka + j) = *(fd + j);
        cout << *(poka + j) << endl;
    }
}


}

