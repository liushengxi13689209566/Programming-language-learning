package com.java;

import java.util.Scanner;

public class Test2 {
	public static void main(String[] args) {
		int classNum = 3;
		int stuNum = 4;
		double sum = 0;
		Scanner input = new Scanner(System.in);
		for (int i = 1; i <= classNum; i++) {
			sum = 0;
			System.out.println("*******请输入第" + i + "个班级的成绩*******");
			for (int j = 1; j <= stuNum; j++) {
				System.out.println("请输入第" + j + "个学生的成绩");
				int score = input.nextInt();
				sum += score;
			}
			System.out.println("the result is :" + sum / stuNum);
		}
	}
}
