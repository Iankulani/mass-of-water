#include <iostream>
using namespace std;

int main() {
    // Declare variables for atomic masses and atom counts
    double oxygenMass = 15.9994;
    double hydrogenMass = 1.00794;
    int h2oOxygens, h2oHydrogens;
    
    cout<< "======================= MASS OF H20=======================\n\n";
    // Prompt user to input the number of oxygen and hydrogen atoms
    cout << "Enter the number of oxygen atoms:";
    cin >> h2oOxygens;
    
    cout << "Enter the number of hydrogen atoms:";
    cin >> h2oHydrogens;
    
    // Calculate the molecular weight of H2O
    double h2oMass = h2oOxygens * oxygenMass + h2oHydrogens * hydrogenMass;
    
    // Output the result
    cout << "Molecular weight of H2O = " << h2oMass << endl;
    
    return 0;
}
