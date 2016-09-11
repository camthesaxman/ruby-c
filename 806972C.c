signed int __fastcall sub_806972C(__int16 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r10@1
  __int16 v6; // r7@1
  __int16 v7; // r9@1
  signed int v8; // r6@1
  signed int v9; // r5@1
  unsigned int v10; // r0@1
  unsigned int v11; // r4@1

  v4 = a1;
  v5 = a1;
  v6 = a2;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  v10 = MapGridGetMetatileBehaviorAt(a3, a4) << 24;
  v11 = v10 >> 24;
  if ( sub_80576A0(SBYTE3(v10)) << 24 )
  {
    if ( v6 > v9 )
      return 0;
  }
  else if ( sub_80576B4(v11) << 24 )
  {
    if ( v7 < v9 )
      return 0;
  }
  else if ( sub_80576C8(v11) << 24 )
  {
    if ( v4 > v8 )
      return 0;
  }
  else if ( sub_80576DC(v11) << 24 && v5 < v8 )
  {
    return 0;
  }
  return 1;
}
