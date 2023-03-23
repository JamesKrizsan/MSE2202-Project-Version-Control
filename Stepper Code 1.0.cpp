#define trigF 5
#define echoF 4
// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;

// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper myStepper = Stepper(stepsPerRevolution, 10, 9, 7, 6);
//prox sensor code

      // Clears the trigPin
      digitalWrite(trigF, LOW);
      delayMicroseconds(2);

      // Sets the trigPin on HIGH state for 10 micro seconds
      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);
      // Reads the echoPin, returns the sound wave travel time in microseconds
      duration = pulseIn(echoF, HIGH);
      // Calculating the distance
      distance= duration*0.034/2;


      Serial.println(distance);