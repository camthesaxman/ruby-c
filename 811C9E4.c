int __fastcall sub_811C9E4(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r1@1

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 48) = v2;
  v3 = *(_WORD *)(v1 + 32) + v2;
  *(_WORD *)(v1 + 32) = v3;
  if ( (unsigned int)((v3 + 31) << 16) > 0x12E0000 )
    ++*(_WORD *)(v1 + 46);
  return 0;
}
