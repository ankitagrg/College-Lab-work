
import java.sql.*;

public class StudentProfile {
    public static void main(String[] args) {
        String url="jdbc:mysql://localhost:3306/school";
        String username="root";
        String password="root";
        String driver="com.mysql.cj.jdbc.Driver";

        // Load driver class //
        class.forName(driver);
        Connection connection=DriverManager.getConnection(url, username, password);
        Statement statement=connection.createStatement();
        

    
        int count=statement.executeUpdate("");   
        System.out.println("No.of rows affected by insert query:"+count);
        
        count=statement.executeUpdate(Update Query);
        System.out.println("No.of rows affected by update query:"+count);
        connection.close();
    }
}