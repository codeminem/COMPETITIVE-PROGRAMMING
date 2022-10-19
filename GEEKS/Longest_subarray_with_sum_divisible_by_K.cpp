//create mod_arr[] where mod_arr[i] stores (sum(arr[0]+arr[1]+...+arr[i])%k)
//create hash table containing (ele,i)
//ele represents element of mod_arr[],i represents elements first occurence in mod_arr[]
//traverse mod_arr[] from i=0 to n following these steps
#include<iostream>
#include <unordered_map>
using namespace std;

int LSWSDBK(int arr[],int n,int k){
    unordered_map<int,int> um;
    //mod_arr[i] stores (sum[0....i]%k)
    int mod_arr[n],max_len = 0;
    int curr_sum=0;
    //traverse arr[ ]and build up mod_arr[]
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        //to avoid negative sum taking modulo twice;
        mod_arr[i] = ((curr_sum%k)+k)%k;

        //if true the mod_arr[i] must be zero
        if(mod_arr[i] == 0){
            max_len=i+1;
        }
    }


}






int main()
{
    return 0;
}