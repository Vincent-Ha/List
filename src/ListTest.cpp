/**

 * Vincent Ha

 * CIS 22C, Winter 2017

 */

#include <iostream>
#include <string>
#include "List.h"
using namespace std;

void intList();
void stringList();
void doubleList();
void charList();

int main() {
	intList();
	cout << endl;
	stringList();
	cout << endl;
	doubleList();
	cout << endl;
	charList();
}

void intList() {

	//instantiate two lists for testing purposes
	List<int> L1;
	List<int> L2;
	List<int> L3;
	List<int> L4(L3);
	cout << "Integer List Testing" << endl;
	cout << "--------------------" << endl;
	cout << "Testing insertFirst() and printList()" << endl;
	cout << "-------------------------------------" << endl;
	//Testing insertFirst() and printList()
	cout << "Should print out an empty line: \n";
	L1.printList(); //Should not print any message to the screen, just an empty line

	L1.insertFirst(0);
	cout << "Should print out 0 and then move to a new line: \n";
	L1.printList();
	for (int i = 1; i <= 10; i++) { //inserting the the values 1-10 into L1
		L1.insertFirst(i);
	}

	cout
			<< "Should print out 10 9 8 7 6 5 4 3 2 1 0 and then move to a new line: \n";
	L1.printList();
	cout
			<< "--------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Should print out an empty line: " << endl;
	L2.printList();

	L2.insertLast(11);
	cout << "Should print out 11 then move to the next line: " << endl;
	L2.printList();

	for (int b = 0; b < 10; b++) {
		L2.insertLast(11 + b);
	}
	cout
			<< "Should print out 11 11 12 13 14 15 16 17 18 19 20 then move to the next line: "
			<< endl;
	L2.printList();
	cout
			<< "-----------------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeFirst()" << endl;
	cout << "---------------------" << endl;
	cout << "Contents of L2: " << endl;
	L2.printList();
	cout << "Should print out previous contents of L2 except for 0: " << endl;
	L2.removeFirst();
	L2.printList();
	cout << endl;

	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout
			<< "trying removeFirst() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L3.removeFirst();
	cout << endl;

	cout << "Adding an element to List L3: " << endl;
	L3.insertFirst(72);
	L3.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L3.removeFirst();
	L3.printList();
	cout << "---------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing removeLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Contents of L1: " << endl;
	L1.printList();
	cout
			<< "Should print out previous contents of L1 except for the previous last element: "
			<< endl;
	L1.removeLast();
	L1.printList();
	cout << endl;

	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout
			<< "Trying to removeLast() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L3.removeLast();
	cout << endl;

	cout << "Adding an element to L3: " << endl;
	L3.insertLast(76);
	L3.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L3.removeLast();
	L3.printList();
	cout << "---------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing isEmpty()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout << "Return value of L3.isEmpty() (Should return true): " << boolalpha
			<< L3.isEmpty() << endl;
	cout << endl;

	cout << "Contents of L2 (Should not be empty): " << endl;
	L2.printList();
	cout << "Return value of L2.isEmpty() (Should return false): " << boolalpha
			<< L2.isEmpty() << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getSize()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout << "Return value of L3.getSize() (Should return 0): " << endl;
	cout << L3.getSize() << endl;
	cout << endl;

	cout << "Contents of L2 (Should not be empty): " << endl;
	L2.printList();
	cout << "Return value of L2.getSize() (Should return 10): " << endl;
	cout << L2.getSize() << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getFirst()" << endl;
	cout << "------------------" << endl;
	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout << "Return value of L3.getFirst() (Would throw an assertion if done): "
			<< endl;
	//cout << L3.getFirst() << endl;
	cout << endl;

	cout << "Contents of L2 (Should not be empty): " << endl;
	L2.printList();
	cout << "Return value of L2.getFirst() (Should return 11): " << endl;
	cout << L2.getFirst() << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getLast()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout << "Return value of L3.getLast() (Would throw an assertion if done): "
			<< endl;
	//cout << L3.getLast() << endl;
	cout << endl;

	cout << "Contents of L2 (Should not be empty): " << endl;
	L2.printList();
	cout << "Return value of L2.getLast() (Should return 20): " << endl;
	cout << L2.getLast() << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing startIterator(), getIterator() and offEnd()" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Contents of L1: " << endl;
	L1.printList();
	cout << "result of offEnd() (Should return true):" << endl;
	cout << boolalpha << L1.offEnd() << endl;
	cout << "Using getIterator on L1 (Would throw an assertion if done): "
			<< endl;
	//cout << L1.getIterator() << endl;

	cout
			<< "Using startIterator() and offEnd() (Should print false and then 10 on two lines):"
			<< endl;
	L1.startIterator();
	cout << boolalpha << L1.offEnd() << endl;
	cout << L1.getIterator() << endl;
	cout << endl;

	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout << "Using startIterator on empty list (Would throw an assertion): "
			<< endl;
	//L3.startIterator();
	//cout << L3.getIterator() << endl;
	cout << "-------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeIterator()" << endl;
	cout << "------------------------" << endl;
	cout << "Contents of L1: " << endl;
	L1.printList();
	cout << "Location of the iterator(): " << endl;
	cout << L1.getIterator() << endl;
	cout << "Using removeIterator() (Should print 9 8 7 6 5 4 3 2 1): " << endl;
	L1.removeIterator();
	L1.printList();
	cout << endl;

	cout << "Contents of L3 (Should be empty): " << endl;
	L3.printList();
	cout
			<< "Using removeIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L3.removeIterator();
	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertIterator() and advanceIterator()" << endl;
	cout << "----------------------------------------------" << endl;
	L3.insertLast(11);
	cout << "Contents of L3: " << endl;
	L3.printList();
	L3.startIterator();
	cout << "L3's iterator: " << endl;
	cout << L3.getIterator() << endl;
	cout << "Advancing the iterator (getIterator() would throw an assertion): "
			<< endl;
	L3.advanceIterator();
	//cout << L1.getIterator() << endl;
	cout << endl;

	cout << "Resetting L3's iterator: " << endl;
	L3.startIterator();
	cout << L3.getIterator() << endl;
	cout << "Inserting 8 into the list (Should print 11 8): " << endl;
	L3.insertIterator(8);
	L3.printList();
	cout << "Now inserting 31 into the list (Should print 11 31 8)" << endl;
	L3.insertIterator(31);
	L3.printList();
	cout << "Advancing the iterator (Should print 31): " << endl;
	L3.advanceIterator();
	cout << L3.getIterator() << endl;
	cout << endl;

	L3.removeLast();
	L3.removeLast();
	L3.removeLast();
	cout << "Contents of new L3 (Should be empty): " << endl;
	L3.printList();
	cout
			<< "Trying advanceIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L3.advanceIterator();
	cout
			<< "Trying insertIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L3.insertIterator(123);
	cout
			<< "--------------------------------------------------------------------"
			<< endl;
}

void stringList() {
	List<string> L4;
	List<string> L5;
	List<string> L6;

	cout << "String List Testing" << endl;
	cout << "-------------------" << endl;
	cout << "Testing insertFirst() and printList()" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Should print an empty line: " << endl;
	L4.printList();

	L4.insertFirst("Hello");
	cout << "Should print: Hello :and then move to a new line: " << endl;
	L4.printList();
	L4.insertFirst("cat");
	L4.insertFirst("dogs");
	L4.insertFirst("What");
	cout << "Should print: What dogs cat Hello :and then move to a new line: "
			<< endl;
	L4.printList();
	cout << "---------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Should print out an empty line: " << endl;
	L5.printList();

	L5.insertLast("bob");
	cout << "Should print out: bob :and then move to the next line: " << endl;
	L5.printList();

	L5.insertLast("James");
	L5.insertLast("Nom");
	L5.insertLast("Marley");
	cout
			<< "Should print out: bob James Nom Marley :and then move to a new line: "
			<< endl;
	L5.printList();
	cout << endl;

	cout << "Testing removeFirst()" << endl;
	cout << "---------------------" << endl;
	cout << "Contents of L4: " << endl;
	L4.printList();
	cout << "Should print out previous contents of L4 except for What: "
			<< endl;
	L4.removeFirst();
	L4.printList();
	cout << endl;

	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout
			<< "trying removeFirst() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L6.removeFirst();
	cout << endl;

	cout << "Adding an element to List L6: " << endl;
	L6.insertFirst("Yellow");
	L6.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L6.removeFirst();
	L6.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing removeLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Contents of L1: " << endl;
	L4.printList();
	cout << "Should print out previous contents of L4 except for Hello: "
			<< endl;
	L4.removeLast();
	L4.printList();
	cout << endl;

	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout
			<< "Trying to removeLast() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L6.removeLast();
	cout << endl;

	cout << "Adding an element to L6: " << endl;
	L6.insertLast("food");
	L6.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L6.removeLast();
	L6.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing isEmpty()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout << "Return value of L6.isEmpty() (Should return true): " << boolalpha
			<< L6.isEmpty() << endl;
	cout << endl;

	cout << "Contents of L4 (Should not be empty): " << endl;
	L4.printList();
	cout << "Return value of L4.isEmpty() (Should return false): " << boolalpha
			<< L4.isEmpty() << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getSize()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout << "Return value of L6.getSize() (Should return 0): " << L6.getSize()
			<< endl;
	cout << endl;

	cout << "Contents of L4 (Should not be empty): " << endl;
	L4.printList();
	cout << "Return value of L4.getSize() (Should return 2): " << L4.getSize()
			<< endl;
	cout << "-----------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getFirst()" << endl;
	cout << "------------------" << endl;
	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout << "Return value of L6.getFirst() (Would throw an assertion if done): "
			<< endl;
	//cout << L6.getFirst() << endl;
	cout << endl;

	cout << "Contents of L4 (Should not be empty): " << endl;
	L4.printList();
	cout << "Return value of L4.getFirst() (Should return dogs): " << endl;
	cout << L4.getFirst() << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getLast()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout << "Return value of L6.getLast() (Would throw an assertion if done): "
			<< endl;
	//cout << L6.getLast() << endl;
	cout << endl;

	cout << "Contents of L4 (Should not be empty): " << endl;
	L4.printList();
	cout << "Return value of L4.getLast() (Should return cat): " << endl;
	cout << L4.getLast() << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing startIterator(), getIterator() and offEnd()" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Contents of L4: " << endl;
	L4.printList();
	cout << "result of offEnd() (Should return true):" << endl;
	cout << boolalpha << L4.offEnd() << endl;
	cout << "Using getIterator on L4 (Would throw an assertion if done): "
			<< endl;
	//cout << L4.getIterator() << endl;

	cout
			<< "Using startIterator() and offEnd() (Should print false and then dogs on two lines):"
			<< endl;
	L4.startIterator();
	cout << boolalpha << L4.offEnd() << endl;
	cout << L4.getIterator() << endl;
	cout << endl;

	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout << "Using startIterator on empty list (Would throw an assertion): "
			<< endl;
	//L6.startIterator();
	//cout << L6.getIterator() << endl;
	cout << "-------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeIterator()" << endl;
	cout << "------------------------" << endl;
	cout << "Contents of L4: " << endl;
	L4.printList();
	cout << "Location of the iterator(): " << endl;
	cout << L4.getIterator() << endl;
	cout << "Using removeIterator() (Should print cat): " << endl;
	L4.removeIterator();
	L4.printList();
	cout << endl;

	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout
			<< "Using removeIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L6.removeIterator();
	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertIterator() and advanceIterator()" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Contents of L4: " << endl;
	L4.printList();
	L4.startIterator();
	cout << "L4's iterator: " << endl;
	cout << L4.getIterator() << endl;
	cout << "Advancing the iterator (getIterator() would throw an assertion): "
			<< endl;
	L4.advanceIterator();
	//cout << L4.getIterator() << endl;
	cout << endl;

	cout << "Resetting L4's iterator: " << endl;
	L4.startIterator();
	cout << L4.getIterator() << endl;
	cout << "Inserting \"dogs\" into the list (Should print cat dogs): "
			<< endl;
	L4.insertIterator("dogs");
	L4.printList();
	cout
			<< "Now inserting \"hamster\" into the list (Should print cat hamster dogs)"
			<< endl;
	L4.insertIterator("hamster");
	L4.printList();
	cout << "Advancing the iterator (Should print hamster): " << endl;
	L4.advanceIterator();
	cout << L4.getIterator() << endl;
	cout << endl;

	cout << "Contents of L6 (Should be empty): " << endl;
	L6.printList();
	cout
			<< "Trying advanceIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L6.advanceIterator();
	cout
			<< "Trying insertIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L6.insertIterator("bob");
	cout
			<< "--------------------------------------------------------------------"
			<< endl;
}

