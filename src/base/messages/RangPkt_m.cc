//
// Generated file, do not edit! Created by opp_msgc 4.2 from messages/RangPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RangPkt_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(RangPkt);

RangPkt::RangPkt(const char *name, int kind) : ApplPkt(name,kind)
{
    this->RangingMethodId_var = 0;
}

RangPkt::RangPkt(const RangPkt& other) : ApplPkt(other)
{
    copy(other);
}

RangPkt::~RangPkt()
{
}

RangPkt& RangPkt::operator=(const RangPkt& other)
{
    if (this==&other) return *this;
    ApplPkt::operator=(other);
    copy(other);
    return *this;
}

void RangPkt::copy(const RangPkt& other)
{
    this->RangingMethodId_var = other.RangingMethodId_var;
    this->coordenadas_var = other.coordenadas_var;
}

void RangPkt::parsimPack(cCommBuffer *b)
{
    ApplPkt::parsimPack(b);
    doPacking(b,this->RangingMethodId_var);
    doPacking(b,this->coordenadas_var);
}

void RangPkt::parsimUnpack(cCommBuffer *b)
{
    ApplPkt::parsimUnpack(b);
    doUnpacking(b,this->RangingMethodId_var);
    doUnpacking(b,this->coordenadas_var);
}

int RangPkt::getRangingMethodId() const
{
    return RangingMethodId_var;
}

void RangPkt::setRangingMethodId(int RangingMethodId)
{
    this->RangingMethodId_var = RangingMethodId;
}

Coord& RangPkt::getCoordenadas()
{
    return coordenadas_var;
}

void RangPkt::setCoordenadas(const Coord& coordenadas)
{
    this->coordenadas_var = coordenadas;
}

class RangPktDescriptor : public cClassDescriptor
{
  public:
    RangPktDescriptor();
    virtual ~RangPktDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(RangPktDescriptor);

RangPktDescriptor::RangPktDescriptor() : cClassDescriptor("RangPkt", "ApplPkt")
{
}

RangPktDescriptor::~RangPktDescriptor()
{
}

bool RangPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RangPkt *>(obj)!=NULL;
}

const char *RangPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RangPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RangPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *RangPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "RangingMethodId",
        "coordenadas",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RangPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='R' && strcmp(fieldName, "RangingMethodId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coordenadas")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RangPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "Coord",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RangPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int RangPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RangPkt *pp = (RangPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RangPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RangPkt *pp = (RangPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRangingMethodId());
        case 1: {std::stringstream out; out << pp->getCoordenadas(); return out.str();}
        default: return "";
    }
}

bool RangPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RangPkt *pp = (RangPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setRangingMethodId(string2long(value)); return true;
        default: return false;
    }
}

const char *RangPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "Coord",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *RangPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RangPkt *pp = (RangPkt *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getCoordenadas()); break;
        default: return NULL;
    }
}


