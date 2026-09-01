<%
	String name =request.getParameter("user");
	String password=request.getParameter("pass");
	if(name.equals("admin") && password.equals("1234")) {
		session.setAttribute("user",name);
    	request.getRequestDispatcher("sessiontrace.jsp").forward(request,response);
	}
	else {
		out.println("Not Valid!");	
	}
%>