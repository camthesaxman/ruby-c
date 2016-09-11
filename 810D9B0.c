int __fastcall sub_810D9B0(__int16 a1)
{
  __int16 v1; // r4@1
  unsigned __int16 *v2; // r0@2
  unsigned __int16 v3; // r1@2
  int result; // r0@3

  v1 = a1;
  result = 0;
  if ( FlagGet(0x82Du) << 24 )
  {
    v2 = (unsigned __int16 *)GetVarPointer(0x404Au);
    v3 = v1 + *v2;
    *v2 = v3;
    if ( v3 > 0xCCu )
      result = 1;
  }
  return result;
}
