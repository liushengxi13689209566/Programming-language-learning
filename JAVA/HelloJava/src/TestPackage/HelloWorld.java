package TestPackage;

import java.util.Scanner;

// 判断两个数组是否重复
public class HelloWorld {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("请输入数组个数：");
		int n = in.nextInt();
		int[] a = new int[n];
		int[] b = new int[n];
		System.out.println("请输入第一个数组内容：");
		for (int i = 0; i < a.length; i++) {
			int z = in.nextInt();
			a[i] = z;
		}
		for (int i = 0; i < a.length; i++) {
			System.out.print(a[i] + " ");
		}
		System.out.println();
		System.out.println("请输入第二个数组内容：");
		for (int i = 0; i < n; i++) {
			int c = in.nextInt();
			b[i] = c;
		}
		for (int i = 0; i < b.length; i++) {
			System.out.print(b[i] + " ");
		}
		System.out.println();
		int j;
		for (j = 0; j < n; j++) {
			if (a[j] != b[j]) {
				System.out.println("两个数组不一样！");
				return ;
			}
		}
		if (j >= n) {
			System.out.println("两个数组一样！");
		}
	}

}
