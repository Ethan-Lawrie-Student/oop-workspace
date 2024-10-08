#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>

class USBConnection {
private:
  int ID;

  USBConnection(){

  };

public:
  int get_id() { return ID; };
  static std::stack<int> ids;
  static USBConnection *CreateUsbConnection() {
    USBConnection *newUsbConnection = new USBConnection();

    if (!ids.empty()) {
      newUsbConnection->ID = ids.top();
      ids.pop();
      return newUsbConnection;
    } else {
      return nullptr;
    }
  };
  ~USBConnection() {
    ids.push(ID);
  }
};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif
