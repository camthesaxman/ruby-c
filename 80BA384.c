int __fastcall sub_80BA384(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  sub_80BA6B8(*((_BYTE *)v1 + 8));
  sub_80BA700((*((_WORD *)v1 + 5) + 349) & 0xFFFF, 7, 8);
  sub_80BA79C(*(&gBGMNames + *((_WORD *)v1 + 5)), 11, 8);
  sub_80BA700(*((_WORD *)v1 + 6), 7, 15);
  sub_80BA79C(*(&gSENames + *((_WORD *)v1 + 6)), 11, 15);
  *v1 = (int)Task_HandleMainMenuInput;
  return v3;
}
