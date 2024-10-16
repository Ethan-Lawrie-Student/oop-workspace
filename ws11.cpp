#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (std::getline(_file, line)) {
                if(stoi(line)) {
                    records.push_back(stoi(line));
                } else {
                    std::cout << "NOT WORKING" <<std::endl;
                    throw(line);
                }
                
                
            }
            _file.close();
        } else {
            throw("File not open!");
        }
    }
};

int main() {
        
        // RecordsManager receordM("test_clean-1.txt");
        // RecordsManager receordM("test_corrupt1.txt");
        RecordsManager receordM("test_corrupt2.txt");
        Records myRecords;
        try{
            receordM.read(myRecords);
        } catch(const char* msg) {
            std::cerr << msg << "\n";
        } catch(int ecode) {
            std::cerr << "error code " << ecode << "\n";
        } catch(std::exception const& e){
            std::cerr << e.what() << "\n";
        } catch(...) {
            
        }
        
        

        // reads records
        

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
             sum += myRecords[i];
        }
        cout << sum << endl;
    return 0;
}