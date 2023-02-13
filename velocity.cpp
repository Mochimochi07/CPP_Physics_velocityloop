#include <iostream>
#include <cmath>

const double acceleration = 9.8;
const double initialVelocity = 0.0; 
const double initialPosition = 0.0; 
const double timeStep = 0.01; 

int main() {
  double currentTime = 0.0;
  double currentVelocity = initialVelocity;
  double currentPosition = initialPosition;

  // simulate for 10 seconds
  while (currentTime <= 10.0) {
    // calculate the velocity at the current time
    currentVelocity = initialVelocity + acceleration * currentTime;

    // calculate the position at the current time
    currentPosition = initialPosition + initialVelocity * currentTime + 
      0.5 * acceleration * currentTime * currentTime;

    // output the results
    std::cout << "Time: " << currentTime << " s" << std::endl;
    std::cout << "Velocity: " << currentVelocity << " m/s" << std::endl;
    std::cout << "Position: " << currentPosition << " m" << std::endl;
    std::cout << std::endl;

    // update the time
    currentTime += timeStep;
  }

  return 0;
}
