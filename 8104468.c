int __fastcall sub_8104468(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8102D28(*(_WORD *)(a1 + 16) << 16 >> 24);
  v2 = *(_WORD *)(v1 + 18) + 1;
  *(_WORD *)(v1 + 18) = v2;
  if ( v2 > 59 )
  {
    ++*(_WORD *)(v1 + 8);
    v3 = sub_8105578();
    sub_81056F0(v3);
  }
  return v5;
}
