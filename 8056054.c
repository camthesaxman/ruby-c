int __fastcall map_copy_with_padding(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r7@1
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r5@2
  int v8; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  a3 = (unsigned __int16)a3;
  v5 = dword_3004878 + 14 * dword_3004870 + 14;
  if ( (_WORD)a3 )
  {
    v6 = a3;
    do
    {
      CpuSet(v3, v5, v4);
      v5 += 2 * v4 + 30;
      v3 += 2 * v4;
      --v6;
    }
    while ( v6 );
  }
  return v8;
}
