/**
 * Author:            Brandon Williams
 * Project Number:    3
 * Course:            Data Structures
 * Due Date:          Oct 27, 2013
 *
 * Create a class to represent a List with a dynamic size and the ability to
 * resize itself.
 *
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

int main( )
{
    int pos, ins, size = 2;
    List test(size);     // A List to perform tests on
    char choice;   // Command entered by the user

    cout << "I have initialized an empty list (capacity " << size << ") of integers." << endl;

    do
    {
        print_menu( );
        cout << "Enter choice: ";
        cin >> choice;
        choice = toupper(choice);

        switch (choice)
        {
            case 'A': // add code to add n integers to end of list
                      cout << "How many integers should I add to the end of the list? ";
                      cin >> size;

                      for (int i = 0; i < size; i++) {
                        int rnd = rand() % 999 + 1;
                        test.insert(rnd, test.length());
                      }
                      break;
            case 'C': // add code to change the capacity of the list
                      cout << "Resize list to what? ";
                      cin >> size;
                      test.resize(size);
                      break;
            case 'E': // add code to print result of empty( )
                      cout << "List is empty? " << boolalpha << test.empty() << endl;
                      break;
            case 'P': // add code to print the list
                      cout << "List (size " << test.length() << "): " << test << endl;
                      break;
            case 'I': // add code to input an item and position, and insert item into the list
                      cout << "What integer should I input? ";
                      cin >> ins;
                      cout << "What position should I insert it? ";
                      cin >> pos;
                      test.insert(ins, pos);
                      break;
            case 'R': // add code to input a position, and erase the item at that position
                      cout << "Erase integer at what position? ";
                      cin >> pos;
                      test.erase(pos);
                      break;
            case 'Q': cout << "Test program ended." << endl;
                      break;
            default:  cout << choice << " is invalid." << endl;
        }
    }
    while ((choice != 'Q'));

    system("pause");
    return EXIT_SUCCESS;
}
