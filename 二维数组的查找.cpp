/*
题目描述
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/

/*
Time:2016-9-8 15:44:52
Author:CodingMengmeng
*/
#include <iostream>
#include <vector>
using namespace std;
/* 思路
* 矩阵是有序的，从左下角来看，向上数字递减，向右数字递增，
* 因此从左下角开始查找，当要查找数字比左下角数字大时。右移
* 要查找数字比左下角数字小时，上移
*/
class Solution {
public:
    bool Find(vector<vector<int> > array, int target)
    {
        /*二维数组的行数和列数*/
        int rowCount = array.size();
        int colCount = array[0].size();

        int i, j;//i指定行的变化,j指定列的变化

        //循环
        for (i = rowCount - 1, j = 0; i >= 0 && j<colCount;)
        {
            if (target == array[i][j])
                return true;

            if (target<array[i][j])
            {
                i--;
                continue;
            }

            if (target>array[i][j])
            {
                j++;
                continue;
            }
        }
        return false;
    }
};