void doubleList() {
	//instantiate two lists for testing purposes
	List<double> L7;
	List<double> L8;
	List<double> L9;

	cout << "Double List Testing" << endl;
	cout << "-------------------" << endl;
	cout << "Testing insertFirst() and printList()" << endl;
	cout << "-------------------------------------" << endl;
	//Testing insertFirst() and printList()
	cout << "Should print out an empty line: \n";
	L7.printList(); //Should not print any message to the screen, just an empty line

	L7.insertFirst(0);
	cout << "Should print out 0 and then move to a new line: \n";
	L7.printList();

	for (double i = 1; i < 2; i += 0.1) { //inserting the the values 1-2 into L7
		L7.insertFirst(i);
	}

	cout
			<< "Should print out 1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1 0 and then move to a new line: \n";
	L7.printList();
	cout
			<< "---------------------------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Should print out an empty line: " << endl;
	L8.printList();

	L8.insertLast(11.9);
	cout << "Should print out 11.9 then move to the next line: " << endl;
	L8.printList();

	for (double b = 0; b < 3; b += 0.5) {
		L8.insertLast(11 + b);
	}

	cout
			<< "Should print out 11.9 11 11.5 12 12.5 13 13.5 then move to the next line: "
			<< endl;
	L8.printList();
	cout
			<< "-----------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeFirst()" << endl;
	cout << "---------------------" << endl;
	cout << "Contents of L8: " << endl;
	L8.printList();
	cout << "Should print out previous contents of L8 except for 11.9: "
			<< endl;
	L8.removeFirst();
	L8.printList();
	cout << endl;

	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout
			<< "trying removeFirst() on an empty list (Would throw an assertion if done.): "
			<< endl;
	//L9.removeFirst();
	cout << endl;

	cout << "Adding an element to List L9: " << endl;
	L9.insertFirst(72.1);
	L9.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L9.removeFirst();
	L9.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing removeLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Contents of L7: " << endl;
	L7.printList();
	cout << "Should print out previous contents of L7 except for 0: " << endl;
	L7.removeLast();
	L7.printList();
	cout << endl;

	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout
			<< "Trying to removeLast() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L9.removeLast();
	cout << endl;

	cout << "Adding an element to L9: " << endl;
	L9.insertLast(76.12);
	L9.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L9.removeLast();
	L9.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing isEmpty()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout << "Return value of L9.isEmpty() (Should return true): " << boolalpha
			<< L9.isEmpty() << endl;
	cout << endl;

	cout << "Contents of L8 (Should not be empty): " << endl;
	L8.printList();
	cout << "Return value of L8.isEmpty() (Should return false): " << boolalpha
			<< L8.isEmpty() << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getSize()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout << "Return value of L9.getSize() (Should return 0): " << L9.getSize()
			<< endl;
	cout << endl;

	cout << "Contents of L8 (Should not be empty): " << endl;
	L8.printList();
	cout << "Return value of L2.getSize() (Should return 6): " << L8.getSize()
			<< endl;
	cout << "-----------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getFirst()" << endl;
	cout << "------------------" << endl;
	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout << "Return value of L9.getFirst() (Would throw an assertion if done): "
			<< endl;
	//cout << L9.getFirst() << endl;
	cout << endl;

	cout << "Contents of L8 (Should not be empty): " << endl;
	L8.printList();
	cout << "Return value of L8.getFirst() (Should return 11): " << endl;
	cout << L8.getFirst() << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getLast()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout << "Return value of L9.getLast() (Would throw an assertion if done): "
			<< endl;
	//cout << L9.getLast() << endl;
	cout << endl;

	cout << "Contents of L8 (Should not be empty): " << endl;
	L8.printList();
	cout << "Return value of L8.getLast() (Should return 13.5): " << endl;
	cout << L8.getLast() << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing startIterator(), getIterator() and offEnd()" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Contents of L7: " << endl;
	L7.printList();
	cout << "result of offEnd() (Should return true):" << endl;
	cout << boolalpha << L7.offEnd() << endl;
	cout << "Using getIterator on L7 (Would throw an assertion if done): "
			<< endl;
	//cout << L7.getIterator() << endl;

	cout
			<< "Using startIterator() and offEnd() (Should print false and then 1.9 on two lines):"
			<< endl;
	L7.startIterator();
	cout << boolalpha << L7.offEnd() << endl;
	cout << L7.getIterator() << endl;
	cout << endl;

	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout << "Using startIterator on empty list (Would throw an assertion): "
			<< endl;
	//L9.startIterator();
	//cout << L9.getIterator() << endl;
	cout << "-------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeIterator()" << endl;
	cout << "------------------------" << endl;
	cout << "Contents of L7: " << endl;
	L7.printList();
	cout << "Location of the iterator(): " << endl;
	cout << L7.getIterator() << endl;
	cout
			<< "Using removeIterator() (Should print everything except the iterator): "
			<< endl;
	L7.removeIterator();
	L7.printList();
	cout << endl;

	cout << "Contents of L9 (Should be empty): " << endl;
	L9.printList();
	cout
			<< "Using removeIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L9.removeIterator();
	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertIterator() and advanceIterator()" << endl;
	cout << "----------------------------------------------" << endl;
	L9.insertLast(54.4);
	cout << "Contents of L9: " << endl;
	L9.printList();
	L9.startIterator();
	cout << "L9's iterator: " << endl;
	cout << L9.getIterator() << endl;
	cout << "Advancing the iterator (getIterator() would throw an assertion): "
			<< endl;
	L9.advanceIterator();
	//cout << L9.getIterator() << endl;
	cout << endl;

	cout << "Resetting L9's iterator: " << endl;
	L9.startIterator();
	cout << L9.getIterator() << endl;
	cout << "Inserting 1.98 into the list (Should print 54.5 1.98): " << endl;
	L9.insertIterator(1.98);
	L9.printList();
	cout << "Now inserting 6.45 into the list (Should print 54.5 6.45 1.98)"
			<< endl;
	L9.insertIterator(6.45);
	L9.printList();
	cout << "Advancing the iterator (Should print 6.45): " << endl;
	L9.advanceIterator();
	cout << L9.getIterator() << endl;
	cout << endl;

	L9.removeLast();
	L9.removeLast();
	L9.removeLast();
	cout << "Contents of the new L9 (Should be empty): " << endl;
	L9.printList();
	cout
			<< "Trying advanceIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L9.advanceIterator();
	cout
			<< "Trying insertIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L9.insertIterator("bob");
	cout
			<< "--------------------------------------------------------------------"
			<< endl;
}

