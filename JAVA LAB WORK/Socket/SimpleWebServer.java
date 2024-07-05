package Socket;

import java.io.IOException;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class SimpleWebServer {

    public static void main(String[] args) {
        try {
            try (// Create a server socket listening on port 80 //
                    ServerSocket serverSocket = new ServerSocket(80)) {
                System.out.println("Server listening on port 80...");

                while (true) {
                    // Wait for a client to connect
                    Socket clientSocket = serverSocket.accept();
                    System.out.println("Client connected: " + clientSocket.getInetAddress());

                    // Handle the client in a separate thread
                    Thread clientThread = new Thread(() -> handleClient(clientSocket));
                    clientThread.start();
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleClient(Socket clientSocket) {
        try (
                // Get the output stream to send the response to the client
                OutputStream outputStream = clientSocket.getOutputStream();
                PrintWriter writer = new PrintWriter(outputStream, true)) {
            // Send HTTP response headers
            writer.println("HTTP/1.1 200 OK");
            writer.println("Content-Type: text/html");
            writer.println();

            // Send the HTML home page
            String htmlResponse = "<html><head><title>Simple Web Server</title></head><body>"
                    + "<h1>Welcome to the Simple Web Server!</h1></body></html>";
            writer.println(htmlResponse);

            // Close the client socket
            clientSocket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
