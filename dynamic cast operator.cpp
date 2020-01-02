s
	void *pv;
	
	pb=&b;
	pa=dynamic_cast<A*>(pb);		//casting pb to A type , earlier pb was of B type i.e,A type ==> B type    //store result in pa 
	cout<<pb<<"   cast to =  "<<pa<<"   valid up-cast "<<endl;		//addrsess of b object ..
	
	pa=&b;		//base class pointer to derived class object 
	pb=dynamic_cast<B*>(pa);				//pb point to b object 
	cout<<pa<<"  cast to =  "<<pb<<"   valid down-cast "<<endl;
	
	pa=&a;
	pb=dynamic_cast<B*>(pa);				//pb point to a object , and it does  not point to b type object 
	//if i do static_cast the result will be value of pa
	//by checking if pb is NULL or not whether the dynamic cast has gone through , or whether pointed object is B type object or not 
	cout<<pa<<"  cast to =  "<<pb<<"   valid down-cast "<<endl;
	
	pa=(A*)&c;	
	//these two are unrelated , therfore done through C style that's only way to do it .....							
	pc=dynamic_cast<C*>(pa);			
	cout<<pa<<"  cast to =   "<<pc<<"   invalid unrelated-cast "<<endl;
	
	pa=0;
	pc=dynamic_cast<C*>(pa);
	cout<<pa<<"  cast to =   "<<pc<<"  invalid unrelated-cast "<<endl;
	
	pa=&a;
	pv=dynamic_cast<void*>(pa);		//allowed to pointer type to void ...
	//void* is not polymorphic type , no virtual function table 
	cout<<pa<<"  cast to =   "<<pv<<"  valid voidcast "<<endl;
	
	//the argument/source expression to dynamic cast must be pointed to polymorphic hierchy(virtual function) ":
	//check the argument to which VFT it belong to and knows the type 
	//virtual funcion : it has virtual function pointer in that object and that pointer is spaecific to type of class we have seen   
	
}

