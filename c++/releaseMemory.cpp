int main() {
	int* ps = new int;
	delete ps; //double delete
	//delete ps; //problem

	int jugs = 5;
	int* pi = &jugs;
	//delete pi; //problem only for new

	return 0;
}