class InterfaceList
{
public:
 virtual int add(int element, int position)=0;
 virtual void remove(int position)=0;
 virtual int get(int position)=0;
 virtual int size()=0;
};


class List : public InterfaceList
{
public:
  int add(int element, int position)
    {
      ;
    }
  void remove(int position)
    {
      ;
    }
  int get(int position)
    {
      ;
    }
  int size()
    {
      ;
    }
};
