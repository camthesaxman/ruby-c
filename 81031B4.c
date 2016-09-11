signed int __fastcall sub_81031B4(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r10@1
  unsigned __int8 v3; // r9@1
  int v4; // r6@1
  int v5; // r8@3
  __int16 v6; // r4@4
  signed int result; // r0@5
  unsigned int v8; // r8@7
  unsigned int v9; // r5@8
  signed __int16 v10; // r0@14

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)sub_8103134();
  if ( !v4 && sub_81030E0(0) << 24 )
  {
_0810321E:
    v8 = 1;
    while ( 1 )
    {
      v9 = v8 << 16;
      if ( v4 || !(sub_81030E0(v8) << 24) )
      {
        if ( sub_81030A4(1 - v8, v2, v3) << 24 )
          break;
      }
      v8 = (v9 + 0x10000) >> 16;
      if ( (signed int)(v9 + 0x10000) >> 16 > 4 )
        return 0;
    }
    if ( (signed __int16)v8 != 1 || !v4 && sub_81030E0(3) << 24 )
    {
      if ( (signed __int16)v8 <= 3 && (v4 || !(sub_81030E0(v8 + 1) << 24)) )
      {
        v2000034 = 2;
        v200002E = v8 + 1;
        return 1;
      }
      v2000034 = 1;
      v10 = v8;
    }
    else
    {
      v10 = 3;
      v2000034 = 3;
    }
    v200002E = v10;
    result = 1;
  }
  else
  {
    LOWORD(v5) = 1;
    while ( 1 )
    {
      v6 = v5;
      if ( sub_81030A4(v5, v2, v3) << 24 )
        break;
      v5 = ((signed __int16)v5 + 1) & 0xFFFF;
      if ( (signed __int16)(v6 + 1) > 3 )
        goto _0810321E;
    }
    v2000034 = v5;
    v200002E = 0;
    result = 1;
  }
  return result;
}
