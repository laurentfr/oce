// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_UnitsSequence_HeaderFile
#define _Units_UnitsSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Units_UnitsSequence_HeaderFile
#include <Handle_Units_UnitsSequence.hxx>
#endif

#ifndef _Units_UtsSequence_HeaderFile
#include <Units_UtsSequence.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Units_Unit_HeaderFile
#include <Handle_Units_Unit.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Units_Unit;
class Units_UtsSequence;



class Units_UnitsSequence : public MMgt_TShared {

public:

  
      Units_UnitsSequence();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Units_Unit)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Units_UnitsSequence)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Units_Unit)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Units_UnitsSequence)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Units_Unit)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Units_UnitsSequence)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Units_Unit)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Units_UnitsSequence)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Units_UnitsSequence Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Units_Unit)& anItem) ;
  
  Standard_EXPORT    const Handle_Units_Unit& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Units_Unit& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Units_UtsSequence& Sequence() const;
  
        Units_UtsSequence& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Units_UnitsSequence ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Units_UnitsSequence)

protected:




private: 


Units_UtsSequence mySequence;


};

#define Item Handle_Units_Unit
#define Item_hxx <Units_Unit.hxx>
#define TheSequence Units_UtsSequence
#define TheSequence_hxx <Units_UtsSequence.hxx>
#define TCollection_HSequence Units_UnitsSequence
#define TCollection_HSequence_hxx <Units_UnitsSequence.hxx>
#define Handle_TCollection_HSequence Handle_Units_UnitsSequence
#define TCollection_HSequence_Type_() Units_UnitsSequence_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Units_UnitsSequence ShallowCopy(const Handle_Units_UnitsSequence& me) {
 return me->ShallowCopy();
}



#endif