package shiyan_8;

import javax.swing.*;

import java.awt.*;   //导入必要的包
 
public class login extends JFrame{
	 private JPanel jPanel=new JPanel();//用于放登陆信息面板
	
    JTextField jTextField ;//定义登录名文本框组件
    JPasswordField jPasswordField;//定义密码框组件
    JLabel jLabel1,jLabel2;
    JPanel jp1,jp2,jp3;
    JButton jb1,jb2; //创建按钮
    public login(){
        jTextField = new JTextField(13);
        jPasswordField = new JPasswordField(13);
        jLabel1 = new JLabel("用户名:");
        jLabel2 = new JLabel("密码:");
        jb1 = new JButton("登陆");
        jb2 = new JButton("取消");
        jp1 = new JPanel();
        jp2 = new JPanel();
        jp3 = new JPanel();
        
        //设置布局
        this.setLayout(new GridLayout(3,1));
        
        jp1.add(jLabel1); 
        jp1.add(jTextField);//第一块面板添加用户名和文本框 
        
        jp2.add(jLabel2);
        jp2.add(jPasswordField);//第二块面板添加密码和密码输入框
        
        jp3.add(jb1);
        jp3.add(jb2); //第三块面板添加确认和取消
        
        // jp3.setLayout(new FlowLayout());  　　//因为JPanel默认布局方式为FlowLayout，所以可以注销这段代码.
        jPanel.setBorder((BorderFactory.createTitledBorder("请输入登陆信息")));//设置标题样式 
        jPanel.add(jp1);
        jPanel.add(jp2);
        jPanel.add(jp3);  //将三块面板添加到登陆框上面
        jPanel.setSize(600,100);//设置登陆面板的大小
        this.add(jPanel);
        //设置显示
        this.setSize(600, 300);
        //this.pack();
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
        this.setVisible(true);  
        this.setResizable(false);  
        this.setLocationRelativeTo(null);
        this.setTitle("2015 求回家！！！");
         
    }
    public static void main(String[] args){
        new login();
    }
}