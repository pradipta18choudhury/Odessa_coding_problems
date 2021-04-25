/********
DCRYPT - Decrypt the message !
no tags 
Krishna loves Radha and wants to propose her in a different way. He wants to tell her the message, but he wanted the message to be a surprise. So, he plans to encrypt the message and send the encrypted message to Radha and he also gives the key to decrypt. He thinks that this might be a surprise to Radha. Help Radha to decrypt the message.

Rules of encryption :

0<=key<=51

The original message only consists of a-z, A-Z, and space.

Spaces are encrypted as '.'

If key lies between 0 and 25, then the character is added with the key and modulo is taken and the case is maintained. For eg, if key is 3, then a is decrypted to d and e is decrypted to h.

If key lies between 26 and 51, then the character is added with the key and modulo is taken and the case is inverted. For eg, if key is 29, then a is decrypted to D and E is decrypted to h.

Input
First line consists of t, the number of test cases. (1<=t<=20)

For each test case, first line consists of key. 0<=key<=51

Second line consists of the encrypted message S. |S| <= 100000

Output
For each test case, display the decrypted message in a separate line
********/

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> testcases;
    for (int test = 1; test <= testcases; ++test) {
        int key;
        string encrypted, decrypted;
        cin >> key >> encrypted;
        for (char c: encrypted) {
            if (c == '.')
                decrypted += ' ';
            else
                decrypted +=
                    ((c - (isupper(c)?'A':'a')) + key) % 26 +
                    ((((bool)isupper(c)) == (key <= 25))?'A':'a');
        }
        cout << decrypted << endl;
    }
    return 0;
}
