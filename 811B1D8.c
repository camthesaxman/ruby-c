signed int __fastcall sub_811B1D8(int a1)
{
  int v1; // r7@1
  __int16 *v2; // r5@1
  unsigned int v3; // r1@1
  int v4; // r9@1
  int v5; // r0@2
  unsigned int v6; // r3@2
  signed int v7; // r2@3
  int v8; // ST00_4@5
  int v10; // [sp+8h] [bp-24h]@1
  char v11; // [sp+Ch] [bp-20h]@1

  v1 = a1;
  v2 = &gUnknown_083FDB44;
  sub_811D6A8(&v10, &v11);
  v3 = 0;
  v4 = v10;
  do
  {
    LOWORD(v5) = 0;
    v6 = v3 << 16;
    do
    {
      *(_WORD *)(2 * (((signed int)(v3 << 16) >> 11) + (signed __int16)v5) + v4) = *v2 | 0xF000;
      v7 = ((signed __int16)v5 + 1) << 16;
      ++v2;
      v5 = ((signed __int16)v5 + 1) & 0xFFFF;
    }
    while ( v7 >> 16 <= 29 );
    v3 = (v6 + 0x10000) >> 16;
  }
  while ( (signed int)(v6 + 0x10000) >> 16 <= 19 );
  v8 = *(_WORD *)(v1 + 18);
  sub_811D6E8(word_3004DE0, 0, *(_WORD *)(v1 + 16), 132);
  ++*(_WORD *)(v1 + 8);
  return 1;
}
