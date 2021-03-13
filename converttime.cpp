string timeConversion(string s) {
    int n = s.length(); 
    
    string newtime; 
    int time; 
    string temptime;   
    if (s[n-2]=='P')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            for(int q=0; q<8; q++)
            {
                newtime=newtime+s[q];  
            }
        }
        
        else {
            for (int j=0; j<=1; j++){
            temptime = temptime+s[j];  
            } 
            stringstream geek(temptime);
            stringstream geek2(newtime); 
            geek>>time; 
            
            time = time+12; 
            geek2<<time; 
            geek2>>newtime; 
            
            for(int k=2; k<8; k++)
            {
                newtime = newtime+s[k]; 
            }
        }
    }
    
    else
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            newtime = "00";  
            for(int q=2; q<8; q++)
            {
                newtime=newtime+s[q]; 
            }
        }
        
        else
        {
           for(int q=0; q<8; q++)
            {
                newtime=newtime+s[q]; 
            } 
        }
    }
    
    return newtime;
    
    
}
