package fouth_exper;

import java.util.*;
import java.lang.*;

public class Graduate extends benke {
	public Graduate(String name, int age, String ma, String deg, String dir) {
		super(name, age, ma, deg);
		research_dir = dir;
	}

	@Override
	public void study() {
		System.out.println("I'am a Graduate ,I'am studying !!!!!");
	}

	public void print() {
		super.print();
		System.out.print(" research_dir= " + research_dir);
	}

	private String research_dir;

}
