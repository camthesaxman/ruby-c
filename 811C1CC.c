int __fastcall sub_811C1CC(int a1)
{
  int v1; // r8@1
  __int16 *v2; // r6@1
  unsigned int v3; // r1@1
  int v4; // r5@1
  int v5; // r0@2
  unsigned int v6; // r3@2
  signed int v7; // r2@3
  int v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  v2 = &gUnknown_083FDFF4;
  sub_811D6A8(&v9, &v10);
  CpuSet(&gUnknown_083FC348, v10, 240);
  LoadPalette((int)*(&gUnknown_083FDB00 + *(_WORD *)(v1 + 38)), 240, 32);
  LoadPalette((int)*(&gUnknown_083FDB14 + v2024EAC), 250, 12);
  v3 = 0;
  v4 = v9;
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
    while ( v7 >> 16 <= 31 );
    v3 = (v6 + 0x10000) >> 16;
  }
  while ( (signed int)(v6 + 0x10000) >> 16 <= 19 );
  v4000200 |= 2u;
  v4000004 |= 0x10u;
  SetHBlankCallback((int)sub_811C77C);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
