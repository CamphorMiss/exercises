class Solution {
public:
    bool Isugly(int num)
    {//���������������
        while(num%2==0)  num/=2;
        while(num%3==0)  num/=3;
        while(num%5==0)  num/=5;
        return (num==1)?true:false;
    }
    int GetUglyNumber_Solution(int index) {
    //  6=2*3    8=2*2*2   14=2*7
        if(index<=0) return 0;
        int i=0;
        for(int count=0;count<index;i++)//���ǵ�count������
            if(Isugly(i)) count++;
        return i;
    }
};
