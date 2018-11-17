package com.java;

import java.util.Arrays;

public class Test4 {
	// 完成 main 方法
	public static void main(String[] args) {
		int[] scores = { 89, -23, 64, 91, 119, 52, 73 };
		handle(scores);
	}

	// 定义方法完成成绩排序并输出前三名的功能
	public static void handle(int[] array) {
		Arrays.sort(array);
		int count = 3;
		for (int i = array.length - 1; i >= 0 && count != 0; i--) {
			if (array[i] >= 0 && array[i] <= 100) {
				count--;
				System.out.print(array[i]);
			}
		}
	}
}
