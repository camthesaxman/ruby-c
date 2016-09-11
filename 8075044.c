int __fastcall cry_related(unsigned __int16 a1, char a2)
{
  int v2; // r5@1
  char v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 85);
  sub_80751C0(v2, v3, 125, 10);
  v202F7A0 = 2;
  sub_8075450(2);
  return v5;
}
