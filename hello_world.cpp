//This cpp file prints hello world
#include <iostream>
using namespace std;

class printer
{
    //This class provides all needed letter for hello world
    public:

    //print h
    void print_h() {
        cout << "h";
    }

    //print e
    void print_e() {
        cout << "e";
    }

    //print l
    void print_l() {
        cout << "l";
    }

    //print o
    void print_o() {
        cout << "o";
    }

    //print w
    void print_w() {
        cout << "w";
    }

    //print r
    void print_r() {
        cout << "r";
    }

    //print d
    void print_d() {
        cout << "d";
    }
};

class true_or_false
{
    //This class returns true or false
    public:

    //Return true
    bool return_true()
    {
        return true;
    }

    //Return false
    bool return_false()
    {
        return false;
    }
};

class track_number
{
    //This class tracks number
    public:
        int number = 0;

    //Plus 1
    void add_one() {
        number++;
    }

    //Plus 4
    void add_four() {
        number = number + (((2 * 2)/ 4) + 3);
    }
};

int main()
{
    true_or_false tof;
    printer p;
    track_number tn;

    while(tof.return_false() == false) {
        if((tn.number == 0) == tof.return_true()) {
            p.print_h();
            tn.add_one();
        } else if((tn.number == 1) == tof.return_true()) {
            p.print_e();
            tn.add_one();
        }else if((tn.number == 2) == tof.return_true()) {
            p.print_l();
            tn.add_one();
        }else if((tn.number == 3) == tof.return_true() || (tn.number == 9) == tof.return_true()) {
            p.print_l();
            tn.add_one();
        }else if((tn.number == 4) == tof.return_true()) {
            p.print_o();
            tn.add_one();
        }else if((tn.number == 5) == tof.return_true()) {
            cout << " ";
            tn.add_one();
        }else if((tn.number == 6) == tof.return_true()) {
            p.print_w();
            tn.add_one();
        }else if((tn.number == 7) == tof.return_true()) {
            p.print_o();
            tn.add_one();
        }else if((tn.number == 8) == tof.return_true()) {
            p.print_r();
            tn.add_one();
        }else if((tn.number == 10) == tof.return_true()) {
            p.print_d();
            tn.add_one();
        }else if((tn.number == 11) == tof.return_true()) {
            cout << "\n";
            break;
        }
    }
}
