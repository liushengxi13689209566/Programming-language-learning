package lianxi;

import java.util.*;
import java.lang.*;
import java.math.BigInteger;

public class test3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		BigInteger m = input.nextBigInteger();
		int n = input.nextInt();

		int temp = n;
		for (BigInteger i = m; temp > 0; i = i.add(BigInteger.ONE)) {
			if (isPrime(i)) {
				temp--;
				System.out.println(i);
			}
		}
	}
	public static boolean isPrime(BigInteger a) {
		return a.isProbablePrime(50);
	}
}
