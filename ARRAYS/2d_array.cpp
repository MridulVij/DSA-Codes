#include <iostream>
using namespace std;

class Solution
{
  //m - rows
  //n - columns

  int i,j,m=2,n=5;
  
  // Dynamic Memory Allocation - for Rows
  int **arr = new int*[m];

 public:
  void function()
  {
    // Dynamic Memory Allocation - for Columns
    for(i=0; i<m; i++)
      arr[i] = new int[n];

    //Taking input Elements from here
    for(i = 0; i < m; i++) {
      for(j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<m; i++) {
      for(j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
    }
  }


};

int main()
{
  Solution s;
  s.function();

return 0;
}