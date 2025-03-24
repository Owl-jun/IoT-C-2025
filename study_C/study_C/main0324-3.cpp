#include <iostream>

class Car {
private:
	int gasolineGauge;
public:
	Car(int ag)
		: gasolineGauge(ag)
	{}
	int getGasGauge() { return gasolineGauge; }
};
class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae)
		: Car(ag)
		, electricGauge(ae)
	{}
	int getEGauge() { return electricGauge; }
};
class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(int ag, int ae, int aw)
		: HybridCar(ag,ae)
		, waterGauge(aw)
	{ }
	void showGauge() {
		std::cout << "ÀÜ¿© °¡¼Ö¸° : " << getGasGauge() << std::endl;
		std::cout << "ÀÜ¿© Àü±â·® : " << getEGauge() << std::endl;
		std::cout << "ÀÜ¿© ¿öÅÍ·® : " << waterGauge << std::endl;
	}
};

int main()
{
	HybridWaterCar santafe(10, 20, 30);
	santafe.showGauge();
	return 0;
}