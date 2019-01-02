package lianxi_dump;

import java.util.*;
import java.lang.*;

public class test {

	public static void main(String[] args) {
	      Scanner input = new Scanner(System.in);

	      int size1 = input.nextInt();
	      int[] list1 = new int[size1];
	      // Enter values for list1
	      for (int i = 0; i < list1.length; i++)
	         list1[i] = input.nextInt();

	      int size2 = input.nextInt();
	      int[] list2 = new int[size2];
	      // Enter values for list2
	      for (int i = 0; i < list2.length; i++)
	         list2[i] = input.nextInt();
	      input.close();

	      if (equals(list1,list2)) {
	         System.out.println("Two lists are identical");
	      } else {
	         System.out.println("Two lists are not identical");
	      }
	   }

	public static boolean equals(int[] list1, int[] list2) {

	      if (list1.length != list2.length)
	         return false;

	      Arrays.sort(list1);
	      Arrays.sort(list2);
	      for (int i = 0; i < list1.length; i++)
	         if (list1[i] != list2[i])
	            return false;
	      return true;
	   }
}