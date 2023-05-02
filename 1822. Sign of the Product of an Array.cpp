///1822. Sign of the Product of an Array
/*
There is a function signFunc(x) that returns:

>> 1 if x is positive.
>>-1 if x is negative.
>> 0 if x is equal to 0.

You are given an integer array nums.
Let product be the product of all values in the array nums.

Return signFunc(product).
*/
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0; //�p��t�ƥX�{������
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0) return 0; //�u�n���X�{�@��0�����n�@�w��0
            else if (nums[i]<0) count++; //�X�{�@���t�ƴN+1
        }
        if (count%2 != 0) return -1; //�p�G�t�Ƭ��_�ƭ�, ���n���t
        else return 1; //�Ϥ�����
    }
};