void charList() {
	//instantiate two lists for testing purposes
	List<char> L10;
	List<char> L11;
	List<char> L12;

	cout << "Char List Testing" << endl;
	cout << "-----------------" << endl;
	cout << "Testing insertFirst() and printList()" << endl;
	cout << "-------------------------------------" << endl;
	//Testing insertFirst() and printList()
	cout << "Should print out an empty line: \n";
	L10.printList(); //Should not print any message to the screen, just an empty line

	L10.insertFirst('a');
	cout << "Should print out a and then move to a new line: \n";
	L10.printList();
	for (char i = 'b'; i <= 'g'; i++) { //inserting the the values b-g into L10
		L10.insertFirst(i);
	}

	cout << "Should print out g f e d c b a and then move to a new line: \n";
	L10.printList();
	cout << endl;

	cout << "Testing insertLast()" << endl;
	cout << "Should print out an empty line: " << endl;
	L11.printList();

	L11.insertLast('z');
	cout << "Should print out z then move to the next line: " << endl;
	L11.printList();

	for (char i = 'y'; i >= 'o'; i--) {
		L11.insertLast(i);
	}

	cout
			<< "Should print out z y x w v u t s r q p o then move to the next line: "
			<< endl;
	L11.printList();
	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeFirst()" << endl;
	cout << "---------------------" << endl;
	cout << "Contents of L10: " << endl;
	L10.printList();
	cout << "Should print out previous contents of L10 except for g: " << endl;
	L10.removeFirst();
	L10.printList();
	cout << endl;

	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout
			<< "trying removeFirst() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L12.removeFirst();
	cout << endl;

	cout << "Adding an element to List L12: " << endl;
	L12.insertFirst('h');
	L12.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L12.removeFirst();
	L12.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing removeLast()" << endl;
	cout << "--------------------" << endl;
	cout << "Contents of L11: " << endl;
	L11.printList();
	cout << "Should print out previous contents of L10 except for o: " << endl;
	L11.removeLast();
	L11.printList();
	cout << endl;

	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout
			<< "Trying to removeLast() on an empty list (Would throw an assertion if done): "
			<< endl;
	//L12.removeLast();
	cout << endl;

	cout << "Adding an element to L12: " << endl;
	L12.insertLast('b');
	L12.printList();
	cout << "Removing the single element (Should print an empty line): "
			<< endl;
	L12.removeLast();
	L12.printList();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing isEmpty()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout << "Return value of L12.isEmpty() (Should return true): " << boolalpha
			<< L12.isEmpty() << endl;
	cout << endl;

	cout << "Contents of L10 (Should not be empty): " << endl;
	L10.printList();
	cout << "Return value of L10.isEmpty() (Should return false): " << boolalpha
			<< L10.isEmpty() << endl;
	cout << "----------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getSize()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout << "Return value of L12.getSize() (Should return 0): " << L12.getSize()
			<< endl;
	cout << endl;

	cout << "Contents of L10 (Should not be empty): " << endl;
	L12.printList();
	cout << "Return value of L10.getSize() (Should return 6): " << L10.getSize()
			<< endl;
	cout << "-----------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getFirst()" << endl;
	cout << "------------------" << endl;
	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout
			<< "Return value of L12.getFirst() (Would throw an assertion if done): "
			<< endl;
	//cout << L12.getFirst() << endl;
	cout << endl;

	cout << "Contents of L10 (Should not be empty): " << endl;
	L10.printList();
	cout << "Return value of L8.getFirst() (Should return f): " << endl;
	cout << L10.getFirst() << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing getLast()" << endl;
	cout << "-----------------" << endl;
	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout << "Return value of L12.getLast() (Would throw an assertion if done): "
			<< endl;
	//cout << L12.getLast() << endl;
	cout << endl;

	cout << "Contents of L10 (Should not be empty): " << endl;
	L10.printList();
	cout << "Return value of L10.getLast() (Should return a): " << endl;
	cout << L10.getLast() << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;

	cout << "Testing startIterator(), getIterator() and offEnd()" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Contents of L12: " << endl;
	L12.printList();
	cout << "result of offEnd() (Should return true):" << endl;
	cout << boolalpha << L12.offEnd() << endl;
	cout << "Using getIterator on L12 (Would throw an assertion if done): "
			<< endl;
	//cout << L12.getIterator() << endl;
	cout << endl;

	cout << "Contents of L10: " << endl;
	L10.printList();
	cout
			<< "Using startIterator() and offEnd() (Should print false and then f on two lines):"
			<< endl;
	L10.startIterator();
	cout << boolalpha << L10.offEnd() << endl;
	cout << L10.getIterator() << endl;
	cout << endl;

	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout << "Using startIterator on empty list (Would throw an assertion): "
			<< endl;
	//L12.startIterator();
	//cout << L12.getIterator() << endl;
	cout << "-------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing removeIterator()" << endl;
	cout << "------------------------" << endl;
	cout << "Contents of L10: " << endl;
	L10.printList();
	cout << "Location of the iterator(): " << endl;
	cout << L10.getIterator() << endl;
	cout << "Using removeIterator() (Should print e d c b a): " << endl;
	L10.removeIterator();
	L10.printList();
	cout << endl;

	cout << "Contents of L12 (Should be empty): " << endl;
	L12.printList();
	cout
			<< "Using removeIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L6.removeIterator();
	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	cout << "Testing insertIterator() and advanceIterator()" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Contents of L12: " << endl;
	L12.insertFirst('k');
	L12.printList();
	L12.startIterator();
	cout << "L12's iterator: " << endl;
	cout << L12.getIterator() << endl;
	cout << "Advancing the iterator (getIterator() would throw an assertion): "
			<< endl;
	L12.advanceIterator();
	//cout << L4.getIterator() << endl;
	cout << endl;

	cout << "Resetting L12's iterator: " << endl;
	L12.startIterator();
	cout << L12.getIterator() << endl;
	cout << "Inserting j into the list (Should print k j): " << endl;
	L12.insertIterator('j');
	L12.printList();
	cout << "Now inserting 'l' into the list (Should print k l j )" << endl;
	L12.insertIterator('l');
	L12.printList();
	cout << "Advancing the iterator (Should print l): " << endl;
	L12.advanceIterator();
	cout << L12.getIterator() << endl;
	cout << endl;

	L12.removeLast();
	L12.removeLast();
	L12.removeLast();
	cout << "Contents of new L12 (Should be empty): " << endl;
	L12.printList();
	cout
			<< "Trying advanceIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L12.advanceIterator();
	cout
			<< "Trying insertIterator() on an empty list (Would throw an assertion): "
			<< endl;
	//L12.insertIterator('i');
	cout
			<< "--------------------------------------------------------------------"
			<< endl;
}

