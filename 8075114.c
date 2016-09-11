int __fastcall sub_8075114(int a1, char a2, char a3)
{
  int v3; // r6@1
  char v4; // r5@1
  int v6; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int16)a1;
  v3 = (unsigned __int16)a1;
  v4 = a2;
  if ( a3 == 1 )
  {
    sub_80751C0(a1, a2, 125, 10);
  }
  else
  {
    if ( !(v20239F8 & 0x40) )
      m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 85);
    sub_80751C0(v3, v4, 125, 10);
  }
  return v6;
}
