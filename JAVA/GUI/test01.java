package GUI;

import java.lang.*;
import java.util.*;

public class test01 {

	public  static void main(String []args){
		Scanner input = new Scanner(System.in);

		String str =  new String();
		ArrayList<String> test = new ArrayList<String>();
		
		
		while (true){
			str = input.nextLine();
			if(str.equals("###"))
				break;
			test.add(str);
		}
		
		Collections.sort(test);
		
		for (String tt : test)
			System.out.print(tt + " ");
	}
}
