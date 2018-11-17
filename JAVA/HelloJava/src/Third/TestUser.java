package Third;

/*设计一个表示用户的User类，类中的变量有用户名、口令和记录用户个数的静态变量，
 * 定义类的3个构造方法（无参、为用户名赋值、为用户名和口令赋值）、
 * 设置用户名和口令的方法。定义测试类测试User类。*/

class User {
	private String username;
	private String password;
	static private int usercount = 0;

	public User() {
		username = "liushengxi";
		password = "123456";
		usercount++;
	}
	public User(String name) {
		username = name;
		password = "123456";
		usercount++;
	}
	public User(String name, String ps) {
		username = name;
		password = ps;
		usercount++;
	}
	public void Setusername(String name) {
		username = name;
	}

	public void Setpassword(String ps) {
		password = ps;
	}

	public String toString() {
		return " username : " + username + "  passwod : " + password + "  usercount : " + usercount;
	}
}

public class TestUser {
	public static void main(String[] args) {
		User test1 = new User();
		System.out.println(test1.toString());

		User test2 = new User("lucy");
		System.out.println(test2.toString());

		User test3 = new User("Jack", "789");
		System.out.println(test3.toString());

		test3.Setusername("God");
		System.out.println("使用了　Setusername ");
		System.out.println(test3.toString());

		test3.Setpassword("431740757");
		System.out.println("使用了　Setpassword ");
		System.out.println(test3.toString());
	}
}
