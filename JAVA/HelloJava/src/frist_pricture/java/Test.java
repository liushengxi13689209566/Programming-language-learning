/*编程求一元二次方程ax2+bx+c=0的实数根。系数a、b、c从键盘输入。*/

package frist_pricture.java;

import java.util.Scanner;
import java.lang.Math;

public class Test {
	public static void main(String[] args) {
		double a, b, c;
		Scanner input = new Scanner(System.in);
		System.out.println("输入系数 a :");
		a = input.nextDouble();
		if (a == 0) {
			System.out.println("系数输入错误，退出系统重试～_～");
			return;
		}
		System.out.println("输入系数 b :");
		b = input.nextDouble();
		System.out.println("输入系数 c :");
		c = input.nextDouble();

		int tt = (int)(b * b - 4 * a * c);
		if (tt < 0) {
			System.out.println("对不起，无解");
		} else if (tt == 0) {
			System.out.println("只有一个解：" + -b / 2 * a);
		} else {
			System.out.println("一元二次方程 ax2+bx+c=0 有两个实数根：");
			System.out.println((-b + Math.sqrt(tt)) / (2 * a));
			System.out.println((-b - Math.sqrt(tt)) / (2 * a));
		}
	}
}
