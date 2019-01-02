package shiyan_8;

import java.util.*;
import java.lang.*;

import java.awt.BorderLayout; //BorderLayout(边界布局)
import java.awt.GridLayout;//GridLayout(网格布局)
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

/*（2）使用Swing组件做一个登录界面。要求有用户名、密码文本框及标签，两个按钮（登录和退出），
 * 并能够响应鼠标单击按钮事件，即当单击“登录”按钮时显示“登录成功”，单击“退出”按钮时退出程序。
    （提示：可调用JFrame组件的dispose()方法退出程序。）*/

/*extends 继承　，*/
public class test2 extends JFrame implements ActionListener {
	JButton login = new JButton("login in");
	JButton exit = new JButton("login out");
	JLabel name = new JLabel("username：");
	JLabel password = new JLabel("password：");
	/* 文本框的长度为10列，即当用户输入的字符超过10个时数据就会超出可视范围，但是文本框不会限制用户只能输入10个字符 */
	JTextField JName = new JTextField(13); // 明文账号输入
	JPasswordField JPassword = new JPasswordField(13); // 非明文密码输入

	public test2() {
		JPanel jp = new JPanel();
		jp.setLayout(new GridLayout(3, 2)); // 3行2列的面板jp（网格布局）

		name.setHorizontalAlignment(SwingConstants.RIGHT); // 设置该组件的对齐方式为向右对齐
		password.setHorizontalAlignment(SwingConstants.RIGHT);

		jp.add(name); // 将内容加到面板jp上
		jp.add(JName);
		jp.add(password);
		jp.add(JPassword);
		jp.add(login);
		jp.add(exit);

		login.addActionListener(this); // login in 增加事件监听
		exit.addActionListener(this); // login out 增加事件监听

		this.add(jp, BorderLayout.CENTER); // 将整块面板定义在屏幕中间

		this.setTitle("login window");
		this.setLocation(500, 300); // 设置初始位置

		this.pack(); // 表示随着面板自动调整大小
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	public void actionPerformed(ActionEvent e) // => try catch 语句
	{
		if (e.getSource() == exit) {
			this.dispose();
		} else {
			if (JName.getText().equals("Tattoo") && String.valueOf(JPassword.getPassword()).equals("Tattoo")) {
				JOptionPane.showMessageDialog(null, " Success! Welcome ");
				// 显示信息提示框
				this.dispose();
			} else {
				JOptionPane.showMessageDialog(null, "failed! Please try again...");
				// 显示信息提示框
				JName.setText("");
				JPassword.setText("");
			}
		}
	}

	public static void main(String[] args) {
		JFrame.setDefaultLookAndFeelDecorated(false); // 不禁用本地外观
		new test2();
	}
}