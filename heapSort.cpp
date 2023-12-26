
class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int N, int i)  
    {
    int largest = i ;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if( left < N && arr[left]>arr[largest])
    {
        largest = left;
    }
    if( right < N && arr[right]>arr[largest])
    {
        largest = right;
    }
    
    if(largest != i )
    {
     swap(arr[largest],arr[i]);
     
        heapify(arr,N,largest);
    }
    }

   

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int N)
    {
       for(int i = N/2 - 1 ; i>=0 ; i--)
       {
           heapify(arr,N,i);
       }
       
       for(int i = N-1 ; i>0 ; i--)
       {
           swap(arr[0],arr[i]);
           heapify(arr,i,0);
       }
    }
};

