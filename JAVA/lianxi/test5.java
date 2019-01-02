package lianxi;

import java.util.*;
import java.lang.*;

/*1.接口是隐式抽象的，当声明一个接口的时候，不必使用abstract关键字。

2.接口中每一个方法也是隐式抽象的，声明时同样不需要abstract关键字。

3.接口中的方法都是公有的*/

interface IShape { // 接口
	// 抽象方法 求面积
	public abstract double getArea();

	// 抽象方法 求周长
	public abstract double getPerimeter();
}

class RTriangle implements IShape {

	public RTriangle(double a, double b) {
		this.a = a;
		this.b = b;
	}

	public double getArea() {
		return a * b / 2.0;
	}

	public double getPerimeter() {
		return a + b + (Math.sqrt(a * a + b * b));
	}

	private double a;
	private double b;
}

public class test5 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		double a = input.nextDouble();
		double b = input.nextDouble();
		RTriangle rtt = new RTriangle(a, b);
		System.out.printf("%.4f\n", rtt.getArea());
		System.out.printf("%.4f\n", rtt.getPerimeter());
	}

}
