/*                                              __      __         
  ____  ____ ___  ___  ____ _____ _      ____ _/ /___  / /_  ____ _
 / __ \/ __ `__ \/ _ \/ __ `/ __ `/_____/ __ `/ / __ \/ __ \/ __ `/
/ /_/ / / / / / /  __/ /_/ / /_/ /_____/ /_/ / / /_/ / / / / /_/ / 
\____/_/ /_/ /_/\___/\__, /\__,_/      \__,_/_/ .___/_/ /_/\__,_/  
                    /____/                   /_/                  */

#include <iostream>
#include <string>
#include "config.h"
#include "Mesh.h"
#include "timestep.h"

using namespace std;

int main() {
  
  int n_timesteps = 3;

  // read in mesh
  string dirName = config::dirName; // convert char to string
  string fileName = config::fileName; // convert char to string
  MpasMesh m(dirName + fileName);

  // time step loop
  for (int n=0; n<n_timesteps; n++) {
      if (config::verbose) cout << "timestep n" << endl;
      timestep(m);
  }

}

