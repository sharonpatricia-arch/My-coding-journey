bool isPalindrome(int x) 
    
{
    if(x<0)
    {
        return false;
    }
    int rev=0,rem, num=x;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
    return x==rev;
}
