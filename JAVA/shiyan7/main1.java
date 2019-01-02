package shiyan7;

import java.util.*;
import java.lang.*;
/*使用日期类中的方法，编程实现求出从1949年10月1日至2010年8月15日之间的相隔天数。*/

public class main1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Calendar start = Calendar.getInstance();
		start.set(1949, 10, 1);

		Calendar end = Calendar.getInstance();
		end.set(2010, 8, 15);

		long diff = end.getTimeInMillis() - start.getTimeInMillis();
		long nd = 1000 * 24 * 60 * 60;
		long days = diff / nd;
		System.out.println("相隔天数是:" + days);
	}
}
