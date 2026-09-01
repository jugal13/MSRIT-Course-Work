import java.sql.*;

public class Q14b {

	public static void main(String[] args) {
		String name;
		int id;
		double cgpa;
		try {
			Class.forName("com.mysql.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college", "root", "");
			Statement st = con.createStatement(ResultSet.TYPE_SCROLL_SENSITIVE,ResultSet.CONCUR_UPDATABLE);
			String query = "Select * from student where cgpa < 9";
			ResultSet rs = st.executeQuery(query);
			System.out.println("Students who have got less than 9 cgpa");
			while (rs.next()) {
				id = rs.getInt("id");
				name = rs.getString("name");
				cgpa = rs.getDouble("cgpa");
				System.out.println("id: "+id+" name: "+name+" cgpa: "+cgpa);
			}
			String sql = "select * from student";
			rs = st.executeQuery(sql);
			while(rs.next()) {
			    if(rs.getString("name").equals("John")) {
			    	break;
			    }
			}
			rs.updateDouble("cgpa", 9.4);
			rs.updateRow();
			rs = st.executeQuery("select * from student");
			System.out.println("Students cgpa on updating John's");
			while (rs.next()) {
				id = rs.getInt("id");
				name = rs.getString("name");
				cgpa = rs.getDouble("cgpa");
				System.out.println("id: "+id+" name: "+name+" cgpa: "+cgpa);
			}
			rs.close();
			st.close();
			con.close();
		}
		catch (Exception e) {
			e.printStackTrace();
		}
	}
}
