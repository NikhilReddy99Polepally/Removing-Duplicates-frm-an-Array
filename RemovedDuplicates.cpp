#include<iostream>
#include<stdlib.h>
#include <ctime>   
#include<math.h> 

using namespace std;

int main()
{  
      float start_s = clock();
      int n;
  
       n= rand()%88;
       
        int a[n];
               
       cout<<"Size of Array is : "<<n<<endl;
       
       cout<<"Array elements are : ";
       
       for(int i=0;i<n;i++)
       {
          a[i] = rand()%10;
          
          cout<<a[i]<<" ";
       }
     cout<<endl;
   
       for(int j=1;j<n;j++)
       {
          for(int k=0;k<j;k++)
          {   
               if(a[j] == a[k])   a[j] = 'a';               
          }          
       }
       
    cout<<"Unique numbers are : ";
    
       for(int i=0;i<n;i++)
       {
           if(a[i] != 'a')  cout<<a[i]<<" ";
       }
       
    cout<<endl;
    
    float stop_s = clock();
    
    cout  << "Time is : "<<(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<endl;
    
          return 0;

}
