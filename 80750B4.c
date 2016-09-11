int __fastcall sub_80750B4(unsigned __int16 a1, char a2, char a3)
{
  int v3; // r6@1
  char v4; // r5@1
  int v6; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  if ( a3 == 1 )
  {
    sub_80751C0(a1, a2, 125, 10);
  }
  else
  {
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 85);
    sub_80751C0(v3, v4, 125, 10);
    v202F7A0 = 2;
    sub_8075450(2);
  }
  return v6;
}
