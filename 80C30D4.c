int __fastcall sub_80C30D4(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r7@1
  int v3; // r6@1
  signed int v4; // r5@1
  signed int v5; // r4@1
  int v7; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 33785200;
  do
  {
    sub_80C3024(*(_WORD *)v5, v4, v2, v3, *(_DWORD *)(v5 + 56));
    v5 += 64;
    ++v4;
  }
  while ( v4 <= 3 );
  return v7;
}
