int __fastcall sub_8102034(int a1)
{
  __int16 v1; // r1@1

  v1 = *(_WORD *)(a1 + 8) + 1;
  *(_WORD *)(a1 + 8) = v1;
  if ( v1 > 29 )
  {
    sub_81024F0();
    v2000000 = 12;
  }
  return 0;
}
