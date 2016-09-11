int __fastcall fish2(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1

  v1 = a1;
  sub_805A954();
  v2 = *(_WORD *)(v1 + 10) + 1;
  *(_WORD *)(v1 + 10) = v2;
  if ( v2 > 59 )
    ++*(_WORD *)(v1 + 8);
  return 0;
}
