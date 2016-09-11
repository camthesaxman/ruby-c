int __fastcall sub_8031A6C(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r6@1
  char *v5; // r5@1
  char *v6; // r4@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r4@1
  int v11; // [sp+8h] [bp-18h]@1
  unsigned int v12; // [sp+Ch] [bp-14h]@1
  int v13; // [sp+1Ch] [bp-4h]@1

  v2 = a1;
  v3 = battle_get_per_side_status(a2);
  v4 = 8 * v2;
  v5 = &gTrainerFrontPicTable[8 * v2];
  v6 = (char *)&gTrainerFrontPicCoords + 4 * v2;
  v7 = (unsigned __int8)*v6;
  v8 = (unsigned __int8)v6[1];
  v9 = *(int *)((char *)&gUnknown_081FAF4C + (4 * v3 & 0x3FF));
  DecompressPicFromTable_2(v5, v7, v8, 0x2000000, v9, 0);
  v11 = v9;
  v12 = (v12 & 0xFFFF0000 | *((_WORD *)v5 + 2)) & 0xFFFF | (*((_WORD *)v5 + 3) << 16);
  LoadCompressedObjectPic(&v11);
  LoadCompressedObjectPalette(&gTrainerFrontPicPaletteTable[v4]);
  return v13;
}
