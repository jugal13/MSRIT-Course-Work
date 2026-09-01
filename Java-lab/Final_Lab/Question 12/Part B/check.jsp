<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	int marks=Integer.parseInt(request.getParameter("marks"));
	String name=request.getParameter("name");
	int age=Integer.parseInt(request.getParameter("age"));

	if(marks>=20)
		out.println("Eligible for SEE");
	else
		out.println("Not Eligible");

	RequestDispatcher rd=request.getRequestDispatcher("counter.jsp");
	rd.include(request,response);
%>
</body>
</html>