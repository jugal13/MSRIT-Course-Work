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
	<%
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","");
			Statement stmt = conn.createStatement();	
			String title = request.getParameter("title");
			ResultSet rs = stmt.executeQuery("Select * from books where title = '"+title+"'");	
      
			while(rs.next()) {
				out.print("Book No.: "+rs.getInt("no")+"<br>");
				out.print("Title: "+rs.getString("title")+"<br>");
				out.print("Author: "+rs.getString("author")+"<br>");
				out.print("Publisher: "+rs.getString("publisher")+"<br>");
				out.print("Price: "+rs.getInt("price")+"<br>");
				out.print("<br>");
			}
		}
		catch(Exception e) {
			out.print(e);
		}
	%>
</body>
</html>