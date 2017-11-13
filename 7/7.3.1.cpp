#include<iostream>
using namespace std;
#include<cstring>
#include<vector>

class Window_mgr;
//class Screen;
typedef string::size_type pos;
//typedef vector<Screen>::size_type v_size;


class Screen{
//friend void Window_mgr::clear(v_size);
friend class Window_mgr;
public:
	Screen()=default;
	Screen(pos ht,pos wd){
		height=ht;
		width=wd;
	}
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
	Screen &set(char);
	Screen &set(pos,pos,char);
	char get() const
	{
		return contents[cursor];
	}
	Screen& move(pos r,pos c);
	Screen& display(){cout<<contents;}
inline
	char get(pos ht,pos wd)const;

private:
	int cursor=0;
	int height=0,width=0;
	string contents;

};
inline Screen &Screen::set(char c)
{
	contents[cursor]=c;
	return *this;
}
inline Screen &Screen::set(pos ht,pos wd,char c)
{
	int row=ht*width;
	cursor=row+wd;
	contents[cursor]=c;
	return *this;
}

inline
Screen& Screen::move(pos r,pos c)
{
	pos row=r*width;
	cursor=row+c;
	return *this;
}
char Screen::get(pos r,pos c)const
{
	pos row=r*width;
	return contents[row+c];
}

class Window_mgr{
public:
	typedef vector<Screen>::size_type v_size;
	void clear(v_size i){
		Screen &s=mys[i];
		s.contents=" ";
	}
	void win_display()
	{
		for(auto a:mys)
		{
			a.display();
			cout<<endl;
		}
	}
private:
	vector<Screen> mys={Screen(10,5,'a'),Screen(10,5,'b')};
};

int main()
{
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display();
	cout<<"\n";
	myScreen.display();
	cout<<endl;
	Window_mgr win;
	win.win_display();
	win.clear(1);
	win.win_display();
	cout<<endl;
	
	return 0;
}
