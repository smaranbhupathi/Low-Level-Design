#include <bits/stdc++.h>
using namespace std;

// class FileLogger{
//     public:
//         void log(string data){
//             cout<<"Data :"<<data<<'\n';
//         }
// };

// class serviceLayer{
//     private:
//         FileLogger fileLogger;
//     public:
//         void Addcustomer(string name)
//         {
//             fileLogger.log(name);
//         }

//         void DiaplayProduct(string productName)
//         {
//             fileLogger.log(productName);
//         }

// };
// If I wanted to log the data using the database rather than using file logger then I need to change at a lot of places


using namespace std;

class Logger {
    public:
        virtual void log(string data) = 0;
};

class FileLogger : public Logger {
    public:
        void log(string data) override {
            cout << "Logging into file Data : " << data << '\n';
        }
};

class DataBaseLogger : public Logger {
    public:
        void log(string data) override {
            cout << "Logging into database Data : " << data << '\n';
        }
};

class ServiceLayer {
    private:
        shared_ptr<Logger> logger;

    public:
        // Constructor to initialize the logger dependency
        ServiceLayer(shared_ptr<Logger> loggerService) : logger(loggerService) {}

        // Functions to log customer and product information
        void AddCustomer(string name) {
            logger->log("Customer Name: " + name);
        }

        void DisplayProduct(string productName) {
            logger->log("Product Name: " + productName);
        }
};

int main() {
    auto fileLogger = make_shared<FileLogger>();
    ServiceLayer serviceLayer(fileLogger);

    // Testing the functions
    serviceLayer.AddCustomer("Alice");
    serviceLayer.DisplayProduct("Laptop");

    return 0;
}

