package Third;

import java.util.*;
import java.lang.*;

class Rectangle {
	private int wide;
	private int high;

	public Rectangle() { // 将矩形的宽和高都设为1
		wide = high = 1;
	}

	public Rectangle(int w, int h) {
		wide = w;
		high = h;
	}

	public Rectangle(Rectangle r) {
		this.wide = r.wide;
		this.high = r.high;
	}

	public double getArea() { // 计算矩形面积
		return wide * high * 1.0;
	}

	public double getPerimeter() { // 计算矩形周长
		return 2.0 * (wide + high);
	}

	public int getWidth() { // 返回矩形的宽
		return wide;
	}

	public int getHeight() {// 返回矩形的长
		return high;
	}

	public String toString() { // 以格式“矩形（w，h）”返回当前矩形的字符串表示
		return " 矩形（" + wide + "," + high + ") ";
	}

	public boolean equals(Rectangle r) {// 测试矩形是否相等
		if ((this.wide == r.wide) && (this.high == r.high))
			return true;
		else
			return false;
	}
}

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle test1 = new Rectangle();
		System.out.println(test1.toString());

		Rectangle test2 = new Rectangle(2, 3);
		System.out.println(test2.toString());
		System.out.println("长：" + test2.getHeight() + "　宽：" + test2.getWidth());
		System.out.println("周长：" + test2.getPerimeter() + "　面积　：" + test2.getArea());

		Rectangle test3 = new Rectangle(2, 3);
		if (test3.equals(test2))
			System.out.println("test3 and test2 is same ");
		else
			System.out.println("test3 and test2 is not same ");

		Rectangle test4 = new Rectangle(6, 5);
		if (test4.equals(test2))
			System.out.println("test4 and test2 is same ");
		else
			System.out.println("test4 and test2 is not same ");

	}

}
