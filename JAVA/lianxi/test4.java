package lianxi;

import java.util.*;
import java.lang.*;

public class test4 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int age;
		age = in.nextInt();
		Person p = new Person(age);
		age = in.nextInt();
		try {
			p.setAge(age);
		} catch (AgeException e) {
			System.out.println("B");
		} finally {
		}
	}
}

class Person {
	int age;

	public Person(int age) {
		this.age = age;
	}

	public void setAge(int age) throws AgeException {
		if (this.age <= age) {
			this.age = age;
			System.out.println("A");
		} else { 
			throw new AgeException();
		}
	}
}

class AgeException extends Exception {
}