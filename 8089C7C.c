int __fastcall sub_8089C7C(char a1)
{
  char v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = (18 - 2 * v202FFA9) & 0xFF;
  sub_8089BDC(0x13u, 18 - 2 * v202FFA9, 10, v202FFA9, (int)&gUnknown_0839F494, 33750954, 3u);
  InitMenu(0, 20, v2 | 1, v202FFA9, v1, 9);
  return v4;
}
