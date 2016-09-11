int __fastcall sub_8074F6C(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( byte_3004AEC )
    v2 = 0;
  m4aSongNumStart(v2);
  m4aMPlayImmInit(&unk_3007380);
  m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 0);
  m4aSongNumStop(v2);
  sub_81DE0F0(&unk_3007380, v3);
  return v5;
}
