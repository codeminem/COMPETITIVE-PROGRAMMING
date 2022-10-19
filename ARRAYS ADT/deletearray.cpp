#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {
        cout<<(arr.A[i]);
    }
}
void Insert(struct Array *arr,int index,int x)
{   int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }

}
void Append(struct Array *arr,int x)//call by address
{
    if(arr->length<arr->size) //checking for empty space
    arr->A[arr->length++]=x;
}
int Delete(struct Array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<=arr->length-1)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
            arr->length--;
            return x;
        }
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5}; 
    
    printf("%d\n",Delete(&arr,1));
    Display(arr);
    return 0;
}