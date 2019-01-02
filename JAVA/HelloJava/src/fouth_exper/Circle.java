
/*设计一个Circle类，成员有半径r，有求面积和周长的方法。再设计一个继承Circle类的Sphere球类，
 * 增加求球体表面积和体积的方法。 编写测试类测试该球体类。*/
package fouth_exper;

import java.util.*;
import java.lang.*;

public class Circle {

	public Circle(double tmp) {
		// TODO Auto-generated constructor stub
		r = tmp;
	}
	public double getlen() {
		return 2 * Math.PI * r;
	}
	public double getArea() {
		return Math.PI*r*r;
	}
	public double getr() {
		return r;
	}
	private double r;
}
