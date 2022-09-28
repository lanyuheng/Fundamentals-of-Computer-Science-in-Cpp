
#include <iostream.h> 
 class Shape {
   protected:
      int width, length;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         length = b;
      }
     virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class TwoD: public Shape{
   public:
      TwoD( int a=0, int b=0):Shape(a, b) { }
      virtual float getArea()
      { 
         return -1;
      }
};
class circle:public TwoD
{
	public:
		circle(float r1)
		{
			radius=r1;
		}
		float getArea()
		{
			return 3.14*radius*radius;
		}
	private:
		float radius;
};
class Triangle:public TwoD
{
	public:
		Triangle(float w1,float l1)
		{
			width=w1;
			length=l1;
		}
		float getArea()
		{
			return width*length;
		}
	private:
		float width,length;
};
class square:public TwoD
{
	public:
		square(float e1)
		{
			edge=e1;
		}
		float getArea()
		{
			return edge*edge;
		}
	private:
		float edge;
};
class ThrD: public Shape{
   public:
      ThrD( int a=0, int b=0,int c=0):Shape(a, b) { }
      virtual float getarea ()
      { 
         return -1;
      }
	  virtual float getvolume()
      { 
         return -1;
      }

};
class sphere:public ThrD
{
	public:
		sphere(float r1)
		{
			radius=r1;
		}
		virtual float getarea()
		{
			return 4*3.14*radius*radius;
		}
		 virtual float getvolume ()
      { 
         return 1.33*3.14*radius*radius*radius;
      }
	private:
		float radius;
};
class cube:public ThrD
{
	public:
		cube(float s1)
		{
			sedge=s1;
		}
		virtual float getarea()
		{
			return 6*sedge*sedge;;
		}
		 virtual float getvolume ()
      { 
         return sedge*sedge*sedge;;
      }
	private:
		float sedge;
};
// 程序的主函数
void  main( )
{
   double r,a,b,d,r1,d1;
   Shape *shape;
   TwoD *td1;
   cout<<"请输入圆的半径:";
   cin>>r;
   td1=new circle(r);
   cout<<"圆的面积:"<<td1->getArea()<<endl;
   delete td1;
   cout<<"请输入矩形的长宽:";
   cin>>a>>b;
   td1=new Triangle(a,b);
   cout<<"矩形的面积:"<<td1->getArea()<<endl;
   delete td1;
   cout<<"请输入正方形的边长:";
   cin>>d;
   td1= new square(d);
   cout<<"正方形的面积:"<<td1->getArea()<<endl;
   ThrD *th1;
   cout<<"请输入球的半径:";
   cin>>r1;
   th1=new sphere(r1);
   cout<<"球的表面积:"<<th1->getarea()<<endl;
   cout<<"球的体积:"<<th1->getvolume()<<endl;
   delete th1;
   cout<<"请输入方体的边长:";
   cin>>d1;
   th1=new cube(d1);
   cout<<"正方体的表面积:"<<th1->getarea()<<endl;
   cout<<"正方体的体积:"<<th1->getvolume()<<endl;
   delete th1;
}
