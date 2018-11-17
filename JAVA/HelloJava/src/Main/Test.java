package Main;

class fraction {

	private int x;
	private int y;

	public fraction(int x_arg, int y_arg) {
		x = x_arg;
		y = y_arg;
	}

	public fraction() {
		this(0, 0);
	}

	public fraction fra_mul(fraction rfs) {
		this.x *= rfs.x;
		this.y *= rfs.y;
		return this;
	}

	public void prin() {
		System.out.println(x + "/" + y);
	}
}

public class Test {
	public static void main(String[] args) {
		fraction t1 = new fraction(2, 3);
		fraction t2 = new fraction(1, 3);
		t1.fra_mul(t2);
		t1.prin();
	}
}