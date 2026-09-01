import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/Cookieread")
public class Cookieread extends HttpServlet {

	private static final long serialVersionUID = 1L;

    public Cookieread() {
        super();
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    	String panid=request.getParameter("panid");
    	Cookie mycookie=new Cookie("panid",panid);
    	mycookie.setMaxAge(3600);
    	response.addCookie(mycookie);
    	RequestDispatcher rd=request.getRequestDispatcher("Cookiewrite");
    	rd.forward(request, response);

   }

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
