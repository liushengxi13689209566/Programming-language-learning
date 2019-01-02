package lianxi;

import java.util.*;
import java.lang.*;

import java.util.Scanner;
import java.text.DecimalFormat;

interface Test {
    public abstract double getArea();

    public abstract double getPerimeter();
}

/*你写的代码将嵌入到这里*/
class RTriangle implements Test {

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

public class NEdge {
    public static void main(String[] args) {
        DecimalFormat d = new DecimalFormat("#.####");
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        Test r = new RTriangle(a, b);
        System.out.println(d.format(r.getArea()));
        System.out.println(d.format(r.getPerimeter()));
        input.close();
    }
}