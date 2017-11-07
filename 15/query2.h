#include"query.h"
#include<algorithm>
class Query;
class Query_base{
	friend class Query;
protected:
    typedef vector<string>:: size_type line_no;
	virtual ~Query_base()=default;
private:
	virtual QueryResult eval(const TextQuery&) const=0;
	virtual string rep() const=0;

};
class Query{
	friend Query operator~(const Query&);	
	friend Query operator&(const Query&,const Query&);	
	friend Query operator|(const Query&,const Query&);	
public:
	Query(const string&);
	QueryResult eval(const TextQuery &t) const {return q->eval(t);}
	string rep() {return q->rep();}
private:
	Query(shared_ptr<Query_base> query):q(query){}
	shared_ptr<Query_base> q;

};
ostream& operator<<(ostream &os,Query query)
{
	return os<<query.rep();
}
class WordQuery{
	friend class Query;
	WordQuery(string &s):query_word(s){}
	QueryResult eval(TextQuery &t) const {return t.query(query_word);}
	string rep() const {return query_word;}
	string query_word;

};

inline Query::Query(const string &s):q(new WordQuery(s)){}

class NotQuery{
	friend  Query operator~(const Query&);
	NotQuery(const Query &q):query(q){}
	QueryResult eval(TextQuery &t)const;
	string rep()const{return "~("+query.rep()+")";}
	Query query;
};
inline Query operator~(const Query &operand)
{
	return shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery:public Query_base{
protected:
	BinaryQuery(const Query &l,const Query &r,string s):lhs(l),rhs(r),opSym(s){}
	string rep() const {return "("+lhs.rep()+opSym+rhs.rep()+")";}
	Query lhs,rhs;
	string opSym;
};
class AndQuery:public BinaryQuery{
	friend Query operator&(const Query&,const Query&);
	AndQuery(const Query &l,const Query &r):BinaryQuery(l,r,"&"){}
	QueryResult eval(const TextQuery &)const;
};
inline Query operator&(const Query &l,const Query &r){
	shared_ptr<Query_base> tmp(new AndQuery(l,r));
	return Query(tmp);
}
class OrQuery:public BinaryQuery{
	friend operator|(const Query&,const Query&);
	OrQuery(const Query &l,const Query &r):BinaryQuery(l,r,"|"){}
	QueryResult eval(const TextQuery&)const;
};
inline operator|(const Query &l,const Query &r){
	return shared_ptr<Query_base>(new OrQuery(l,r));
}

QueryResult
OrQuery::eval(const TextQuery &t) const{
	auto right=rhs.eval(t),left=lhs.eval(t);
	auto ret_line=make_shared<set<line_no>>(left.begin(),left.end());
	ret_lines->insert(right.begin(),right.end());
	return QueryResult(rep(),ret_lines,left.get_file());
}

QueryResult
AndQuery::eval(const TextQuery &t) const{
	auto right=rhs.eval(t),left=lhs.eval(t);
	auto ret_lines=make_shared<set<line_no>>();
	set_intersection(left.begin(),left.end(),right.begin(),right.end(),inserter(*ret_lines,ret_line->begin()));
	return QueryResult(rep(),ret_lines,left.get_file());
}

QueryResult
NotQuery::eval(const TextQuery &t)const{
	auto result=query.eval(t);
	auto ret_lines=make_shared<set<line_no>>();
	auto beg=result.begin(),end=result.end();
	auto sz=result.get_file()->size();
	for(size_t n=0;n!=sz;++n){
		if(beg==end||*beg!=n)
			ret_lines->insert(n);
		else if(beg!=end)
			++beg;
	}
	return QueryResult(rep(),ret_lines,left.get_file());
}
