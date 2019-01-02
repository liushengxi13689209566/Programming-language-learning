package shiyan_8;

import java.util.*;
import java.lang.*;

import javax.swing.*; //引入swing包

/*在JFrame窗口中，加入一个内容面板，在该面板上加入一个标签、一个按钮、一个文本框，
 * 使用FlowLayout布局。设置标签、按钮、文本框的前景色、背景色、字体等属性。*/

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class test1 {
	public static void main(String[] args) {
		JFrame frame = new JFrame();
		JLabel jt = new JLabel(" Try your best ?"); // 标签
		Font f = new Font("楷体", Font.BOLD, 26); //加粗，楷体
		jt.setFont(f);
		jt.setForeground(Color.RED); // 设置标签上的文字的颜色，默认颜色是黑色
		jt.setOpaque(true); // 此句是重点，设置背景颜色必须先将它设置为不透明的，因为默认是透明的。。。
		jt.setBackground(Color.YELLOW); // 设置标签的背景颜色

		JButton yes = new JButton("yes!");// 创建按钮
		Font butFon = new Font("宋体", Font.BOLD, 16); //宋体，正常
		yes.setFont(butFon);
		yes.setForeground(Color.BLACK);
		
        JTextField txt = new JTextField(" 那就一定要加油哦！");//文本框
        Font txt_fon = new Font("楷体", Font.PLAIN, 12); //正常，楷体
		txt.setFont(txt_fon);
		txt.setForeground(Color.BLUE);

		FlowLayout flow = new FlowLayout();// 创建流式布局
		frame.setLayout(flow);
		frame.add(jt);
		frame.add(yes);
		frame.add(txt);
		frame.setBounds(300, 300, 200,150 );
		frame.setVisible(true);
		
		// 添加按钮的点击事件监听器
        yes.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // 获取到的事件源就是按钮本身
            	System.exit(0);
            }
        });
	}
}
