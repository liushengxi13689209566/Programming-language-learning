package Main;

import java.util.*;
import java.lang.*;

class Point {
	public double x;
	public double y;

	public Point(double x_arg, double y_arg) {
		x = x_arg;
		y = y_arg;
	}

	public Point() {
		this(0, 0);
	}

	public double cal_distence() {
		return Math.sqrt(x * x + y * y);
	}
}

class Line {
	private Point PointX;
	private Point PointY;

	public Line(double x_x, double x_y, double y_x, double y_y) {
		PointX = new Point(x_x, x_y);
		PointY = new Point(y_x, y_y);
	}

	public Line() {
		this(0, 0, 0, 0);
	}

	/* 计算线段长度方法 */
	public double length() {
		return Math.sqrt(Math.pow((PointX.x - PointY.x), 2) + Math.pow((PointX.y - PointY.y), 2));
	}

	/* 判断线段是否水平方法 */
	public boolean shuiping() {
		if (PointX.y == PointY.y)
			return true;
		else
			return false;
	}

	/* 判断是否为垂直线段的方法 */
	public boolean chuizhi() {
		if (PointX.x == PointY.x)
			return true;
		else
			return false;
	}

	/* 计算线段的斜率方法(默认排除斜率不存在的情况) */
	public double xielv() {
		return (PointX.y - PointY.y) / (PointX.x - PointY.x);
	}

	/* 计算线段的中点方法 */
	public String zhongdian() {
		return "[" + (PointX.x + PointY.x) / 2 + "," + (PointX.y + PointY.y) / 2 + "]";
	}
}

public class Main {
	public static void main(String[] args) {
		Line t1 = new Line(2, 3, 1, 1);
		System.out.println("坐标点为（2,3）,（1,1）的线段的距离长是：" + t1.length());
		System.out.println("坐标点为（2,3）,（1,1）的线段水平吗? ：" + t1.shuiping());
		System.out.println("坐标点为（2,3）,（1,1）的线段垂直吗? ：" + t1.chuizhi());
		System.out.println("坐标点为（2,3）,（1,1）的线段斜率是 ：" + t1.xielv());
		System.out.println("坐标点为（2,3）,（1,1）的线段中点是 ：" + t1.zhongdian());

		Line t2 = new Line(6, 3, 9, 3);
		System.out.println("坐标点为（6,3）,（9,3）的线段水平吗? ：" + t2.shuiping());

		Line t3 = new Line(6, 5, 6, 4);
		System.out.println("坐标点为（6,5）,（6,4）的线段垂直吗? ：" + t3.chuizhi());

	}

}
