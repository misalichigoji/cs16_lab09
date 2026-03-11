// file: headers.h for newanagrams

// Define class AString here!
// See PDF for details
class AString {
    public:
        AString();
        AString(str strvalue);
        string getStringValue();
        void cleanUp();
        void countLetters(int a[], const int ARRAYSIZE);
        void getAString();
    private:
        string StringValue;
};

// DO NOTE CHANGE THESE AND DO NOT ADD TO THEM!
bool compareCounts(int a[], int b[]);
const int ARRAYSIZE = 26;
