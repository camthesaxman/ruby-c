int __fastcall sub_80737A4(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r2@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = *(int *)((char *)&gTilesetAnimTable_Rustboro_0 + ((((a1 - a2) << 16) & 0x70000u) >> 14));
  if ( v2 )
    sub_8072E24(v2, gUnknown_0837BFA4[a2], 128);
  return v4;
}
