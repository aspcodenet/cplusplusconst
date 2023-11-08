#include <iostream>
#include <string>

class Player{
public:
    Player(std::string name,int jersey)
    :name(name),jersey(jersey)
    {

    }
    std::string getName() const {
        calls++;
        return name;
    }

    // const int * const getJerseyPointer() const {
    //     return (const int *)&jersey;
    // }

private:
    int jersey;    
    std::string name;

    mutable int calls = 0;
    //debugging auditing
    //vector<AuditLog> log;
};

std::ostream &operator<<(std::ostream &stream,  const Player &player) {
    stream << "PLAYER:" << 
        player.getName() << 
        std::endl;    
    return stream;
}

int main(){
    //const int i = 12;

    const int defaultVatPercent = 25;
    
    //int const * p = new int;   // POINTER   TWO parts - the pointer itself = stackallocated contains an address
    // const int * const p = new int(12);   // POINTER   TWO parts - the pointer itself = stackallocated contains an address
    // //                              *dereference  -> point to something
    // // const to the left = "you cant modify the THING that the pointer points to"
    // // const to the right = "you cant modify the pointer address"
    // *p = 12;
    // p =  (int *)&defaultVatPercent;
    // *p = 12;
    //defaultVatPercent = 12;

    //defaultVatPercent = 29;

    std::cout << defaultVatPercent * 100 << std::endl;

    Player player("Foppa",21);
    player.getName();


    std::cout << "Hej" << std::endl;
    std::cout << player << std::endl;
}


