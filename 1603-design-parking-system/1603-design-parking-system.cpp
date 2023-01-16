class ParkingSystem {
public:
    int bigg;
    int med;
    int smol;
    ParkingSystem(int big, int medium, int small) {
        bigg=big;
        med=medium;
        smol=small;
    }
    
    bool addCar(int x) {
        if(x==1 && bigg!=0){
            bigg--;
            return true;
        }
        if(x==2 && med!=0){
            med--;
            return true;
        }
        if(x==3 && smol!=0){
            smol--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */