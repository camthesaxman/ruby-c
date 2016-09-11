int __fastcall sub_80A46FC(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  int i; // r6@1
  int v5; // r4@2
  unsigned int v6; // r5@2
  int v7; // r7@2
  unsigned __int8 v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+8h] [bp-28h]@1
  int v11; // [sp+Ch] [bp-24h]@1
  int v12; // [sp+2Ch] [bp-4h]@0

  v10 = a3;
  v11 = a4;
  v9 = a1;
  for ( i = a2; i <= v10 && (unsigned __int8)sub_80A42B0(i, v11) != 1; i = (i + 1) & 0xFF )
  {
    v5 = (i + (unsigned __int8)byte_3005D10[4 * v2038559 + 1]) & 0xFF;
    v6 = (unsigned int)((i << 25) + 0x2000000) >> 24;
    gBG2TilemapBuffer[32 * v6 + 14] = 89;
    gBG2TilemapBuffer[32 * v6 + 46] = 105;
    v7 = sub_80A425C(v9, (int)&gStringVar1, i);
    v5 *= 4;
    itemid_copy_name(*(_WORD *)(v5 + dword_3005D24), &gStringVar2);
    sub_80A41E0(v7, *(_WORD *)(v5 + dword_3005D24) - 132, (int)&gStringVar2, *(_WORD *)(v5 + dword_3005D24 + 2), 3);
    MenuPrint((int)&gStringVar1, 14, (unsigned int)((i << 25) + 0x2000000) >> 24);
  }
  return v12;
}