/*
 * Output
Integer List Testing
--------------------
Testing insertFirst() and printList()
-------------------------------------
Should print out an empty line:

Should print out 0 and then move to a new line:
0
Should print out 10 9 8 7 6 5 4 3 2 1 0 and then move to a new line:
10 9 8 7 6 5 4 3 2 1 0
--------------------------------------------------------------------

Testing insertLast()
--------------------
Should print out an empty line:

Should print out 11 then move to the next line:
11
Should print out 11 11 12 13 14 15 16 17 18 19 20 then move to the next line:
11 11 12 13 14 15 16 17 18 19 20
-----------------------------------------------------------------------------

Testing removeFirst()
---------------------
Contents of L2:
11 11 12 13 14 15 16 17 18 19 20
Should print out previous contents of L2 except for 0:
11 12 13 14 15 16 17 18 19 20

Contents of L3 (Should be empty):

trying removeFirst() on an empty list (Would throw an assertion if done):

Adding an element to List L3:
72
Removing the single element (Should print an empty line):

---------------------------------------------------------

Testing removeLast()
--------------------
Contents of L1:
10 9 8 7 6 5 4 3 2 1 0
Should print out previous contents of L1 except for the previous last element:
10 9 8 7 6 5 4 3 2 1

Contents of L3 (Should be empty):

Trying to removeLast() on an empty list (Would throw an assertion if done):

Adding an element to L3:
76
Removing the single element (Should print an empty line):

---------------------------------------------------------

Testing isEmpty()
-----------------
Contents of L3 (Should be empty):

Return value of L3.isEmpty() (Should return true): true

Contents of L2 (Should not be empty):
11 12 13 14 15 16 17 18 19 20
Return value of L2.isEmpty() (Should return false): false
---------------------------------------------------

Testing getSize()
-----------------
Contents of L3 (Should be empty):

Return value of L3.getSize() (Should return 0):
0

Contents of L2 (Should not be empty):
11 12 13 14 15 16 17 18 19 20
Return value of L2.getSize() (Should return 10):
10
------------------------------------------------

Testing getFirst()
------------------
Contents of L3 (Should be empty):

Return value of L3.getFirst() (Would throw an assertion if done):

Contents of L2 (Should not be empty):
11 12 13 14 15 16 17 18 19 20
Return value of L2.getFirst() (Should return 11):
11
-------------------------------------------------

Testing getLast()
-----------------
Contents of L3 (Should be empty):

Return value of L3.getLast() (Would throw an assertion if done):

Contents of L2 (Should not be empty):
11 12 13 14 15 16 17 18 19 20
Return value of L2.getLast() (Should return 20):
20
-------------------------------------------------

Testing startIterator(), getIterator() and offEnd()
---------------------------------------------------
Contents of L1:
10 9 8 7 6 5 4 3 2 1
result of offEnd() (Should return true):
true
Using getIterator on L1 (Would throw an assertion if done):
Using startIterator() and offEnd() (Should print false and then 10 on two lines):
false
10

Contents of L3 (Should be empty):

Using startIterator on empty list (Would throw an assertion):
-------------------------------------------------------------

Testing removeIterator()
------------------------
Contents of L1:
10 9 8 7 6 5 4 3 2 1
Location of the iterator():
10
Using removeIterator() (Should print 9 8 7 6 5 4 3 2 1):
9 8 7 6 5 4 3 2 1

Contents of L3 (Should be empty):

Using removeIterator() on an empty list (Would throw an assertion):
-------------------------------------------------------------------

Testing insertIterator() and advanceIterator()
----------------------------------------------
Contents of L3:
11
L3's iterator:
11
Advancing the iterator (getIterator() would throw an assertion):

Resetting L3's iterator:
11
Inserting 8 into the list (Should print 11 8):
11 8
Now inserting 31 into the list (Should print 11 31 8)
11 31 8
Advancing the iterator (Should print 31):
31

Contents of new L3 (Should be empty):

Trying advanceIterator() on an empty list (Would throw an assertion):
Trying insertIterator() on an empty list (Would throw an assertion):
--------------------------------------------------------------------

String List Testing
-------------------
Testing insertFirst() and printList()
-------------------------------------
Should print an empty line:

Should print: Hello :and then move to a new line:
Hello
Should print: What dogs cat Hello :and then move to a new line:
What dogs cat Hello
---------------------------------------------------------------

Testing insertLast()
--------------------
Should print out an empty line:

Should print out: bob :and then move to the next line:
bob
Should print out: bob James Nom Marley :and then move to a new line:
bob James Nom Marley

Testing removeFirst()
---------------------
Contents of L4:
What dogs cat Hello
Should print out previous contents of L4 except for What:
dogs cat Hello

Contents of L6 (Should be empty):

trying removeFirst() on an empty list (Would throw an assertion if done):

Adding an element to List L6:
Yellow
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing removeLast()
--------------------
Contents of L1:
dogs cat Hello
Should print out previous contents of L4 except for Hello:
dogs cat

Contents of L6 (Should be empty):

Trying to removeLast() on an empty list (Would throw an assertion if done):

Adding an element to L6:
food
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing isEmpty()
-----------------
Contents of L6 (Should be empty):

Return value of L6.isEmpty() (Should return true): true

Contents of L4 (Should not be empty):
dogs cat
Return value of L4.isEmpty() (Should return false): false
--------------------------------------------------

Testing getSize()
-----------------
Contents of L6 (Should be empty):

Return value of L6.getSize() (Should return 0): 0

Contents of L4 (Should not be empty):
dogs cat
Return value of L4.getSize() (Should return 2): 2
-----------------------------------------------

Testing getFirst()
------------------
Contents of L6 (Should be empty):

Return value of L6.getFirst() (Would throw an assertion if done):

Contents of L4 (Should not be empty):
dogs cat
Return value of L4.getFirst() (Should return dogs):
dogs
---------------------------------------------------

Testing getLast()
-----------------
Contents of L6 (Should be empty):

Return value of L6.getLast() (Would throw an assertion if done):

Contents of L4 (Should not be empty):
dogs cat
Return value of L4.getLast() (Should return cat):
cat
-------------------------------------------------

Testing startIterator(), getIterator() and offEnd()
---------------------------------------------------
Contents of L4:
dogs cat
result of offEnd() (Should return true):
true
Using getIterator on L4 (Would throw an assertion if done):
Using startIterator() and offEnd() (Should print false and then dogs on two lines):
false
dogs

Contents of L6 (Should be empty):

Using startIterator on empty list (Would throw an assertion):
-------------------------------------------------------------

Testing removeIterator()
------------------------
Contents of L4:
dogs cat
Location of the iterator():
dogs
Using removeIterator() (Should print cat):
cat

Contents of L6 (Should be empty):

Using removeIterator() on an empty list (Would throw an assertion):
-------------------------------------------------------------------

Testing insertIterator() and advanceIterator()
----------------------------------------------
Contents of L4:
cat
L4's iterator:
cat
Advancing the iterator (getIterator() would throw an assertion):

Resetting L4's iterator:
cat
Inserting "dogs" into the list (Should print cat dogs):
cat dogs
Now inserting "hamster" into the list (Should print cat hamster dogs)
cat hamster dogs
Advancing the iterator (Should print hamster):
hamster

Contents of L6 (Should be empty):

Trying advanceIterator() on an empty list (Would throw an assertion):
Trying insertIterator() on an empty list (Would throw an assertion):
--------------------------------------------------------------------

Double List Testing
-------------------
Testing insertFirst() and printList()
-------------------------------------
Should print out an empty line:

Should print out 0 and then move to a new line:
0
Should print out 1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1 0 and then move to a new line:
1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1 0
---------------------------------------------------------------------------------------

Testing insertLast()
--------------------
Should print out an empty line:

Should print out 11.9 then move to the next line:
11.9
Should print out 11.9 11 11.5 12 12.5 13 13.5 then move to the next line:
11.9 11 11.5 12 12.5 13 13.5
-----------------------------------------------------------------------

Testing removeFirst()
---------------------
Contents of L8:
11.9 11 11.5 12 12.5 13 13.5
Should print out previous contents of L8 except for 11.9:
11 11.5 12 12.5 13 13.5

Contents of L9 (Should be empty):

trying removeFirst() on an empty list (Would throw an assertion if done.):

Adding an element to List L9:
72.1
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing removeLast()
--------------------
Contents of L7:
1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1 0
Should print out previous contents of L7 except for 0:
1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1

Contents of L9 (Should be empty):

Trying to removeLast() on an empty list (Would throw an assertion if done):

Adding an element to L9:
76.12
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing isEmpty()
-----------------
Contents of L9 (Should be empty):

Return value of L9.isEmpty() (Should return true): true

Contents of L8 (Should not be empty):
11 11.5 12 12.5 13 13.5
Return value of L8.isEmpty() (Should return false): false
---------------------------------------------------

Testing getSize()
-----------------
Contents of L9 (Should be empty):

Return value of L9.getSize() (Should return 0): 0

Contents of L8 (Should not be empty):
11 11.5 12 12.5 13 13.5
Return value of L2.getSize() (Should return 6): 6
-----------------------------------------------

Testing getFirst()
------------------
Contents of L9 (Should be empty):

Return value of L9.getFirst() (Would throw an assertion if done):

Contents of L8 (Should not be empty):
11 11.5 12 12.5 13 13.5
Return value of L8.getFirst() (Should return 11):
11
-------------------------------------------------

Testing getLast()
-----------------
Contents of L9 (Should be empty):

Return value of L9.getLast() (Would throw an assertion if done):

Contents of L8 (Should not be empty):
11 11.5 12 12.5 13 13.5
Return value of L8.getLast() (Should return 13.5):
13.5
------------------------------------------------

Testing startIterator(), getIterator() and offEnd()
---------------------------------------------------
Contents of L7:
1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1
result of offEnd() (Should return true):
true
Using getIterator on L7 (Would throw an assertion if done):
Using startIterator() and offEnd() (Should print false and then 1.9 on two lines):
false
1.9

Contents of L9 (Should be empty):

Using startIterator on empty list (Would throw an assertion):
-------------------------------------------------------------

Testing removeIterator()
------------------------
Contents of L7:
1.9 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1
Location of the iterator():
1.9
Using removeIterator() (Should print everything except the iterator):
1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 1

Contents of L9 (Should be empty):

Using removeIterator() on an empty list (Would throw an assertion):
-------------------------------------------------------------------

Testing insertIterator() and advanceIterator()
----------------------------------------------
Contents of L9:
54.4
L9's iterator:
54.4
Advancing the iterator (getIterator() would throw an assertion):

Resetting L9's iterator:
54.4
Inserting 1.98 into the list (Should print 54.5 1.98):
54.4 1.98
Now inserting 6.45 into the list (Should print 54.5 6.45 1.98)
54.4 6.45 1.98
Advancing the iterator (Should print 6.45):
6.45

Contents of the new L9 (Should be empty):

Trying advanceIterator() on an empty list (Would throw an assertion):
Trying insertIterator() on an empty list (Would throw an assertion):
--------------------------------------------------------------------

Char List Testing
-----------------
Testing insertFirst() and printList()
-------------------------------------
Should print out an empty line:

Should print out a and then move to a new line:
a
Should print out g f e d c b a and then move to a new line:
g f e d c b a

Testing insertLast()
Should print out an empty line:

Should print out z then move to the next line:
z
Should print out z y x w v u t s r q p o then move to the next line:
z y x w v u t s r q p o
-------------------------------------------------------------------

Testing removeFirst()
---------------------
Contents of L10:
g f e d c b a
Should print out previous contents of L10 except for g:
f e d c b a

Contents of L12 (Should be empty):

trying removeFirst() on an empty list (Would throw an assertion if done):

Adding an element to List L12:
h
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing removeLast()
--------------------
Contents of L11:
z y x w v u t s r q p o
Should print out previous contents of L10 except for o:
z y x w v u t s r q p

Contents of L12 (Should be empty):

Trying to removeLast() on an empty list (Would throw an assertion if done):

Adding an element to L12:
b
Removing the single element (Should print an empty line):

--------------------------------------------------------

Testing isEmpty()
-----------------
Contents of L12 (Should be empty):

Return value of L12.isEmpty() (Should return true): true

Contents of L10 (Should not be empty):
f e d c b a
Return value of L10.isEmpty() (Should return false): false
----------------------------------------------------

Testing getSize()
-----------------
Contents of L12 (Should be empty):

Return value of L12.getSize() (Should return 0): 0

Contents of L10 (Should not be empty):

Return value of L10.getSize() (Should return 6): 6
-----------------------------------------------

Testing getFirst()
------------------
Contents of L12 (Should be empty):

Return value of L12.getFirst() (Would throw an assertion if done):

Contents of L10 (Should not be empty):
f e d c b a
Return value of L8.getFirst() (Should return f):
f
------------------------------------------------

Testing getLast()
-----------------
Contents of L12 (Should be empty):

Return value of L12.getLast() (Would throw an assertion if done):

Contents of L10 (Should not be empty):
f e d c b a
Return value of L10.getLast() (Should return a):
a
------------------------------------------------

Testing startIterator(), getIterator() and offEnd()
---------------------------------------------------
Contents of L12:

result of offEnd() (Should return true):
true
Using getIterator on L12 (Would throw an assertion if done):

Contents of L10:
f e d c b a
Using startIterator() and offEnd() (Should print false and then f on two lines):
false
f

Contents of L12 (Should be empty):

Using startIterator on empty list (Would throw an assertion):
-------------------------------------------------------------

Testing removeIterator()
------------------------
Contents of L10:
f e d c b a
Location of the iterator():
f
Using removeIterator() (Should print e d c b a):
e d c b a

Contents of L12 (Should be empty):

Using removeIterator() on an empty list (Would throw an assertion):
-------------------------------------------------------------------

Testing insertIterator() and advanceIterator()
----------------------------------------------
Contents of L12:
k
L12's iterator:
k
Advancing the iterator (getIterator() would throw an assertion):

Resetting L12's iterator:
k
Inserting j into the list (Should print k j):
k j
Now inserting 'l' into the list (Should print k l j )
k l j
Advancing the iterator (Should print l):
l

Contents of new L12 (Should be empty):

Trying advanceIterator() on an empty list (Would throw an assertion):
Trying insertIterator() on an empty list (Would throw an assertion):
--------------------------------------------------------------------
 */
