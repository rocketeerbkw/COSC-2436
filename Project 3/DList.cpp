/**
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

void List::insert(ElementType item, int pos) {
  if (mySize == myCapacity) {
    this->resize(myCapacity * 2);
  }
}

//--- Definition of resize()
void List::resize( int newCapacity) {
  // Don't resize to smaller than what we already are (otherwise there'd be
  //   data loss).
  if (newCapacity < mySize) {
    newCapacity = mySize;
  }

  // No need to resize if we're already at new capacity
  if (newCapacity == myCapacity) {
    return;
  }

  // Create new array of size `newCapacity` and copy all the values from the
  //   current array into it. Then set new array as default.
  ElementType *newArray = new(nothrow) ElementType[newCapacity];
  assert(newArray);

  for (int i = 0; i < mySize; i++) {
    newArray[i] = myArray[i];
  }

  delete [] myArray;

  myArray = newArray;
  myCapacity = newCapacity;
}

//--- Definition of length()
int List::length() {
  return mySize;
}
