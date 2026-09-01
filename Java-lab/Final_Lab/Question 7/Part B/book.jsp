<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%@ page import="java.sql.*" %>
	<%@ page import="javax.servlet.RequestDispatcher" %>
	<%
		int no = Integer.parseInt(request.getParameter("bno"));
		String title = request.getParameter("title");
		String author = request.getParameter("author");
		String publisher = request.getParameter("pub");
		int price = Integer.parseInt(request.getParameter("price"));

		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
			PreparedStatement ps = con.prepareStatement("insert into books values(?,?,?,?,?)");
			ps.setInt(1,no);
			ps.setString(2,title);
			ps.setString(3,author);
			ps.setString(4,publisher);
			ps.setInt(5,price);
			ps.execute();

			RequestDispatcher rd = request.getRequestDispatcher("pol2.html");
			rd.forward(request,response);
		}
		catch(Exception e) { 
			out.print("Error");
			out.print(e);
		}
	%>
</body>
</html>