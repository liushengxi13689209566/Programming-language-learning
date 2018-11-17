
package com.java;

import java.util.Arrays;
import java.util.Random;

public class Test3 {
	public static void main(String[] args) {
		// 创建对象，对象名为hello
		Test3 hello = new Test3();
		// 调用方法并将返回值保存在变量中
		int[] nums = hello.getArray(8);
		// 将数组转换为字符串并输出
		System.out.println(Arrays.toString(nums));
	}

	/*
	 * 功能：创建指定长度的int型数组，并生成100以内随机数为数组中的每个元素赋值 定义一个带参带返回值的方法，通过参数传入数组的长度，返回赋值后的数组
	 */
	public int[] getArray(int length) {
		// 定义指定长度的整型数组
		int[] nums = new int[length];
		// 循环遍历数组赋值
		for (int i = 0; i < length; i++) {
			// 产生一个 100 以内的随机数，并赋值给数组的每个成员
			nums[i] = (int)(Math.random()*100);
		}
		return nums; // 返回赋值后的数组
	}
}