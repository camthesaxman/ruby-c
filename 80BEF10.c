int __fastcall sub_80BEF10(int a1, signed int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 == 1 )
  {
    StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Super);
  }
  else if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Hyper);
    }
    else if ( a2 == 3 )
    {
      StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Master);
    }
  }
  else if ( !a2 )
  {
    StringCopy((_BYTE *)gUnknown_083D1464[a1], &OtherText_Normal);
  }
  return v3;
}
