#include <iostream>
#include <string>
using namespace std;



class EncryptString {
    private:
        string cipherText; // the encrypted string
    public:
    // Constructor
    EncryptString(string text, int key) {
        this->cipherText = text;
        for (int i = 0; i < cipherText.length(); i++) {
            cipherText[i] = cipherText[i] ^ key;
        }
    }

    // Returns encrypted text
    string getEncryptedText() {
        return cipherText;
    }

    // Returns decrypted text using provided key
    string getDecryptedText(int key) {
        string result = cipherText;
        for (int i = 0; i < result.length(); i++) {
            result[i] = result[i] ^ key;
        }
        return result;
    }

    // Sets new encrypted text
    void setText(string text, int key) {
        cipherText = text;
        for (int i = 0; i < cipherText.length(); i++) {
            cipherText[i] = cipherText[i] ^ key;
        }
    }
};


int main() {

    // 1. Create 3 objects of the type EncryptString, each with di`erent text values and keys.
    cout << " 1. Create 3 objects of the type EncryptString, each with different text values and keys. \n\nMade A B and C with different text values and keys.\n\n";
    EncryptString A("Hello, World!", 3);
    EncryptString B("World", 5);
    EncryptString C("Secret", 7);

    // 2. For each object, display its encrypted text and its correctly-decrypted text.
    cout << "2. For each object, display its encrypted text and its correctly-decrypted text.";
    cout << "\n\nObject A:";
    cout << "\nEncrypted: " << A.getEncryptedText();
    cout << "\nDecrypted (key=3): " << A.getDecryptedText(3);

    cout << "\n\nObject B:";
    cout << "\nEncrypted: " << B.getEncryptedText();
    cout << "\nDecrypted (key=5): " << B.getDecryptedText(5);

    cout << "\n\nObject C:";
    cout << "\nEncrypted: " << C.getEncryptedText();
    cout << "\nDecrypted (key=7): " << C.getDecryptedText(7);

    // 3. For one of the objects, attempt to decrypt the text using a wrong key. Display the incorrectly-decrypted text.
    cout << "\n\n3. For one of the objects, attempt to decrypt the text using a wrong key. Display the incorrectly-decrypted text.";
    cout << "\n\nObject A (incorrectly decrypted with key=5): " << A.getDecryptedText(5);

    // 4. For one of the objects, set the text to a new value with a different key. Display its encrypted text and its correctly-decrypted text.
    cout << "\n\n4. For one of the objects, set the text to a new value with a different key. Display its encrypted text and its correctly-decrypted text.";
    A.setText("New Text", 4);
    cout << "\n\nObject A (after setting new text with key=4):";
    cout << "\nEncrypted: " << A.getEncryptedText();
    cout << "\nDecrypted (key=4): " << A.getDecryptedText(4);

    // 5. Create a fourth EncryptString object as a copy of any one of the 3 EncryptString objects. Display its encrypted text and its correctly-decrypted text.
    cout << "\n\n5. Create a fourth EncryptString object as a copy of any one of the 3 EncryptString objects. Display its encrypted text and its correctly-decrypted text.";
    EncryptString D = B; // Copy constructor
    cout << "\n\nObject D (copy of Object B):";
    cout << "\nEncrypted: " << D.getEncryptedText();
    cout << "\nDecrypted (key=5): " << D.getDecryptedText(5);

    return 0; // return 0 to indicate that the program ended successfully.
}
