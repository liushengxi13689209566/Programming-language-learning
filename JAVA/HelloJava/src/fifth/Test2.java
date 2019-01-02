package fifth;

import java.util.*;
import java.lang.*;

/*（2）定义一个ClassName接口，接口中只有一个抽象方法getClassName（）；
 * 设计一个类Company，该类实现接口ClassName，
 * 其getClassName（）方法的功能是获取公司的名称；编写程序使用Company类。*/

/*1.接口是隐式抽象的，当声明一个接口的时候，不必使用abstract关键字。
2.接口中每一个方法也是隐式抽象的，声明时同样不需要abstract关键字。
3.接口中的方法都是公有的*/

public interface ClassName {
	public abstract String getClassName();
}

/*
 * 当类实现接口的时候，类要实现接口中所有的方法。否则，类必须声明为抽象的类。
 * 通过在class关键字前增加abstract修饰符，就可以将一个类定义成抽象类。抽象类不能被实例化
 */
class Company implements ClassName {

	public String getClassName() {
		return company_name;
	}

	private String company_name = "alibaba";
}

public class Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Company com = new Company();
		System.out.println("company_name= " + com.getClassName());
	}

}
