# Cold-Flow Piston–Cylinder Simulation (OpenFOAM)

## Overview
This case simulates **cold-flow in a piston–cylinder engine** using OpenFOAM’s **dynamic mesh** capability.  
The focus is on **mesh deformation** and **in-cylinder flow physics** (pressure rise, vortices) without combustion.  

It is based on the `engineFoam/kivaTest` tutorial and modified for **cold-flow**.
Implemented Arbitrary Lagrangian–Eulerian (ALE) mesh motion to capture piston kinematics.
Analysed velocity field visualisations and mesh quality metrics to study vortex formation during compression and expansion.


---

##  Solver
- Recommended solver:  
  - `icoDyMEngine` (incompressible piston solver) **or**  
  - `rhoPimpleDyMFoam` (compressible cold-flow).  

- Combustion is **disabled** (`combustion off;` in `constant/combustionProperties`).

---

## Case Structure
```
pistonColdFlow/
├── 0/ # Initial & boundary conditions (U, p, T, k, epsilon etc.)
├── constant/
│ ├── dynamicMeshDict # Defines piston motion
│ ├── combustionProperties (set to off)
│ └── thermophysicalProperties
├── system/
│ ├── controlDict # Time, write intervals, solver
│ ├── fvSchemes
│ └── fvSolution
├── Allrun # Run script
└── Allclean # Clean script
```
---

## Running the Case
1. Clean old results
   ```bash
   ./Allclean
   ```
2. Run the solver:
   ```bash
   ./Allrun
   ```
