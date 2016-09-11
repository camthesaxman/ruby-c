int __fastcall sub_807A850(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  __int16 v3; // r8@1
  signed int v4; // r0@1
  unsigned int v5; // r7@1
  signed int v6; // r0@1
  int v7; // r4@2
  char *v8; // r3@2
  char v9; // r0@2
  int v11; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = duplicate_obj_of_side_rel2move_in_transparent_mode(0) << 16;
  v5 = (unsigned int)v4 >> 16;
  v6 = v4 >> 16;
  if ( v6 >= 0 )
  {
    v7 = 17 * v6;
    v8 = &gSprites[68 * v6];
    v9 = v8[5] & 0xF3 | 4 * (*(_BYTE *)(v2 + 20) & 3);
    v8[5] = v9;
    v8[5] = v9 & 0xF | 16 * *(_BYTE *)(v2 + 16);
    *((_WORD *)v8 + 23) = 8;
    *((_WORD *)v8 + 24) = v3;
    *((_WORD *)v8 + 25) = v5;
    *((_WORD *)v8 + 18) = *(_WORD *)&gSprites[68 * *(_WORD *)(v2 + 8) + 36];
    dword_2020020[v7] = (int)sub_807A8D4;
    ++*(_WORD *)(v2 + 18);
  }
  return v11;
}
