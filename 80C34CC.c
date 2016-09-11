int __fastcall sub_80C34CC(__int16 a1, __int16 a2, __int16 a3, __int16 a4)
{
  char *v4; // r4@1
  int v6; // [sp+10h] [bp-4h]@0

  v4 = &gSprites[68 * v2018000];
  *((_WORD *)v4 + 16) = 272;
  *((_WORD *)v4 + 17) = a2;
  *((_WORD *)v4 + 18) = 0;
  *((_WORD *)v4 + 19) = 0;
  *((_WORD *)v4 + 27) = a1 + 32;
  *((_WORD *)v4 + 28) = a3;
  *((_WORD *)v4 + 29) = a4;
  *((_WORD *)v4 + 30) = 0;
  *((_DWORD *)v4 + 7) = sub_80C3588;
  v2018004 = 1;
  return v6;
}
