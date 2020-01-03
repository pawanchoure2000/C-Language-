class stack
{
	char *data;int top;
	public:
		stack();
		~stack();
		int empty();
		void push(char x);
		void pop();
		char top();
};

stack::stack()
{
	data(new char  [100] ,top(-1) )
}

stack::~stack()
{
	delete [] data;
}

int stack::empty()
{
	return(top==-1);
}

void stack::push(char x)
{
	data[++top]=x;
}

void stack::pop()
{
	--top;
}

char stack::top()
{
	return data[top];
}


