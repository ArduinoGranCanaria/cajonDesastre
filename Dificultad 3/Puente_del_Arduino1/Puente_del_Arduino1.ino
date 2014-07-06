void loop() {
  // Get clients coming from server
  YunClient client = server.accept();
 
  // There is a new client?
  if (client) {
    // read the command
    String command = client.readString();
    command.trim();        //kill whitespace
    Serial.println(command);
    // is "temperature" command?
    if (command == "temperature") {
 
      // get the time from the server:
      Process time;
      time.runShellCommand("date");
      String timeString = "";
      while(time.available()) {
        char c = time.read();
        timeString += c;
      }
      Serial.println(timeString);
      int sensorValue = analogRead(A1);
      // convert the reading to millivolts:
      float voltage = sensorValue *  (5000/ 1024); 
      // convert the millivolts to temperature celsius:
      float temperature = (voltage - 500)/10;
      // print the temperature:
      client.print("Current time on the Yún: ");
      client.println(timeString);
      client.print("<br>Current temperature: ");
      client.print(temperature);
      client.print(" degrees C");
      client.print("<br>This sketch has been running since ");
      client.print(startString);
      client.print("<br>Hits so far: ");
      client.print(hits);
    }
 
    // Close connection and free resources.
    client.stop();
    hits++;
  }
 
  delay(50); // Poll every 50ms
}
