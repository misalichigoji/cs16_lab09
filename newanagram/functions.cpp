// file: functions.cpp for newanagrams

// Define all member functions for class AString
//    as well as all other functions that need definition


AString::AString(): StringValue("") {} //default constructor
AString::AString(string strvalue): StringValue(strvalue) {} //constructor for when called with 1 string parameter

string AString::getStringValue()
{
    //pre-conditions: called from an object of class AString where the private variable StringValue contains some string value
    //post-conditions: returns value in StringValue
    return StringValue;
}

void AString::cleanUp()
{
    //pre-conditions: called from an object of class AString where the private variable StringValue contains some string value
    //post-conditions: cleans the private string variable StringValue to only contain lowerscase alphabetic characters
    int size = StringValue.size();
    string temp("");
    for(int i = 0; i < size; i++)
    {
        if(isalpha(StringValue[i]))
        {
            temp += tolower(StringValue[i]);
        }
    }
    StringValue = temp;
}

void AString::countLetters(int a[], const int ARRAYSIZE)
{
    //pre-conditions: called where StringValue has a string value, with an integer array being passed into the function with its size
    //post-conditions: alters the passed array to have each index contain the number of how many occurrences of a letter are in a string in the corresponding index
    int size = StringValue.size();
    for(int i = 0; i < size; i++)
    {
        if(StringValue[i] == 'a')
            a[0]++;
        else if(StringValue[i] == 'b')
            a[1]++;
        else if(StringValue[i] == 'c')
            a[2]++;
        else if(StringValue[i] == 'd')
            a[3]++;
        else if(StringValue[i] == 'e')
            a[4]++;
        else if(StringValue[i] == 'f')
            a[5]++;
        else if(StringValue[i] == 'g')
            a[6]++;
        else if(StringValue[i] == 'h')
            a[7]++;
        else if(StringValue[i] == 'i')
            a[8]++;
        else if(StringValue[i] == 'j')
            a[9]++;
        else if(StringValue[i] == 'k')
            a[10]++;
        else if(StringValue[i] == 'l')
            a[11]++;
        else if(StringValue[i] == 'm')
            a[12]++;
        else if(StringValue[i] == 'n')
            a[13]++;
        else if(StringValue[i] == 'o')
            a[14]++;
        else if(StringValue[i] == 'p')
            a[15]++;
        else if(StringValue[i] == 'q')
            a[16]++;
        else if(StringValue[i] == 'r')
            a[17]++;
        else if(StringValue[i] == 's')
            a[18]++;
        else if(StringValue[i] == 't')
            a[19]++;
        else if(StringValue[i] == 'u')
            a[20]++;
        else if(StringValue[i] == 'v')
            a[21]++;
        else if(StringValue[i] == 'w')
            a[22]++;
        else if(StringValue[i] == 'x')
            a[23]++;
        else if(StringValue[i] == 'y')
            a[24]++;
        else if(StringValue[i] == 'z')
            a[25]++;
    }
}

void AString::getAString()
{
    //pre-conditions: called as a member function of an object of class AString
    //post-conditions: asigns private variable StringValue to that of user input provided including spaces
    string temp;
    cout << "Enter string value: ";
    getline(cin, temp);
    StringValue = temp;
}

bool compareCounts(int a[], int b[])
{
    //pre conditions: takes in two integer arrays each containing 26 objects each corresponding to a letter in the alphabet
    //post conditions: returns true if the two arrays contain the same contents, otherwise returns false
    for(int i =0; i < 26; i++)
    {
        if(a[i] == b[i])
            return false;
    }
    return true;
}