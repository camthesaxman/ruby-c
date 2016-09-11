int __fastcall sub_806EBF0(unsigned __int8 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r5@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  GetMonNickname((int)&dword_3004360[25 * a1], (int)&gStringVar1);
  itemid_copy_name(v3, &gStringVar2);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F1AE);
  sub_806E834((int)&gStringVar4, v4);
  return v6;
}
