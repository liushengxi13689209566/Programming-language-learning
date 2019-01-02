package fouth_exper;

import java.util.*;
import java.lang.*;

public class test {

	public static void main(String[] args) {
		Student st = new Student("小王",26);
		st.print();
		System.out.println();
		st.study();
		System.out.println();
		
		benke  ben = new benke("小张",28,"CS","CS_degree");
		ben.print();
		System.out.println();
		ben.study();
		System.out.println();
		
		Graduate gg = new Graduate("小刘",36,"艺术","艺术_degree","movie");
		gg.print();
		System.out.println();
		gg.study();
	}
}
