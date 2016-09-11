int __fastcall sub_80E32E0(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+14h] [bp-4h]@0

  v1 = 0;
  do
  {
    *((_WORD *)&byte_3004B28[40 * a1] + v1) = word_3004B00[v1];
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 7 );
  dword_3004B20[10 * a1] = (int)sub_80E3338;
  return v3;
}
