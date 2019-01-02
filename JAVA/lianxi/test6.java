package lianxi;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.lang.*;

public class test6 {
	public static void prefix(String s1, String s2) {
		StringBuffer sb = new StringBuffer();
		int shortlen = s1.length() < s2.length() ? s1.length() : s2.length();

		for (int i = 0; i < shortlen; i++) {
			if (s1.charAt(i) == s2.charAt(i))
				sb.append(s1.charAt(i));
			else
				break;
		}
		if (sb.length() == 0)
			System.out.println("No common prefix");
		else
			System.out.println("The common prefix is " + sb);
	}

	public static void main(String[] args) throws IOException {
		StringBuffer sb1 = new StringBuffer();
		StringBuffer sb2 = new StringBuffer();
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String line = reader.readLine();
			if (line.equals("")) {
				break;
			}
			int i;
			for (i = 0; i < line.length(); i++)
				if (line.charAt(i) == ' ')
					break;
			prefix(line.substring(0, i - 1), line.substring(i + 1, line.length()));
		}
	}
}