bool ispar(string x)
{
    
    stack<char>str;
    int n=x.size();
    if(n==0)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]=='{'||x[i]=='('||x[i]=='[')
        {
            str.push(x[i]);
        } 
        else
        {
            if(str.size()==0)
            {
                return false;
            }
            int t=str.top();
            str.pop();
            
            if(t=='{'&&(x[i]==']'||x[i]==')'))
            {
                return false;
            }
            if(t=='['&&(x[i]=='}'||x[i]==')'))
            {
                return false;
            }
            if(t=='('&&(x[i]==']'||x[i]=='}'))
            {
                return false;
            }
            
        }
    }
    if(str.size()>0)
    {
        return false;
    }
    return true;
    
    
}
