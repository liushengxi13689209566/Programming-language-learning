package lianxi;

import java.util.*;
import java.lang.*;
import java.math.BigInteger;

public class test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int tt = input.nextInt();

		// Long.MAX_VALUE 转换为 BigInteger
		BigInteger big = new BigInteger(String.valueOf(Long.MAX_VALUE));

		System.out.println("start......");

		int count = 3;
		while (count != 0) {
			/*
			 * BigInteger mod(BigInteger m) This method returns a BigInteger whose value is
			 * (this mod m).
			 */
			// intValue() 将BigInteger 转为 int
			if (big.mod(BigInteger.valueOf(tt)).intValue() == 0) {
				count--;
				System.out.println(big);
			}
			/* BigInteger ONE： BigInteger的常量 1 */
			big = big.add(BigInteger.ONE); //相当于给 BigInteger+1
		}
		System.out.println("end.......");
	}
}
