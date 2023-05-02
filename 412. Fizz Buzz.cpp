///412. Fizz Buzz
/*
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i=1; i<=n; i++){
            ///vec.push_back() 新增元素至vector的尾端
            if (i%3 == 0 && i%5 == 0) ans.push_back("FizzBuzz");
            else if (i%5 == 0) ans.push_back("Buzz");
            else if (i%3 == 0) ans.push_back("Fizz");
            else ans.push_back(to_string(i));
            ///to_string 將數值轉化爲字串
        }
        return ans;
    }
};

/*
vec[i] - 存取索引值為 i 的元素值。
vec.push_back() - 新增元素至 vector 的尾端。
vec.pop_back() - 刪除 vector 最尾端的元素。
vec.clear() - 清空vector裡所有元素。
vec.size() - 取得 vector 的元素個數。
vec.begin() - 回傳一個 iterator，指向 vector 第一個元素。
vec.end() - 回傳一個 iterator，指向 vector 最尾端元素的下一個位置。
*/
