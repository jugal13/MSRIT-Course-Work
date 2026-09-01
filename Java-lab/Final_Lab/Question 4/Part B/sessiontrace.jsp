<%
	if(session!=null) {
		String name=(String)session.getAttribute("user");
		out.println("Hello "+ name +", Welcome");
	}
	else {
		out.println("Please login first");
		request.getRequestDispatcher("register.html").include(request,response);
	}
%>