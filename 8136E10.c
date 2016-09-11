int __fastcall sub_8136E10(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  unsigned int v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = 0;
  do
  {
    *(_BYTE *)(v4 + v5) = GetMonData(v3, gUnknown_08406118[v5], a3);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 4 );
  return v7;
}
