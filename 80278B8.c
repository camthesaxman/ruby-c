int sub_80278B8()
{
  unsigned int v0; // r0@1
  signed int v1; // r0@3
  _WORD *v2; // r0@5
  int v3; // r1@6
  int v5; // [sp+14h] [bp-4h]@0

  v0 = 33704976;
  do
  {
    do
    {
      v0 = (Random(v0) & 0x1FF) + 1;
      v2024BE6 = v0;
    }
    while ( v0 > 0x162 );
    v1 = 3;
    do
      --v1;
    while ( v1 >= 0 );
    v2 = &unk_81FACFC;
    do
    {
      ++v2;
      v3 = *v2;
    }
    while ( v3 != v2024BE6 && v3 != 0xFFFF );
    v0 = 0xFFFF;
  }
  while ( v3 != 0xFFFF );
  v2024C6C &= 0xFFFFFBFF;
  v2024C10 = *(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]);
  v2024C08 = sub_801B5C0(v2024BE6, 0);
  return v5;
}
