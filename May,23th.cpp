//1.
#include <iostream>
typedef struct box
{
	char maker[40];
	float height;
	float length;
	float volume;
};

void show_box(box);
int main()
{
	using namespace std;
	box b1 = { "BMW",20,100,b1.length * b1.height };
	box b2 = { "BENZ",30,200,b2.length * b2.height };
	cout << "print b1" << endl;
	show_box(b1);
	cout << "\nprint b2\n";
	show_box(b2);
	return 0;
}

void show_box(box b)
{
	std::cout << "this is maker: " << b.maker << "\n";
	std::cout << "this is height: " << b.height;
	std::cout << "\nthis is length: " << b.length;
	std::cout << "\nthis is volume: " << b.volume << std::endl;
}









//2.
#include <iostream>
typedef struct box
{
	char maker[40];
	float height;
	float length;
	float width;
	float volume;
};

void show_box(box *pb);
int main()
{
	using namespace std;
	box b1 = { "BMW",20.0,100.0,50.0,b1.length * b1.height*b1.width };
	box b2 = { "BENZ",30.0,200.0,30.0,b2.length * b2.height*b2.width };
	cout << "print b1" << endl;
	show_box(&b1);
	cout << "\nprint b2\n";
	show_box(&b2);
	return 0;
}

void show_box(box *pb)
{
	std::cout << "this is maker: " << pb->maker << "\n";
	std::cout << "this is height: " << pb->height;
	std::cout << "\nthis is length: " << pb->length;
	std::cout << "\nthis is volume: " << pb->volume << std::endl;
}











//3.
//有问题 volume值不对
#include <iostream>
const int MaxSize = 40;
typedef struct box
{
	char maker[MaxSize];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(const box*);
float  caculate_box(box*);
box input_box(box*);

int main()
{
	int value = 0;
	using namespace std;
	cout << "please input how many box there is: ";
	cin >> value;
	cout << "\n";
	box* p = new box[value];
	int i = 0;
	//initate box for value
	for ( i = 0; i < value; i++)
	{
		p[i] = input_box(&p[i]);
	}
	//print box for value
	for (int i = 0; i < value; i++)
	{
		show_box(&p[i]);
	}
	return 0;
}

box input_box(box* pb)
{
	using namespace std;
	cout << "please enter the maker: ";
	cin >> pb->maker;
	cout << "please enter the height: ";
	cin >> pb->height;
	cout << "please enter the width: ";
	cin >> pb->width;
	cout << R"*(please enter the length: )*";
	cin >> pb->length;
	pb->volume = caculate_box(pb);
	cout << endl;
	return *pb;
}

float  caculate_box(box* pb)
{
	pb->volume = pb->height * pb->width * pb->volume;
	return pb->volume;
}

void show_box(const box* pb)
{
	using namespace std;
	cout << "this is maker: " << pb->maker;
	cout << "\nthis is height: " << pb->height;
	cout << "\nthis is width: " << pb->width;
	cout << "\nthis is length: " << pb->length;
	cout << "\nthis is volume: " << pb->volume;
	cout << endl;
}






//6.
#include <iostream>
const int MaxSize = 20;
int input_array(float[], int);
int main()
{
	float arr[MaxSize]{};
	int sum = 0;
	sum = input_array(arr, MaxSize);
	std::cout << "total input: " << sum;
	return 0;
}

int input_array(float arr[], int n)
{
	using namespace std;
	int sum = 0;
	cout << "please enter the first float figure: ";
	//error
	/*for (int i = 0; i < n && (cin >> arr[i]); i++)
	{
		cout << "please enter another one: ";
		sum++;
		cin >> arr[i+1];
		cout << "please enter another one: ";
	}*/
	int i = 0;
	while ((cin >> arr[i])&&i<n)
	{
		sum++;
		i++;
		cout << "please enter the first float figure: ";
	}
	return sum;
}
