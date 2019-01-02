package fifth;

import java.util.*;
import java.lang.*;

/*定义员工类，具有姓名、年龄、性别属性，并具有构造方法和显示数据的方法。
 * 再定义管理者类，继承员工类，并有自己的属性职务和年薪。编写测试类测试这两个类。*/
class Employee {

	public Employee(String n, int a, String s) {
		name = n;
		age = a;
		sex = s;
	}

	public void print() {
		System.out.println("name= " + name + "\n age= " + age + "\n sex=" + sex);
	}

	private String name;
	private int age;
	private String sex;

}

class Manager extends Employee {

	public Manager(String n, int a, String s, String j, int m) {
		super(n, a, s);
		job = j;
		money = m;
	}

	public Manager(String j, int m) {
		super("liushengxi", 18, "男");
		job = j;
		money = m;
	}

	public void print() {
		super.print();
		System.out.println("job= " + job + "\n money= " + money);

	}

	private String job;
	private int money;
}

public class Test1 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee em = new Employee("Jony J", 15, "男");
		em.print();
		System.out.println();

		Manager ma1 = new Manager("Sony ", 24, "女", "银行", 250);
		ma1.print();
		System.out.println();

		Manager ma2 = new Manager("大神", 100000000);
		ma2.print();
		System.out.println();
	}
}
