int __fastcall dp01_build_cmdbuf_x10_TODO(unsigned __int8 a1, __int16 a2)
{
  signed int v2; // r3@1
  char *v3; // r4@1
  signed int v4; // r3@3
  int v6; // [sp+1Ch] [bp-4h]@0

  byte_3004040 = 16;
  unk_3004041 = v2024D26;
  word_3004042 = a2;
  word_3004044 = v2024BE6;
  word_3004046 = v2024BE8;
  word_3004048 = v2024C04;
  byte_300404A = v2024C06;
  byte_300404B = v2016003;
  byte_300404C = v201605E;
  byte_300404D = v20160C1;
  byte_300404E = v2024C0B;
  byte_300404F = *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 2);
  v2 = 0;
  v3 = (char *)33704608;
  do
  {
    byte_3004050[v2] = *v3;
    v3 += 88;
    ++v2;
  }
  while ( v2 <= 3 );
  v4 = 0;
  do
  {
    byte_3004054[v4] = byte_30041C0[v4];
    byte_3004064[v4] = byte_3004290[v4];
    byte_3004074[v4] = byte_30042B0[v4];
    ++v4;
  }
  while ( v4 <= 15 );
  dp01_prepare_buffer(a1, &byte_3004040, 68);
  return v6;
}
