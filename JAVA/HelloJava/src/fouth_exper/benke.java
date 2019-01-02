package fouth_exper;

import java.util.*;
import java.lang.*;

public class benke extends Student {
	public benke(String name,int age,String ma,String deg) {
		super(name,age);
		major = ma ;
		degree = deg;
	}
	@Override
	public void study() {
		System.out.println("I'am a benke ,I'am studying !!!!!");
	}
	public void print() {
		super.print();
		System.out.print(" major= " + major + ", degree= " + degree);
	}
	private String major;
	private String degree;
}

