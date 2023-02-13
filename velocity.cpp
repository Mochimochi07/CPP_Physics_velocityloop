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

  
  while (currentTime <= 10.0) {
    
    currentVelocity = initialVelocity + acceleration * currentTime;


    currentPosition = initialPosition + initialVelocity * currentTime + 
      0.5 * acceleration * currentTime * currentTime;

   
    std::cout << "Time: " << currentTime << " s" << std::endl;
    std::cout << "Velocity: " << currentVelocity << " m/s" << std::endl;
    std::cout << "Position: " << currentPosition << " m" << std::endl;
    std::cout << std::endl;

    
    currentTime += timeStep;
  }

  return 0;
}
