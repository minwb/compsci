package login;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import java.awt.Color;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JSeparator;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.UIManager;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.ImageIcon;
import java.awt.Dimension;
import javax.swing.SwingConstants;
import java.awt.Cursor;
import javax.swing.border.EtchedBorder;
import javax.swing.border.SoftBevelBorder;
import javax.swing.border.BevelBorder;

public class LoginScreen extends JFrame {

	private static final long serialVersionUID = 1L;
	private JPanel contentPane;
	private JTextField txtUsername;
	private JPasswordField pwdPassword;
	private JTextField txtLogin;
	private JTextField txtStudentsPlace;
	private JTextField txtPlace;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LoginScreen frame = new LoginScreen();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public LoginScreen() {
		setResizable(false);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 883, 532);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));

		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBackground(new Color(255, 255, 255));
		panel.setBounds(416, 0, 453, 500);
		contentPane.add(panel);
		panel.setLayout(null);
		
		JLabel lblNewLabel_1 = new JLabel("");
		lblNewLabel_1.setIcon(new ImageIcon("C:\\Users\\yasmi\\Downloads\\Password.png"));
		lblNewLabel_1.setBounds(68, 248, 72, 50);
		panel.add(lblNewLabel_1);
		
		txtUsername = new JTextField();
		txtUsername.setDisabledTextColor(new Color(255, 255, 255));
		txtUsername.setBackground(new Color(255, 255, 255));
		txtUsername.setBorder(UIManager.getBorder("EditorPane.border"));
		txtUsername.setText("Username");
		txtUsername.setForeground(new Color(88, 88, 88));
		txtUsername.setFont(new Font("Trebuchet MS", Font.PLAIN, 15));
		txtUsername.setBounds(147, 160, 283, 42);
		panel.add(txtUsername);
		txtUsername.setColumns(10);
		
		pwdPassword = new JPasswordField();
		pwdPassword.setBackground(new Color(255, 255, 255));
		pwdPassword.setText("Password");
		pwdPassword.setBorder(UIManager.getBorder("EditorPane.border"));
		pwdPassword.setBounds(147, 248, 283, 42);
		panel.add(pwdPassword);
		
		JSeparator separator = new JSeparator();
		separator.setForeground(new Color(64, 128, 128));
		separator.setBounds(137, 220, 290, 7);
		panel.add(separator);
		
		JSeparator separator_1 = new JSeparator();
		separator_1.setBorder(null);
		separator_1.setForeground(new Color(64, 128, 128));
		separator_1.setBounds(137, 310, 290, 2);
		panel.add(separator_1);
		
		JButton btnNewButton = new JButton("Login");
		btnNewButton.setBackground(new Color(126, 190, 190));
		btnNewButton.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
		btnNewButton.setBorder(UIManager.getBorder("Button.border"));
		btnNewButton.setFont(new Font("Segoe UI Symbol", Font.BOLD, 14));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			}
		});
		btnNewButton.setBounds(175, 354, 143, 42);
		panel.add(btnNewButton);
		
		JLabel lblNewLabel_1_1 = new JLabel("");
		lblNewLabel_1_1.setIcon(new ImageIcon("C:\\Users\\yasmi\\Downloads\\User2.png"));
		lblNewLabel_1_1.setBounds(68, 160, 50, 50);
		panel.add(lblNewLabel_1_1);
		
		JButton btnSignUp = new JButton("Don't have an account? Sign Up");
		btnSignUp.setContentAreaFilled(false);
		btnSignUp.setBackground(new Color(255, 255, 255));
		btnSignUp.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
		btnSignUp.setBorderPainted(false);
		btnSignUp.setBorder(null);
		btnSignUp.setOpaque(false);
		btnSignUp.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			}
		});
		btnSignUp.setFont(new Font("Segoe UI Semilight", Font.PLAIN, 14));
		btnSignUp.setBounds(108, 417, 266, 26);
		panel.add(btnSignUp);
		
		JPanel panel_2 = new JPanel();
		panel_2.setBorder(new EtchedBorder(EtchedBorder.LOWERED, new Color(255, 255, 255), new Color(64, 128, 128)));
		panel_2.setFont(new Font("Stencil", Font.BOLD, 20));
		panel_2.setBounds(0, 0, 465, 110);
		panel.add(panel_2);
		panel_2.setLayout(null);
		
		txtLogin = new JTextField();
		txtLogin.setDisabledTextColor(new Color(0, 64, 64));
		txtLogin.setForeground(new Color(0, 64, 64));
		txtLogin.setBorder(null);
		txtLogin.setEnabled(false);
		txtLogin.setEditable(false);
		txtLogin.setFont(new Font("Segoe UI Black", Font.BOLD, 30));
		txtLogin.setBackground(new Color(240, 240, 240));
		txtLogin.setText("WELCOME!");
		txtLogin.setBounds(145, 41, 177, 41);
		panel_2.add(txtLogin);
		txtLogin.setColumns(10);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBackground(new Color(64, 128, 128));
		panel_1.setBounds(-11, 0, 453, 500);
		contentPane.add(panel_1);
		panel_1.setLayout(null);
		
		JLabel lblNewLabel_1_1_1 = new JLabel("");
		lblNewLabel_1_1_1.setBounds(72, 21, 417, 510);
		lblNewLabel_1_1_1.setIcon(new ImageIcon("C:\\Users\\yasmi\\Downloads\\University-PNG.png"));
		panel_1.add(lblNewLabel_1_1_1);
		
		txtStudentsPlace = new JTextField();
		txtStudentsPlace.setToolTipText("");
		txtStudentsPlace.setHorizontalAlignment(SwingConstants.CENTER);
		txtStudentsPlace.setText("STUDENTS");
		txtStudentsPlace.setForeground(new Color(0, 64, 64));
		txtStudentsPlace.setFont(new Font("Serif", Font.BOLD, 30));
		txtStudentsPlace.setEnabled(false);
		txtStudentsPlace.setEditable(false);
		txtStudentsPlace.setDisabledTextColor(new Color(37, 73, 73));
		txtStudentsPlace.setColumns(10);
		txtStudentsPlace.setBorder(UIManager.getBorder("EditorPane.border"));
		txtStudentsPlace.setBackground(new Color(64, 128, 128));
		txtStudentsPlace.setBounds(-36, 153, 320, 51);
		panel_1.add(txtStudentsPlace);
		
		txtPlace = new JTextField();
		txtPlace.setToolTipText("");
		txtPlace.setText("PLACE");
		txtPlace.setHorizontalAlignment(SwingConstants.CENTER);
		txtPlace.setForeground(new Color(0, 64, 64));
		txtPlace.setFont(new Font("Serif", Font.BOLD, 30));
		txtPlace.setEnabled(false);
		txtPlace.setEditable(false);
		txtPlace.setDisabledTextColor(new Color(37, 73, 73));
		txtPlace.setColumns(10);
		txtPlace.setBorder(UIManager.getBorder("EditorPane.border"));
		txtPlace.setBackground(new Color(64, 128, 128));
		txtPlace.setBounds(0, 186, 234, 57);
		panel_1.add(txtPlace);
	}
}
