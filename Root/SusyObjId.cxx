#include "SusyCommon/SusyObjId.h"
using std::string;

namespace Susy
{

std::string SusyObjId2str(const SusyObjId &id)
{
    string s = "Unknown";
    switch(id){
    case SusyObjId::eleTightLH              : s = "TightLH"             ; break;
    case SusyObjId::eleMediumLH             : s = "MediumLH"            ; break;
    case SusyObjId::eleLooseLH              : s = "LooseLH"             ; break;
    case SusyObjId::muoMedium               : s = "Medium"              ; break;
    case SusyObjId::muoLoose                : s = "Loose"               ; break;
    case SusyObjId::Invalid                 : s = "Invalid"             ; break;
    } // swtich
    return s;
}
bool isEleObj(const SusyObjId &id)
{
    bool isEle = false;
    switch(id){
    case SusyObjId::eleTightLH              : isEle = true            ; break;
    case SusyObjId::eleMediumLH             : isEle = true            ; break;
    case SusyObjId::eleLooseLH              : isEle = true            ; break;
    case SusyObjId::muoMedium               : isEle = false           ; break;
    case SusyObjId::muoLoose                : isEle = false           ; break;
    case SusyObjId::Invalid                 : isEle = false           ; break;
    } // swtich
    return isEle;
} 

} // namespace Susy
