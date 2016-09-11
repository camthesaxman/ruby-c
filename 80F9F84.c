int __fastcall sub_80F9F84(int a1, int a2, int a3)
{
  unsigned int *v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = &dword_3004360[25 * v202E8CC];
  v4 = (unsigned __int16)GetMonData((int)v3, v202E8CE + 13, a3);
  GetMonNickname((int)v3, (int)&gStringVar1);
  StringCopy(&gStringVar2, &gMoveNames[13 * v4]);
  return v6;
}
