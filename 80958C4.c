int __fastcall sub_80958C4(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  v2 = &dword_3004B20[10 * v1];
  sub_806E7D0(*((_BYTE *)v2 + 16), (int)&gUnknown_083B5FF4);
  *((_WORD *)v2 + 8) = *((_WORD *)v2 + 9);
  sub_806D538(0, 0);
  SwitchTaskToFollowupFunc(v1);
  return v4;
}
