#include<iostream>

void InsertionSort(int arr[],int n){

 for(int i=0;i<n;i++){

  int key=arr[i];

  int j=i-1;

    while(j>=0&&arr[j]>key){

       arr[j+1]=arr[j];
       j--;
}

   arr[j+1]=key;
}
}

int main(){

  int arr[5]={9,7,5,3,1};
  std::cout<<"the array before the InsertionSort\n";
  for(int i=0;i<5;i++)
  std::cout<<arr[i]<<" ";
  std::cout<<"\n";

  InsertionSort(arr,5);
  std::cout<<"the array after the InsertionSort\n";
  for(int i=0;i<5;i++)
  std::cout<<arr[i]<<" ";
  std::cout<<"\n";

  return 0;

  }
