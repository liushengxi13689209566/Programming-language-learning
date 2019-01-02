package fouth_exper;

import java.util.*;
import java.lang.*;

public class Student {

	public Student(String na, int ag) {
		name = na;
		age = ag;
	}

	public void study() {
		System.out.println("I'am a student ,I'am studying !!!!!");
	}

	public void print() {
		System.out.print("name= " + name + " ,age= " + age);
	}

	private String name;
	private int age;

}
