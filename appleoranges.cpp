void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int apple = 0; 
    int orange = 0;
    if(a<s && s<t && t<b)
    {
       int m = apples.size();
       int n = oranges.size();
        
       for (int i=0; i<m; i++)
       {
           apples[i] = apples[i]+a; 
           if(apples[i]>=s && apples[i]<=t)
           {
               apple = apple+1; 
           }
           else {
           continue;
           }
       } 
       
       for(int j=0; j<n; j++)
       {
           oranges[j] = oranges[j]+b; 
           if(oranges[j]>=s && oranges[j]<=t)
           {
               orange = orange+1; 
           }
           
           else {
           continue; 
           }
       }
    }
    
    cout<<apple<<endl<<orange; 
    
}
