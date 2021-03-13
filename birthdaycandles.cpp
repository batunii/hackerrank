int birthdayCakeCandles(vector<int> candles) {
    
    int n = candles.size(); 
    int refer = 0; 
    for (int i=0; i<n; i++)
    {
        if (refer<=candles[i])
        {
            refer = candles[i]; 
        }
        
        else {
        continue;
        }
    }
    
    int occur = 0; 
    for (int j=0; j<n; j++)
    {
        if (refer == candles[j])
        {
            occur = occur+1; 
        }
    }
    
    return occur; 
}
