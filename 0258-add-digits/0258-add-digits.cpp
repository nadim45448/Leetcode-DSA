class Solution {
public:
    int addDigits(int num) {
        //int sum=0;
        int cnt=0;
        while(num>=10)
        {
            int sum=0;
            while(num>0)
            {
                sum+=num%10;
                num/=10;
                //cnt++;

            }
            num=sum;
        }
      
        return num;
        
    }
};