signed int __fastcall sub_80697C8(__int16 a1, __int16 a2, __int16 a3, int a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r10@1
  unsigned int v6; // r3@1
  unsigned int v7; // r7@1
  unsigned int v8; // r9@1
  signed int v9; // r6@1
  signed int v10; // r5@1
  unsigned int v11; // r0@1
  unsigned int v12; // r4@1

  v4 = a3;
  v5 = a3;
  v6 = a4 << 16;
  v7 = v6 >> 16;
  v8 = v6 >> 16;
  v9 = a1;
  v10 = a2;
  v11 = MapGridGetMetatileBehaviorAt(a1, a2) << 24;
  v12 = v11 >> 24;
  if ( sub_80576A0(SBYTE3(v11)) << 24 )
  {
    if ( v10 < (signed __int16)v7 )
      return 0;
  }
  else if ( sub_80576B4(v12) << 24 )
  {
    if ( v10 > (signed __int16)v8 )
      return 0;
  }
  else if ( sub_80576C8(v12) << 24 )
  {
    if ( v9 < v4 )
      return 0;
  }
  else if ( sub_80576DC(v12) << 24 && v9 > v5 )
  {
    return 0;
  }
  return 1;
}
