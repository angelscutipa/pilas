# pilas
class nodo
{
    public:
        int dato;
        nodo* sig;
        nodo(int a);
        virtual ~nodo();
    protected:
    private:
};
nodo::nodo(int a)
{
    dato=a;
    sig=NULL;
}

nodo::~nodo()
{
}
class stack
{
    public:
        nodo* primero;
        nodo* tempo;
        stack();
        void add(int a);
        void print();
        virtual ~stack();


    protected:

    private:
};
stack::stack()
{
    primero=tempo=NULL;
}

void stack::add(int a)
{
    if(!primero){
        primero=new nodo(a);
    }
    else{
        nodo* temp=tempo;
        temp=new nodo(a);
        temp->sig=primero;
        primero=temp;
    }
}

void stack::print()
{
    nodo* temp=primero;
    while(temp!=NULL){
        cout<<temp->dato<<endl;
        temp=temp->sig;
    }
}

stack::~stack()
{
}

int main()
{
    stack a;
    a.add(5);
    a.add(2);
    a.add(7);
    a.add(8);
    a.print();
    a.add(0);
    a.add(3);
    a.print();
    return 0;
}
