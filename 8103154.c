signed int __fastcall sub_8103154(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r8@1
  unsigned __int8 v3; // r7@1
  int v4; // r5@1
  __int16 v5; // r4@2

  v2 = a1;
  v3 = a2;
  LOWORD(v4) = 0;
  do
  {
    v5 = v4;
    if ( sub_81030A4(2 - v4, v2, v3) << 24 )
    {
      v2000034 = 2;
      v200002E = v4;
      return 1;
    }
    v4 = ((signed __int16)v4 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v5 + 1) <= 4 );
  return 0;
}
