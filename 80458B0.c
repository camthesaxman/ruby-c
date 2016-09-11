int __fastcall sub_80458B0(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  unsigned int v3; // r4@1
  char *v4; // r0@2
  signed int v5; // r7@3
  char *v6; // r8@3
  int v7; // r5@4
  int v8; // r6@4
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 384 * (unsigned __int8)battle_get_per_side_status(*(_WORD *)&gSprites[68 * a1 + 58] & 0xFF) + 33555744;
  sub_80034D4(v2, (int)&gUnknown_08400DD6);
  v3 = 0;
  do
  {
    v4 = sub_8043CDC(43);
    CpuSet(v4, v2 + (v3 << 6), 67108872);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 < 7 );
  v5 = 3;
  v6 = &gSprites[68 * v1];
  do
  {
    v7 = v5 / 8 << 6;
    CpuSet(v2, 32 * ((*((_WORD *)v6 + 2) & 0x3FF) + v5 % 8 + v7) + 100728832, 67108872);
    v8 = v2 + 32;
    CpuSet(v8, 32 * ((*((_WORD *)v6 + 2) & 0x3FF) + v5 % 8 + 8 + v7) + 100728832, 67108872);
    v2 = v8 + 32;
    ++v5;
  }
  while ( v5 < 10 );
  return v10;
}
