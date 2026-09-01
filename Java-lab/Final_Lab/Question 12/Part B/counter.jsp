<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%@ page import="java.io.*,java.util.*" %>
	<%
		Integer hitsCount = (Integer)application.getAttribute("hitCounter"); 
		if( hitsCount == null || hitsCount == 0 ) {
            	out.println("Welcome to my website!");
        	    hitsCount = 1;
		} 
		else {
			out.println("Welcome back to my website!");
			hitsCount += 1;
		}
		application.setAttribute("hitCounter", hitsCount);
	%>
	<p>Total number of visits: <%= hitsCount%></p>
</body>
</html>