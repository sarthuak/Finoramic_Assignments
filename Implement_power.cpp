long long int func(int base,int n,int d)
{
    if(n==0)
        return 1;
    if(n==1)
        return base;
        
    if(n%2==0)
        return (func(base,n/2,d)%d*func(base,n/2,d)%d)%d;
        
    else
        return (base*func(base,n-1,d)%d)%d;
    
    
    
}

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  if(x==0)
    return 0;
 
  int base  = x%d;
  bool flag=0;
  long long int ans;
  
    if(base<0)
      {  
            //cout<<"$";
        base = abs(base);    
        if(n&1)
            flag = 1;
          
      }
        
    ans = func(base,n,d);
  
   if(flag)
    ans = d-(int)ans;


    return ans;
    
    
    
}