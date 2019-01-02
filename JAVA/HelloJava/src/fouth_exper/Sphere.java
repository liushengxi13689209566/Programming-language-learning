package fouth_exper;

import java.util.*;
import java.lang.*;

public class Sphere extends Circle
{

	public Sphere(double r) {
		// TODO Auto-generated constructor stub
		super(r);
	}
	public double get3Area() {
		return 4*getArea();
	}
	public double get3volume() {
		return (3.0/4)*getArea()*getr();
	}
}
