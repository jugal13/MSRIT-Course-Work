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
		int m = Integer.parseInt(request.getParameter("marks"));
		if (m>=90)
			out.print("A");
		else if(m>=80)
			out.print("B");
		else if(m>=70)
			out.print("C");
		else 
			out.print("FAIL");
	%>
</body>
</html>