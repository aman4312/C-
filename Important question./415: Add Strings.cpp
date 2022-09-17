 string addStrings(string num1, string num2) {
        int p1=num1.length()-1;
        int p2=num2.length()-1;
        string sum;
        int carry=0;
        while(p1>=0 || p2>=0)
        {
            int sum2=carry+((p1>=0) ? (num1[p1]-'0') :0)+((p2>=0) ? (num2[p2]-'0') :0);
            sum.push_back(sum2%10+'0');
            carry=sum2/10;
            p1--;
            p2--;
        }
        if(carry>0)sum.push_back(carry+'0');
        reverse(sum.begin(),sum.end());
        return sum;
    }
        
