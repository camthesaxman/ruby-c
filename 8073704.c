int __fastcall sub_8073704(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned int v3; // r5@1
  unsigned int v4; // r4@2
  int v5; // r5@3
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a2;
  v3 = (a1 - a2) & 0xFFFF;
  if ( v3 > 0xB )
  {
    v5 = 4 * (((_BYTE)a1 - a2) & 3);
    sub_8072E24(*(int *)((char *)&gTilesetAnimTable_Mauville_0B + v5), gUnknown_0837BAE4[a2], 128);
    sub_8072E24(*(int *)((char *)&gTilesetAnimTable_Mauville_1B + v5), gUnknown_0837BB04[v2], 128);
  }
  else
  {
    v4 = 4 * (v3 % 0xC) & 0x3FFFF;
    sub_8072E24(*(int *)((char *)&gTilesetAnimTable_Mauville_0A + v4), gUnknown_0837BAE4[a2], 128);
    sub_8072E24(*(int *)((char *)&gTilesetAnimTable_Mauville_1A + v4), gUnknown_0837BB04[v2], 128);
  }
  return v7;
}
