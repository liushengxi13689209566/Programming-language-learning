package shiyan6;
/*（2）从键盘上输入一个字符串，统计这个字符串中字母、空格、数字和其他字符的个数。*/

import java.util.*;
import java.lang.*;

public class main2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.print("请输入一行字符：");
		String str = input.nextLine();
		count(str);

	}

	private static void count(String str) {
		ArrayList<Integer> array = new ArrayList<Integer>(Collections.nCopies(4, 0));
		for (int i = 0; i < str.length(); i++) {
			if (Character.isLetter(str.charAt(i)))
				array.set(0, array.get(0) + 1);

			else if (Character.isSpaceChar(str.charAt(i)))
				array.set(1, array.get(1) + 1);

			else if (Character.isDigit(str.charAt(i)))
				array.set(2, array.get(2) + 1);
			else
				array.set(3, array.get(3) + 1);
		}
		System.out.println("英文字母有" + array.get(0) + "个");
		System.out.println("空格有" + array.get(1) + "个");
		System.out.println("数字有" + array.get(2) + "个");
		System.out.println("其他字符有" + array.get(3) + "个");
	}
}
