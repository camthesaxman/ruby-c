int __fastcall sub_8073644(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8072E24((int)*(&gTilesetAnimTable_Lavaridge + (a1 & 3)), 100688896, 128);
  sub_8072E24(
    *(int *)((char *)&gTilesetAnimTable_Lavaridge + (4 * (v1 + 2 - 4 * ((v1 + 2) >> 2)) & 0x3FF)),
    100689024,
    128);
  return v3;
}
