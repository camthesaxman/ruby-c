int __fastcall sub_81022F0(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10) + 1;
  *(_WORD *)(v1 + 10) = v2;
  if ( v2 > 64 )
  {
    *(_WORD *)(v1 + 10) = 0;
    v2000000 = 19;
  }
  return 0;
}
