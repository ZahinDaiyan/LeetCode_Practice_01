#include<iostrem>
using naemespace std;
int main(){
int target = 9;
int arr [5] = {4,2,5,3,1};
for (int i = 0; i < arr.size(); i++) {
   for (int  j = 0; j < arr.size(); j++) {
   if (target == arr[i] + arr[j]) {
    return [i,j];
   }
  }  
}
  return 0;
}
