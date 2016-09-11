int __fastcall IsMetatileDirectionallyImpassable(int a1, __int16 a2, __int16 a3, int a4)
{
  __int16 v4; // r6@1
  __int16 v5; // r7@1
  int v6; // r5@1
  unsigned __int8 v7; // r0@2
  int result; // r0@3

  v4 = a2;
  v5 = a3;
  v6 = (4 * a4 & 0x3FF) - 4;
  result = 1;
  if ( !(call_via_r1(*(_BYTE *)(a1 + 30), *(void **)((char *)&gUnknown_08375684 + v6)) << 24) )
  {
    v7 = MapGridGetMetatileBehaviorAt(v4, v5);
    if ( !(call_via_r1(v7, *(void **)((char *)&gUnknown_08375694 + v6)) << 24) )
      result = 0;
  }
  return result;
}
