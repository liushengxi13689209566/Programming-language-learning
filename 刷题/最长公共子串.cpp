/* 题目描述
有两个字符串（可能包含空格）,请找出其中最长的公共连续子串,输出其长度。

输入描述:
给定两行字符串

长度在1000以内
输出描述:
输出这两个字符串的最长公共连续子串的长度
示例1
输入
复制
abcde
bcd
输出
复制
3
说明
 */
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 == 0 || len2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int>  vv();
    //短的一个
    cout << max << endl;
    return 0;
}
动态规划，思路和LCS差不多。dp原为二维数组，优化为一维。dp[i][j]表示以s1[i] 与 s2[j]为结尾的最大连续公共子串长度。

import java.util.*;
public class Main {
    private static final int MAX = 1005;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] s1 = sc.next().toCharArray();
        char[] s2 = sc.next().toCharArray();
        int[] dp = new int[MAX];
        int ans = 0;
        for (int i=0; i!=s1.length; i++) {
            for (int j=s2.length-1; j>=0; j--) {
                if (s1[i] == s2[j]) {
                    dp[j+1] = dp[j] + 1;
                    ans = Math.max(dp[j+1], ans);
                }
                else { dp[j+1] = 0; }
            }
        }
        System.out.println(ans);
    }
}
