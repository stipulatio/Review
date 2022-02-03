#include <iostream>

int main() {

double earth_weight = 0;
int planet = 0;
double MercuryRG = 0.38;
double VenusRG = 0.91;
double MarsRG = 0.38;
double JupiterRG = 2.34;
double SaturnRG = 1.06;
double UranusRG = 0.92;
double NeptuneRG = 1.19;
double merc_weight = 0;
double ven_weight = 0;
double mars_weight = 0;
double jup_weight = 0;
double sat_weight = 0;
double ura_weight = 0;
double nep_weight = 0;

//////
std::cout << "Enter your weight on Earth (use whole numbers)\n";

std::cin >> earth_weight;

//////

std::cout << "Enter the Number corresponding to the Planet on which you wish to fight \n";

std::cout << "1 - Mercury \n";
std::cout << "2 - Venus \n";
std::cout << "3 - Mars \n";
std::cout << "4 - Jupiter \n";
std::cout << "5 - Saturn \n";
std::cout << "6 - Uranus \n";
std::cout << "7 - Neptune \n";

std::cin >> planet;

//////

switch(planet){
  case 1:
      merc_weight = earth_weight * MercuryRG;
      std::cout << "Your weight on Mercury is equivalent to " << merc_weight << " pounds on Earth. \n";
      break;
  case 2:
      ven_weight = earth_weight * VenusRG;
      std::cout << "Your weight on Venus is equivalent to " << ven_weight << " pounds on Earth. \n";
      break;
  case 3:
      mars_weight = earth_weight * MarsRG;
      std::cout << "Your weight on Mars is equivalent to " << mars_weight << " pounds on Earth. \n";
      break;
  case 4:
      jup_weight = earth_weight * JupiterRG;
      std::cout << "Your weight on Jupiter is equivalent to " << jup_weight << " pounds on Earth. \n";
      break;
  case 5:
      sat_weight = earth_weight * SaturnRG;
      std::cout << "Your weight on Saturn is equivalent to " << sat_weight << " pounds on Earth. \n";
      break;
  case 6:
      ura_weight = earth_weight * UranusRG;
      std::cout << "Your weight on Uranus is equivalent to " << ura_weight << " pounds on Earth. \n";
      break;
  case 7:
      nep_weight = earth_weight * NeptuneRG;
      std::cout << "Your weight on Neptune is equivalent to " << nep_weight << " pounds on Earth. \n";
      break;
  default:
      std::cout << "Fuck You \n";
      break;
    }



}
