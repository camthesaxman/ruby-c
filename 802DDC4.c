int __fastcall sub_802DDC4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  GetMonData((char *)&unk_3004360 + 100 * *((_BYTE *)v2 + 8), 56);
  dword_3004330[*((_BYTE *)v2 + 12)] = (int)sub_802D90C;
  DestroyTask(v1);
  return v4;
}
