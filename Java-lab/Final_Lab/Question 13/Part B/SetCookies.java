import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/SetCookies")
public class SetCookies extends HttpServlet {

	private static final long serialVersionUID = 1L;

    public SetCookies() {
        super();
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException 
	{
		response.setContentType("text/html");
		PrintWriter pw=response.getWriter();
		for(int i=0;i<3;i++)
		{
			Cookie mycookie=new Cookie("session"+i,"value"+i);
			response.addCookie(mycookie);
			mycookie=new Cookie("persistent"+i,"value"+i);
			mycookie.setMaxAge(3600);
			response.addCookie(mycookie);
		}
		pw.println("cookie created");
		RequestDispatcher rd=request.getRequestDispatcher("ReadCookie");
    	rd.include(request, response);

	}
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}