#pragma once
#include <string>

class Data_ {
private:
	std::string destination;
	int price;

public:

	Data_();
	Data_(std::string destination_, int price_);
	~Data_();

	std::string GetDest() const { return destination; };
	int GetPrice() const { return price; }

};



public ref class ManagedData {
private:
	System::String^ destination;
	System::String^ price;

public:
	ManagedData(System::String^ destination_, System::String^ price_)
	{
		/*destination = gcnew System::String(destination_.c_str());*/
		destination = destination_;
		price = price_;
	}
	
	//ManagedData(System::String destination_, int price_)
	//{
	//	/*destination = gcnew System::String(destination_.c_str());*/
	//	destination = destination_;
	//	/*price = price_;*/
	//}

	property System::String^ Destination {
		System::String^ get() { return destination; }
	}

	property System::String^ Price {
		System::String^ get() { return price; }
	}
};
