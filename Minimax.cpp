void miniMaxSum(vector<int> arr) {

    int n = arr.size(); 
    long temp =0; 
    for(int i=0;i<n;i++)
    {        
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp  =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long max = 0; 
    long min = 0; 
    
    for(int i=0; i<=n-2; i++)
    {
        min = min + arr[i]; 
    }
    for (int j=(n-1); j>=1; j--)
    {
        max = max + arr[j]; 
    }
    
    cout<<min<<" "<<max<<endl; 
    
}
