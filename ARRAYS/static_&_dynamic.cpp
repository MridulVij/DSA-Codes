#include <iostream>
using namespace std;

//Static = the size will not be changed

//dynamic = the size will change according to requirement

int main()
{
// Memory allocation & Variable Declaration
int i;
int *p = new int[5];
p[0] = 10;
p[1] = 20;


for(i=0; i<2; ++i){
 cout<<p[i]<<" ";
}

// Memory deallocation
delete []p;

return 0;
}