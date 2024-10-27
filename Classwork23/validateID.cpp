#include <string>
namespace validateID {
    bool validateID(std::string ID) {


        //checks to make sure the ID is the right length
        if (ID.length() != 6) {
            return 0;
        }

        // THEN initializes strings
        std::string substrAlpha = ID.substr(0, 2);
        std::string substrDigit = ID.substr(2, 5);


        //verifies that the first half are alpha charachters
        for (int i = 0; i < substrAlpha.length();i++) {
            if (isalpha(substrAlpha[i]) == false) {
                return 0;
            }
        }
        //verifies that the second half are diits
        for (int i = 0; i < substrDigit.length();i++) {
            if (isdigit(substrDigit[i]) == false) {
                return 0;
            }
        }
        return 1;
    }
}
